package haxe.ds;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class IntMap_iterator_363__Fun<T> extends haxe.lang.Function
{
	public    IntMap_iterator_363__Fun(haxe.root.Array<haxe.ds.IntMap> _g1, haxe.root.Array<java.lang.Object> len, haxe.root.Array<java.lang.Object> i)
	{
		super(0, 0);
		this._g1 = _g1;
		this.len = len;
		this.i = i;
	}
	
	
	@Override public   java.lang.Object __hx_invoke0_o()
	{
		{
			int _g = ((int) (haxe.lang.Runtime.toInt(this.i.__get(0))) );
			while (( _g < ((int) (haxe.lang.Runtime.toInt(this.len.__get(0))) ) ))
			{
				int j = _g++;
				if ( ! ((( (( ( ((haxe.ds.IntMap<T>) (((haxe.ds.IntMap) (this._g1.__get(0)) )) ).flags[( j >> 4 )] >>> (( (( j & 15 )) << 1 )) ) & 3 )) != 0 ))) ) 
				{
					this.i.__set(0, j);
					return true;
				}
				
			}
			
		}
		
		return false;
	}
	
	
	public  haxe.root.Array<haxe.ds.IntMap> _g1;
	
	public  haxe.root.Array<java.lang.Object> len;
	
	public  haxe.root.Array<java.lang.Object> i;
	
}


