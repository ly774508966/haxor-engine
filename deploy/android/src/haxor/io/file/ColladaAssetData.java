package haxor.io.file;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class ColladaAssetData extends haxe.lang.HxObject
{
	public    ColladaAssetData(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    ColladaAssetData()
	{
		haxor.io.file.ColladaAssetData.__hx_ctor_haxor_io_file_ColladaAssetData(this);
	}
	
	
	public static   void __hx_ctor_haxor_io_file_ColladaAssetData(haxor.io.file.ColladaAssetData __temp_me293)
	{
		{
			__temp_me293.axis = "y_up";
			__temp_me293.unitValue = 0.0;
			__temp_me293.unitName = "";
			__temp_me293.modification = "";
			__temp_me293.creation = "";
			__temp_me293.source = "";
			__temp_me293.tool = "";
			__temp_me293.author = "";
		}
		
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new haxor.io.file.ColladaAssetData(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new haxor.io.file.ColladaAssetData();
	}
	
	
	public  java.lang.String author;
	
	public  java.lang.String tool;
	
	public  java.lang.String source;
	
	public  java.lang.String creation;
	
	public  java.lang.String modification;
	
	public  java.lang.String unitName;
	
	public  double unitValue;
	
	public  java.lang.String axis;
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef1164 = true;
			switch (field.hashCode())
			{
				case -481158579:
				{
					if (field.equals("unitValue")) 
					{
						__temp_executeDef1164 = false;
						this.unitValue = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef1164) 
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
			boolean __temp_executeDef1165 = true;
			switch (field.hashCode())
			{
				case 3008417:
				{
					if (field.equals("axis")) 
					{
						__temp_executeDef1165 = false;
						this.axis = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case -1406328437:
				{
					if (field.equals("author")) 
					{
						__temp_executeDef1165 = false;
						this.author = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case -481158579:
				{
					if (field.equals("unitValue")) 
					{
						__temp_executeDef1165 = false;
						this.unitValue = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3565976:
				{
					if (field.equals("tool")) 
					{
						__temp_executeDef1165 = false;
						this.tool = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case -292854225:
				{
					if (field.equals("unitName")) 
					{
						__temp_executeDef1165 = false;
						this.unitName = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case -896505829:
				{
					if (field.equals("source")) 
					{
						__temp_executeDef1165 = false;
						this.source = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case -684600932:
				{
					if (field.equals("modification")) 
					{
						__temp_executeDef1165 = false;
						this.modification = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
				case 1820421855:
				{
					if (field.equals("creation")) 
					{
						__temp_executeDef1165 = false;
						this.creation = haxe.lang.Runtime.toString(value);
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef1165) 
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
			boolean __temp_executeDef1166 = true;
			switch (field.hashCode())
			{
				case 3008417:
				{
					if (field.equals("axis")) 
					{
						__temp_executeDef1166 = false;
						return this.axis;
					}
					
					break;
				}
				
				
				case -1406328437:
				{
					if (field.equals("author")) 
					{
						__temp_executeDef1166 = false;
						return this.author;
					}
					
					break;
				}
				
				
				case -481158579:
				{
					if (field.equals("unitValue")) 
					{
						__temp_executeDef1166 = false;
						return this.unitValue;
					}
					
					break;
				}
				
				
				case 3565976:
				{
					if (field.equals("tool")) 
					{
						__temp_executeDef1166 = false;
						return this.tool;
					}
					
					break;
				}
				
				
				case -292854225:
				{
					if (field.equals("unitName")) 
					{
						__temp_executeDef1166 = false;
						return this.unitName;
					}
					
					break;
				}
				
				
				case -896505829:
				{
					if (field.equals("source")) 
					{
						__temp_executeDef1166 = false;
						return this.source;
					}
					
					break;
				}
				
				
				case -684600932:
				{
					if (field.equals("modification")) 
					{
						__temp_executeDef1166 = false;
						return this.modification;
					}
					
					break;
				}
				
				
				case 1820421855:
				{
					if (field.equals("creation")) 
					{
						__temp_executeDef1166 = false;
						return this.creation;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef1166) 
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
			boolean __temp_executeDef1167 = true;
			switch (field.hashCode())
			{
				case -481158579:
				{
					if (field.equals("unitValue")) 
					{
						__temp_executeDef1167 = false;
						return this.unitValue;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef1167) 
			{
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("axis");
		baseArr.push("unitValue");
		baseArr.push("unitName");
		baseArr.push("modification");
		baseArr.push("creation");
		baseArr.push("source");
		baseArr.push("tool");
		baseArr.push("author");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


