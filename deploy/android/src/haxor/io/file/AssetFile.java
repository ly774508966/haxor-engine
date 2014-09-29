package haxor.io.file;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class AssetFile extends haxor.core.Resource
{
	public    AssetFile(haxe.lang.EmptyObject empty)
	{
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public    AssetFile(java.lang.String p_name)
	{
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		haxor.io.file.AssetFile.__hx_ctor_haxor_io_file_AssetFile(this, p_name);
	}
	
	
	public static   void __hx_ctor_haxor_io_file_AssetFile(haxor.io.file.AssetFile __temp_me255509, java.lang.String p_name)
	{
		haxor.core.Resource.__hx_ctor_haxor_core_Resource(__temp_me255509, p_name);
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new haxor.io.file.AssetFile(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new haxor.io.file.AssetFile(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	public  java.lang.Object asset;
	
	public   java.lang.Object get_asset()
	{
		return null;
	}
	
	
	public   haxe.root.Array<java.lang.Object> stof32a(java.lang.String v, java.lang.String sep)
	{
		if (( sep == null )) 
		{
			sep = " ";
		}
		
		java.lang.String __temp_stmt256239 = null;
		{
			java.lang.String s = haxe.root.StringTools.replace(v, "\n", " ");
			__temp_stmt256239 = s.trim();
		}
		
		haxe.root.Array<java.lang.String> l = haxe.lang.StringExt.split(__temp_stmt256239, sep);
		haxe.root.Array<java.lang.Object> a = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		{
			int _g1 = 0;
			int _g = l.length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				a.push(haxe.root.Std.parseFloat(l.__get(i)));
			}
			
		}
		
		return a;
	}
	
	
	public   haxe.root.Array<java.lang.Object> stoi16a(java.lang.String v, java.lang.String sep)
	{
		if (( sep == null )) 
		{
			sep = " ";
		}
		
		java.lang.String __temp_stmt256240 = null;
		{
			java.lang.String s = haxe.root.StringTools.replace(v, "\n", " ");
			__temp_stmt256240 = s.trim();
		}
		
		haxe.root.Array<java.lang.String> l = haxe.lang.StringExt.split(__temp_stmt256240, sep);
		haxe.root.Array<java.lang.Object> a = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
		{
			int _g1 = 0;
			int _g = l.length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				a.push(haxe.root.Std.parseInt(l.__get(i)));
			}
			
		}
		
		return a;
	}
	
	
	public   haxe.root.Array<haxe.root.Array> stoi16ta(java.lang.String v, int s, java.lang.String sep)
	{
		if (( sep == null )) 
		{
			sep = " ";
		}
		
		java.lang.String __temp_stmt256241 = null;
		{
			java.lang.String s1 = haxe.root.StringTools.replace(v, "\n", " ");
			__temp_stmt256241 = s1.trim();
		}
		
		haxe.root.Array<java.lang.String> l = haxe.lang.StringExt.split(__temp_stmt256241, sep);
		java.lang.String tl = "";
		haxe.root.Array<haxe.root.Array> a = new haxe.root.Array<haxe.root.Array>(new haxe.root.Array[]{});
		haxe.root.Array<java.lang.Object> bf = null;
		int k = 0;
		while (( k < l.length ))
		{
			bf = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
			{
				int _g = 0;
				while (( _g < s ))
				{
					int j = _g++;
					bf.push(haxe.root.Std.parseInt(l.__get(k++)));
				}
				
			}
			
			a.push(((haxe.root.Array) (bf) ));
		}
		
		return a;
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef256242 = true;
			switch (field.hashCode())
			{
				case 93121264:
				{
					if (field.equals("asset")) 
					{
						__temp_executeDef256242 = false;
						this.asset = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef256242) 
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
			boolean __temp_executeDef256243 = true;
			switch (field.hashCode())
			{
				case 93121264:
				{
					if (field.equals("asset")) 
					{
						__temp_executeDef256243 = false;
						this.asset = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef256243) 
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
			boolean __temp_executeDef256244 = true;
			switch (field.hashCode())
			{
				case 1707258317:
				{
					if (field.equals("stoi16ta")) 
					{
						__temp_executeDef256244 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("stoi16ta"))) );
					}
					
					break;
				}
				
				
				case 93121264:
				{
					if (field.equals("asset")) 
					{
						__temp_executeDef256244 = false;
						if (handleProperties) 
						{
							return this.get_asset();
						}
						 else 
						{
							return this.asset;
						}
						
					}
					
					break;
				}
				
				
				case -1884589823:
				{
					if (field.equals("stoi16a")) 
					{
						__temp_executeDef256244 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("stoi16a"))) );
					}
					
					break;
				}
				
				
				case 1130071239:
				{
					if (field.equals("get_asset")) 
					{
						__temp_executeDef256244 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("get_asset"))) );
					}
					
					break;
				}
				
				
				case -1884677398:
				{
					if (field.equals("stof32a")) 
					{
						__temp_executeDef256244 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("stof32a"))) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef256244) 
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
			boolean __temp_executeDef256245 = true;
			switch (field.hashCode())
			{
				case 93121264:
				{
					if (field.equals("asset")) 
					{
						__temp_executeDef256245 = false;
						if (handleProperties) 
						{
							return ((double) (haxe.lang.Runtime.toDouble(this.get_asset())) );
						}
						 else 
						{
							return ((double) (haxe.lang.Runtime.toDouble(this.asset)) );
						}
						
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef256245) 
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
			boolean __temp_executeDef256246 = true;
			switch (field.hashCode())
			{
				case 1707258317:
				{
					if (field.equals("stoi16ta")) 
					{
						__temp_executeDef256246 = false;
						return this.stoi16ta(haxe.lang.Runtime.toString(dynargs.__get(0)), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ), haxe.lang.Runtime.toString(dynargs.__get(2)));
					}
					
					break;
				}
				
				
				case 1130071239:
				{
					if (field.equals("get_asset")) 
					{
						__temp_executeDef256246 = false;
						return this.get_asset();
					}
					
					break;
				}
				
				
				case -1884589823:
				{
					if (field.equals("stoi16a")) 
					{
						__temp_executeDef256246 = false;
						return this.stoi16a(haxe.lang.Runtime.toString(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					break;
				}
				
				
				case -1884677398:
				{
					if (field.equals("stof32a")) 
					{
						__temp_executeDef256246 = false;
						return this.stof32a(haxe.lang.Runtime.toString(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef256246) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("asset");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}

