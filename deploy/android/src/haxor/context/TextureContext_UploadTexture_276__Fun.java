package haxor.context;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class TextureContext_UploadTexture_276__Fun extends haxe.lang.Function
{
	public    TextureContext_UploadTexture_276__Fun(haxe.root.Array<java.lang.Object> steps, haxe.root.Array<java.lang.Object> chn_type, haxe.root.Array<java.lang.Object> py, haxe.root.Array<haxor.graphics.texture.Texture2D> p_texture1, haxe.root.Array<java.lang.Object> chn_fmt, haxe.root.Array<haxor.context.TextureContext> _g, haxe.root.Array<haxor.graphics.texture.Bitmap> b, haxe.root.Array<haxe.lang.Function> p_on_complete1)
	{
		super(1, 0);
		this.steps = steps;
		this.chn_type = chn_type;
		this.py = py;
		this.p_texture1 = p_texture1;
		this.chn_fmt = chn_fmt;
		this._g = _g;
		this.b = b;
		this.p_on_complete1 = p_on_complete1;
	}
	
	
	@Override public   java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		double t = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((double) (__fn_float1) )) : (((double) (haxe.lang.Runtime.toDouble(__fn_dyn1)) )) );
		if (( ((int) (haxe.lang.Runtime.toInt(this.py.__get(0))) ) >= this.b.__get(0).m_height )) 
		{
			if (( this.p_on_complete1.__get(0) != null )) 
			{
				this.p_on_complete1.__get(0).__hx_invoke0_o();
			}
			
			return false;
		}
		
		if (( this.p_texture1.__get(0) == this._g.__get(0).bind )) 
		{
			java.lang.Object __temp_expr54712 = null;
		}
		 else 
		{
			this._g.__get(0).bind = this.p_texture1.__get(0);
			int id = ((int) (haxe.lang.Runtime.toInt(this._g.__get(0).ids.__get(this._g.__get(0).bind._cid_))) );
			int target = 0;
			{
				haxor.graphics.texture.Texture p_texture2 = this._g.__get(0).bind;
				if (( p_texture2.get_type() == haxor.graphics.TextureType.Texture2D )) 
				{
					target = 3553;
				}
				 else 
				{
					if (( p_texture2.get_type() == haxor.graphics.TextureType.RenderTexture )) 
					{
						target = 3553;
					}
					 else 
					{
						if (( p_texture2.get_type() == haxor.graphics.TextureType.TextureCube )) 
						{
							target = 34067;
						}
						 else 
						{
							target = 3553;
						}
						
					}
					
				}
				
			}
			
			haxor.graphics.GL.m_gl.BindTexture(target, id);
		}
		
		{
			int _g1 = 0;
			while (( _g1 < ((int) (haxe.lang.Runtime.toInt(this.steps.__get(0))) ) ))
			{
				int i = _g1++;
				if (( ((int) (haxe.lang.Runtime.toInt(this.py.__get(0))) ) < 0 )) 
				{
					{
						int __temp_arrIndex54565 = 0;
						int __temp_arrVal54563 = ((int) (haxe.lang.Runtime.toInt(this.py.__get(__temp_arrIndex54565))) );
						int __temp_arrRet54564 = __temp_arrVal54563++;
						this.py.__set(__temp_arrIndex54565, __temp_arrVal54563);
						int __temp_expr54713 = __temp_arrRet54564;
					}
					
					continue;
				}
				
				if (( ((int) (haxe.lang.Runtime.toInt(this.py.__get(0))) ) >= this.b.__get(0).m_height )) 
				{
					if (( this.p_on_complete1.__get(0) != null )) 
					{
						this.p_on_complete1.__get(0).__hx_invoke0_o();
					}
					
					return false;
				}
				
				int pos = ( ( ((int) (haxe.lang.Runtime.toInt(this.py.__get(0))) ) * this.b.__get(0).m_width ) * this.b.__get(0).m_channels );
				int len = ( this.b.__get(0).m_width * this.b.__get(0).m_channels );
				this.b.__get(0).get_buffer().SetViewSlice(pos, len);
				{
					haxor.io.Buffer p_data = this.b.__get(0).get_buffer();
					haxor.graphics.GL.m_gl.TexSubImage2D(3553, 0, 0, ((int) (haxe.lang.Runtime.toInt(this.py.__get(0))) ), this.b.__get(0).m_width, 1, ((int) (haxe.lang.Runtime.toInt(this.chn_fmt.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(this.chn_type.__get(0))) ), p_data);
				}
				
				this.b.__get(0).get_buffer().ResetSlice();
				{
					int __temp_arrIndex54568 = 0;
					int __temp_arrVal54566 = ((int) (haxe.lang.Runtime.toInt(this.py.__get(__temp_arrIndex54568))) );
					int __temp_arrRet54567 = __temp_arrVal54566++;
					this.py.__set(__temp_arrIndex54568, __temp_arrVal54566);
					int __temp_expr54714 = __temp_arrRet54567;
				}
				
			}
			
		}
		
		return true;
	}
	
	
	public  haxe.root.Array<java.lang.Object> steps;
	
	public  haxe.root.Array<java.lang.Object> chn_type;
	
	public  haxe.root.Array<java.lang.Object> py;
	
	public  haxe.root.Array<haxor.graphics.texture.Texture2D> p_texture1;
	
	public  haxe.root.Array<java.lang.Object> chn_fmt;
	
	public  haxe.root.Array<haxor.context.TextureContext> _g;
	
	public  haxe.root.Array<haxor.graphics.texture.Bitmap> b;
	
	public  haxe.root.Array<haxe.lang.Function> p_on_complete1;
	
}


