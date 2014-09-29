package haxor.thread;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Activity_Iterate_43__Fun extends haxe.lang.Function
{
	public    Activity_Iterate_43__Fun(haxe.root.Array<java.lang.Object> p_length1, haxe.root.Array<java.lang.Object> it, haxe.root.Array<java.lang.Object> p_step1, haxe.root.Array<haxe.lang.Function> p_callback1)
	{
		super(1, 0);
		this.p_length1 = p_length1;
		this.it = it;
		this.p_step1 = p_step1;
		this.p_callback1 = p_callback1;
	}
	
	
	@Override public   java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		double t = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((double) (__fn_float1) )) : (((double) (haxe.lang.Runtime.toDouble(__fn_dyn1)) )) );
		boolean finished = false;
		{
			int _g = 0;
			while (( _g < ((int) (haxe.lang.Runtime.toInt(this.p_step1.__get(0))) ) ))
			{
				int i = _g++;
				if (( ((int) (haxe.lang.Runtime.toInt(this.it.__get(0))) ) >= ((int) (haxe.lang.Runtime.toInt(this.p_length1.__get(0))) ) )) 
				{
					return false;
				}
				
				if ( ! (haxe.lang.Runtime.toBool(this.p_callback1.__get(0).__hx_invoke1_o(((double) (((int) (haxe.lang.Runtime.toInt(this.it.__get(0))) )) ), haxe.lang.Runtime.undefined))) ) 
				{
					finished = true;
					break;
				}
				
				{
					int __temp_arrIndex255672 = 0;
					int __temp_arrVal255670 = ((int) (haxe.lang.Runtime.toInt(this.it.__get(__temp_arrIndex255672))) );
					int __temp_arrRet255671 = __temp_arrVal255670++;
					this.it.__set(__temp_arrIndex255672, __temp_arrVal255670);
					int __temp_expr256488 = __temp_arrRet255671;
				}
				
			}
			
		}
		
		return  ! (finished) ;
	}
	
	
	public  haxe.root.Array<java.lang.Object> p_length1;
	
	public  haxe.root.Array<java.lang.Object> it;
	
	public  haxe.root.Array<java.lang.Object> p_step1;
	
	public  haxe.root.Array<haxe.lang.Function> p_callback1;
	
}

