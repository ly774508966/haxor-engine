package haxor.context;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Process<T> extends haxor.context.BaseProcess
{
	public    Process(haxe.lang.EmptyObject empty)
	{
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public    Process(java.lang.String p_name, int p_size, java.lang.Object p_update_cid)
	{
		super(haxe.lang.EmptyObject.EMPTY);
		haxor.context.Process.__hx_ctor_haxor_context_Process(this, p_name, p_size, p_update_cid);
	}
	
	
	public static  <T_c> void __hx_ctor_haxor_context_Process(haxor.context.Process<T_c> __temp_me164191, java.lang.String p_name, int p_size, java.lang.Object p_update_cid)
	{
		haxor.context.BaseProcess.__hx_ctor_haxor_context_BaseProcess(__temp_me164191, p_name, ( (( p_update_cid == null )) ? (((java.lang.Object) (true) )) : (p_update_cid) ));
		boolean __temp_p_update_cid164190 = ( (( p_update_cid == null )) ? (haxe.lang.Runtime.toBool(true)) : (haxe.lang.Runtime.toBool(p_update_cid)) );
		__temp_me164191.list = new haxe.root.Array<T_c>(( (T_c[]) (new java.lang.Object[] {}) ));
		__temp_me164191.m_length = 0;
		{
			int _g = 0;
			while (( _g < p_size ))
			{
				int i = _g++;
				__temp_me164191.list.push(null);
			}
			
		}
		
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new haxor.context.Process<java.lang.Object>(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new haxor.context.Process<java.lang.Object>(haxe.lang.Runtime.toString(arr.__get(0)), ((int) (haxe.lang.Runtime.toInt(arr.__get(1))) ), ((java.lang.Object) (arr.__get(2)) ));
	}
	
	
	public  haxe.root.Array<T> list;
	
	@Override public   int get_length()
	{
		return this.m_length;
	}
	
	
	public  int m_length;
	
	@Override public   void Add(haxor.core.Resource p_item)
	{
		int iid = ((int) (haxe.lang.Runtime.toInt(p_item.__pid.__get(this.__cid))) );
		if (( iid >= 0 )) 
		{
			return ;
		}
		
		if (( this.m_length >= this.list.length )) 
		{
			this.list.push(null);
		}
		
		this.list.__set(this.m_length, ((T) (((java.lang.Object) (p_item) )) ));
		p_item.__pid.__set(this.__cid, this.m_length++);
	}
	
	
	@Override public   haxor.core.Resource Remove(haxor.core.Resource p_item)
	{
		int iid = ((int) (haxe.lang.Runtime.toInt(p_item.__pid.__get(this.__cid))) );
		if (( iid < 0 )) 
		{
			return p_item;
		}
		
		p_item.__pid.__set(this.__cid, -1);
		this.m_length--;
		if (( this.m_length <= 0 )) 
		{
			return p_item;
		}
		
		this.list.__set(iid, this.list.__get(this.m_length));
		p_item = ((haxor.core.Resource) (((java.lang.Object) (this.list.__get(iid)) )) );
		p_item.__pid.__set(this.__cid, iid);
		return p_item;
	}
	
	
	public   void Swap(T p_a, T p_b, java.lang.Object p_index_only)
	{
		boolean __temp_p_index_only164189 = ( (( p_index_only == null )) ? (haxe.lang.Runtime.toBool(false)) : (haxe.lang.Runtime.toBool(p_index_only)) );
		haxor.core.Resource ra = ((haxor.core.Resource) (((java.lang.Object) (p_a) )) );
		haxor.core.Resource rb = ((haxor.core.Resource) (((java.lang.Object) (p_b) )) );
		int ia = ((int) (haxe.lang.Runtime.toInt(ra.__pid.__get(this.__cid))) );
		if (( ia < 0 )) 
		{
			return ;
		}
		
		int ib = ((int) (haxe.lang.Runtime.toInt(rb.__pid.__get(this.__cid))) );
		if (( ib < 0 )) 
		{
			return ;
		}
		
		if ( ! (__temp_p_index_only164189) ) 
		{
			this.list.__set(ia, p_b);
			this.list.__set(ib, p_a);
		}
		
		rb.__pid.__set(this.__cid, ia);
		ra.__pid.__set(this.__cid, ib);
	}
	
	
	@Override public   void Clear()
	{
		this.m_length = 0;
		this.list = new haxe.root.Array<T>(( (T[]) (new java.lang.Object[] {}) ));
	}
	
	
	public   void Sort(haxe.lang.Function p_method)
	{
		this.list.sort(p_method);
		{
			int _g1 = 0;
			int _g = this.m_length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				haxor.core.Resource it = ((haxor.core.Resource) (((java.lang.Object) (this.list.__get(i)) )) );
				if (( it != null )) 
				{
					it.__pid.__set(this.__cid, i);
				}
				
			}
			
		}
		
	}
	
	
	public   java.lang.String ToString()
	{
		java.lang.String log = "";
		{
			int _g1 = 0;
			int _g = this.m_length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				haxor.core.Resource it = ((haxor.core.Resource) (((java.lang.Object) (this.list.__get(i)) )) );
				log += ( ( ( ( "[" + it.get_name() ) + "," ) + ((int) (haxe.lang.Runtime.toInt(it.__pid.__get(this.__cid))) ) ) + "]" );
			}
			
		}
		
		return log;
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef164839 = true;
			switch (field.hashCode())
			{
				case -1705094408:
				{
					if (field.equals("m_length")) 
					{
						__temp_executeDef164839 = false;
						this.m_length = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164839) 
			{
				return super.__hx_setField_f(field, value, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef164840 = true;
			switch (field.hashCode())
			{
				case -1705094408:
				{
					if (field.equals("m_length")) 
					{
						__temp_executeDef164840 = false;
						this.m_length = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3322014:
				{
					if (field.equals("list")) 
					{
						__temp_executeDef164840 = false;
						this.list = ((haxe.root.Array<T>) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164840) 
			{
				return super.__hx_setField(field, value, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		{
			boolean __temp_executeDef164841 = true;
			switch (field.hashCode())
			{
				case -1712277876:
				{
					if (field.equals("ToString")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("ToString"))) );
					}
					
					break;
				}
				
				
				case 3322014:
				{
					if (field.equals("list")) 
					{
						__temp_executeDef164841 = false;
						return this.list;
					}
					
					break;
				}
				
				
				case 2582974:
				{
					if (field.equals("Sort")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("Sort"))) );
					}
					
					break;
				}
				
				
				case 974314479:
				{
					if (field.equals("get_length")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("get_length"))) );
					}
					
					break;
				}
				
				
				case 65193517:
				{
					if (field.equals("Clear")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("Clear"))) );
					}
					
					break;
				}
				
				
				case -1705094408:
				{
					if (field.equals("m_length")) 
					{
						__temp_executeDef164841 = false;
						return this.m_length;
					}
					
					break;
				}
				
				
				case 2590131:
				{
					if (field.equals("Swap")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("Swap"))) );
					}
					
					break;
				}
				
				
				case 65665:
				{
					if (field.equals("Add")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("Add"))) );
					}
					
					break;
				}
				
				
				case -1850743644:
				{
					if (field.equals("Remove")) 
					{
						__temp_executeDef164841 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("Remove"))) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164841) 
			{
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		{
			boolean __temp_executeDef164842 = true;
			switch (field.hashCode())
			{
				case -1705094408:
				{
					if (field.equals("m_length")) 
					{
						__temp_executeDef164842 = false;
						return ((double) (this.m_length) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164842) 
			{
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		{
			int __temp_hash164844 = field.hashCode();
			boolean __temp_executeDef164843 = true;
			switch (__temp_hash164844)
			{
				case 65193517:case -1850743644:case 65665:case 974314479:
				{
					if (( (( ( __temp_hash164844 == 65193517 ) && field.equals("Clear") )) || ( (( ( __temp_hash164844 == -1850743644 ) && field.equals("Remove") )) || ( (( ( __temp_hash164844 == 65665 ) && field.equals("Add") )) || field.equals("get_length") ) ) )) 
					{
						__temp_executeDef164843 = false;
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					break;
				}
				
				
				case 2590131:
				{
					if (field.equals("Swap")) 
					{
						__temp_executeDef164843 = false;
						this.Swap(((T) (dynargs.__get(0)) ), ((T) (dynargs.__get(1)) ), dynargs.__get(2));
					}
					
					break;
				}
				
				
				case -1712277876:
				{
					if (field.equals("ToString")) 
					{
						__temp_executeDef164843 = false;
						return this.ToString();
					}
					
					break;
				}
				
				
				case 2582974:
				{
					if (field.equals("Sort")) 
					{
						__temp_executeDef164843 = false;
						this.Sort(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164843) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		return null;
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("m_length");
		baseArr.push("list");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


