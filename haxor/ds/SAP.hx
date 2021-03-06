package haxor.ds;
import haxor.context.Process;
import haxor.context.UID;
import haxor.core.Resource;
import haxor.math.Mathf;
import haxor.math.Vector3;
import haxor.platform.Types.Float32;

/**
 * Sweep and Prune structure for space based sorting and collision pairs detections.
 * @author Eduardo Pons - eduardo@thelaborat.org
 */
class SAP
{	
		
	/**
	 * Linked list interval x.
	 */
	public var x : SAPList;
	
	/**
	 * Linked list interval y.
	 */
	public var y : SAPList;
	
	/**
	 * Linked list interval z.
	 */
	public var z : SAPList;
	
	
	/**
	 * Flag that indicates if this structure will support pair contact queries.
	 */
	private var m_has_query : Bool;
	
	/**
	 * Creates a new SAP structure.
	 */
	public function new(p_bias:Float32=0.0,p_has_query:Bool=true) 
	{
		m_has_query = p_has_query;
		x = new SAPList(p_bias,m_has_query);
		y = new SAPList(p_bias,m_has_query);
		z = new SAPList(p_bias, m_has_query);
	}
	
	/**
	 * Prepares the SAP structure for the next node.
	 * @param	p_id
	 */
	public function Create(p_id:Int):Void
	{
		x.Create(p_id);
		y.Create(p_id);
		z.Create(p_id);				
	}
	
	/**
	 * Update the node in the data structure.
	 * @param	p_id
	 * @param	p_min
	 * @param	p_max
	 */
	public function Update(p_id : Int,p_data:Dynamic,p_min:Vector3,p_max:Vector3):Void
	{
		x.Update(p_id,p_data, p_min.x, p_max.x);
		y.Update(p_id,p_data, p_min.y, p_max.y);
		z.Update(p_id,p_data, p_min.z, p_max.z);
	}
	
	/**
	 * Removes a given element.
	 * @param	p_id
	 */
	public function Remove(p_id:Int):Void
	{
		x.Remove(p_id);
		y.Remove(p_id);
		z.Remove(p_id);
	}
	
	/**
	 * Check if 2 elements overlap in the SAP structure.
	 * @param	p_a
	 * @param	p_b
	 * @return
	 */
	public function Overlap(p_a:Int, p_b:Int):Bool
	{
		var ia : SAPInterval;
		var ib : SAPInterval;
		
		ia = x.list[p_a];
		ib = x.list[p_b];		
		if (!ia.Overlap(ib)) return false;		
		
		ia = y.list[p_a];
		ib = y.list[p_b];		
		if (!ia.Overlap(ib)) return false;		
		
		ia = z.list[p_a];
		ib = z.list[p_b];
		if (!ia.Overlap(ib)) return false;
		return true;
	}
	
	/**
	 * Performs a intersection query and updates the query list with the result. Use 'count' to iterate in the results.
	 * @param	p_id
	 */
	public function Query(p_id:Int,p_on_fetch : Dynamic -> Dynamic -> Void=null):Void
	{
		if (!m_has_query) return;
						
		//Target nodes in the different SAPLists.
		var tx   : SAPInterval;
		var ty   : SAPInterval;
		var tz   : SAPInterval;
		
		var it : SAPInterval;
		
		var nx  : SAPInterval;
		var ny  : SAPInterval;
		var nz  : SAPInterval;
		
		
		//Start searching collisions in x SAPLIst.
		tx = x.list[p_id];
		ty = y.list[p_id];
		tz = z.list[p_id];
		
		//Forward Check
		it = tx.next;		
		while (it != null)
		{	
			//HitX
			if (it.Overlap(tx))
			{	
				//HitY
				if (y.list[it.id].Overlap(ty))
				{	
					//HitZ
					if (z.list[it.id].Overlap(tz))
					{
						if (p_on_fetch != null) p_on_fetch(tx.data,it.data);
					}					
				}
			}
			it = it.next;			
		}
		
		//Backward Check
		it = tx.prev;		
		while (it != null)
		{	
			//HitX
			if (it.Overlap(tx))
			{	
				//HitY
				if (y.list[it.id].Overlap(ty))
				{	
					//HitZ
					if (z.list[it.id].Overlap(tz))
					{
						if (p_on_fetch != null) p_on_fetch(tx.data,it.data);						
					}					
				}				
			}						
			it = it.prev;
		}
	}
}

/**
 * Linked list adapted for Sweep And Prune structures.
 */
class SAPList
{
	/**
	 * Starting point.
	 */
	public var start : SAPInterval;
	
	/**
	 * List of nodes for direct access.
	 */
	public var list : Array<SAPInterval>;
	
	/**
	 * Flag that indicates this list will support queries.
	 */
	private var m_has_query:Bool;
	
	/**
	 * Margin multiplied in the interval.
	 */
	private var m_bias : Float32;
	
	/**
	 * Creates a new SAPList.
	 */
	public function new(p_bias:Float32=0.0,p_has_query:Bool=true):Void
	{
		list = [];
		for (i in 0...1000) list.push(null);
		m_has_query = p_has_query;
		m_bias = p_bias;
	}
	
	/**
	 * Prepares the list to allow direct access for the informed id.
	 * @param	p_id
	 */
	public function Create(p_id:Int):Void
	{
		while (list.length <= p_id) list.push(null);
		if (list[p_id] == null) list[p_id] = new SAPInterval();		
	}
	
	/**
	 * Updates the node interval and relocates it in the list.
	 * @param	p_id
	 * @param	p_min
	 * @param	p_max
	 */
	public function Update(p_id : Int,p_data:Dynamic, p_min:Float32, p_max:Float32):Void
	{
		list[p_id].id = p_id;
		list[p_id].data = p_data;
		var d: Float32 = (p_max - p_min) * m_bias * 0.5;
		list[p_id].Set(p_min-d,p_max+d);		
		if(m_has_query) RelocateInterval(list[p_id]);
	}
	
	/**
	 * Searches the list from start and inserts the item in the correct location.
	 * @param	p_item
	 */
	private function AddInterval(p_item:SAPInterval):Void
	{
		if (start == null) { start = p_item; p_item.next = p_item.prev = null; return; }
		if (p_item == start) return;		
		var it : SAPInterval = start;
		while (it != null)
		{	
			if (p_item.min < it.min) { InsertInterval(p_item, it); return;	}			
			if(it.next==null) {	InsertInterval(p_item, it);	return;	}
			it = it.next;				
		}				
	}
	
	/**
	 * Inserts a node in the place of another.
	 * @param	p_target
	 * @param	p_at
	 */
	private function InsertInterval(p_item : SAPInterval, p_at : SAPInterval):Void
	{		
		if (p_item == p_at) return;		
		//check min max to add left or right		
		//right
		if (p_item.min > p_at.min)
		{
			p_item.next = p_at.next;
			p_item.prev = p_at;
			p_at.next  	= p_item;
			if (p_item.next != null) p_item.next.prev = p_item;			
		}
		else //left
		{
			p_item.next = p_at;
			p_item.prev = p_at.prev;
			p_at.prev  	  = p_item;
			if (p_item.prev != null) p_item.prev.next = p_item;			
			//Update starting node if inserted left
			if (p_at == start) start = p_item;
		}
	}
	
	/**
	 * Navigates the list and search for the location that 'target' fits.
	 * @param	p_target
	 * @param	p_start
	 */
	private function RelocateInterval(p_item : SAPInterval):Void
	{
		//Check if interval belongs anywhere
		if (p_item.prev == null) 
		if (p_item.next == null)
		{
			AddInterval(p_item);
			return;
		}		
		
		var it 	 	 : SAPInterval 	 = p_item;
		var nav 	 : Int 			 = 0;
		var location : SAPInterval 	 = null;
		
		//Iterate back and forth searching for the location.
		while (it != null)
		{
			var n : SAPInterval = it.next;
			var p : SAPInterval = it.prev;
			if (n == null) if (p == null) break;
			if (p != null) if (p_item.min < p.min) { nav = -1; location = p; }
			if (n != null) if (p_item.min > n.min) { nav =  1; location = n; }
			if (nav == 0) break;
			it = nav < 0 ? p : n;
			nav = 0;
		}		
		
		if (location != null)
		{			
			//Unlink target
			RemoveInterval(p_item);
			//Inserts in the correct location.
			InsertInterval(p_item, location);		
		}
	}
	
	/**
	 * Removes a node using its id.
	 * @param	p_id
	 */
	public inline function Remove(p_id : Int):Void
	{
		RemoveInterval(list[p_id]);
	}
	
	/**
	 * Removes the interval from the linked list topology.
	 * @param	p_target
	 */
	private function RemoveInterval(p_item : SAPInterval):Void
	{
		if (!m_has_query) return;
		var p : SAPInterval = p_item.prev;
		var n : SAPInterval = p_item.next;		
		if (p != null) p.next = n;
		if (n != null) n.prev = p;
		p_item.next = p_item.prev = null;		
		//Update starting nodes
		if (p_item == start) start = n;		
	}
	
	/**
	 * Iterates the list.
	 * @param	p_callback
	 */
	public function Iterate(p_callback : SAPInterval -> Void):Void
	{
		var it : SAPInterval = start;
		while (it != null)
		{
			p_callback(it);
			it = it.next;
		}
	}
	
	/**
	 * Returns the string representation of this list.
	 * @param	p_places
	 * @return
	 */
	public function ToString(p_places:Int=2):String
	{
		var s : String = "";		
		if (m_has_query)
		{
			var it : SAPInterval = start;
			while (it != null)
			{
				s += it.ToString(p_places);
				it = it.next;
			}
		}
		else
		{
			for (i in 0...list.length) s += list[i].ToString(p_places);
		}
		return s;
	}
}


/**
 * Interval data structure for the sweep and prune data structure.
 */
class SAPInterval
{
	/**
	 * Id associated to this interval.
	 */
	public var id : Int;
	/**
	 * Min limit.
	 */
	public var min 		: Float32;	
	
	/**
	 * Max limit.
	 */
	public var max 		: Float32;	
		
	/**
	 * Next interval in the sequence.
	 */
	public var next 	: SAPInterval;	
	
	/**
	 * Previous interval in the sequence.
	 */
	public var prev 	: SAPInterval;
	
	/**
	 * Reference to the node data.
	 */
	public var data : Dynamic;
	
	/**
	 * Creates a new interval.
	 */
	public function new() 
	{ 
		min = 0.0;
		max = 0.0;
		id = 0;
	}
	
	/**
	 * Sets the limits.
	 * @param	p_min
	 * @param	p_max
	 */
	public function Set(p_min:Float32, p_max:Float32):Void	{  min = p_min; max = p_max; }
	
	/**
	 * Tests if a given interval overlaps this interval.
	 * @param	p_interval
	 * @return
	 */
	public function Overlap(p_interval : SAPInterval):Bool { if (p_interval.min > min) return p_interval.min <= max;	return p_interval.max >= min;	}
	
	/**
	 * Returns the string representation of this interval
	 * @return
	 */
	public function ToString(p_places:Int=2):String { return "["+Mathf.RoundPlaces(min,p_places)+","+Mathf.RoundPlaces(max,p_places)+"]"; }
}