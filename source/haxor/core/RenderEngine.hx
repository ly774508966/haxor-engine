#if !ie8
package haxor.core;
import haxor.component.Camera;
import haxor.component.Renderer;
import haxor.component.Transform;
import haxor.context.EngineContext;
import haxor.context.Process;

/**
 * Class that handles the hi-level rendering behaviour of Haxor Engine.
 * @author Eduardo Pons - eduardo@thelaborat.org
 */
@:allow(haxor)
class RenderEngine
{

	static private function Render():Void
	{
		#if profile
		Stats.BeginRender();		
		#end
		//Shadow Collect Pass		
		RenderCameras();	
		RenderFinish();
	}
	
	
	/**
	 * Render all cameras.
	 */
	static private function RenderCameras():Void
	{		
		var cl  : Array<Camera> = EngineContext.camera.list;
		for (i in 0...cl.length)
		{
			var c : Camera = Camera.m_current = cl[i];			
			RenderCamera(c);
		}
	}
	
	/**
	 * Renders a camera.
	 * @param	c
	 */
	static private function RenderCamera(c:Camera):Void
	{
		if (!c.enabled) return;
		EngineContext.camera.Bind(c);			
		var layers : Array<Int> = c.m_layers;						
		for (i in 0...layers.length)
		{	
			var l : Int = layers[i];
			RenderCameraLayer(l, c);
		}		
		
		//Filters			
		
		EngineContext.camera.Unbind(c);
	}
	
	
	
	/**
	 * Renders a camera layer display list.
	 * @param	l
	 * @param	c
	 */
	static private function RenderCameraLayer(l:Int,c:Camera):Void
	{
		
		var lt  : Transform			   	  = null; //Last used transform.
		var renderers : Process<Renderer> = EngineContext.renderer.display[l];
		for (j in 0...renderers.length)
		{
			var r : Renderer = renderers.list[j];
			
			if (EngineContext.renderer.IsSAPCulled(r, c)) continue;
			//If the current Renderer's Entity is different reset the uniform flag of the last transform.
			//if (r.transform != lt) { if(lt!=null) lt.m_uniform_dirty = false; lt = r.transform; }
			RenderRenderer(r);
		}
	}
	
	/**
	 * Renders the target renderer.
	 * @param	r
	 */
	static private function RenderRenderer(r : Renderer):Void
	{	
		
		r.UpdateCulling();
		
		if (!r.visible)
		{
			#if profile
			Stats.culled++;
			#end
			return;
		}
		
		#if profile
		Stats.visible++;
		#end
		
		//Grab Texture if requested. Check index of start then capture up to it, then stop for optimization.
			
		r.OnRender();
			
		//Shadow Cast if receiver.			
	}
	
	/**
	 * Ends the rendering of the frame.
	 */
	static private function RenderFinish():Void
	{		
		var cl  : Array<Camera> = EngineContext.camera.list;
		for (i in 0...cl.length)
		{
			cl[i].m_view_uniform_dirty = false;
			cl[i].m_proj_uniform_dirty = false;
		}
		
		EngineContext.renderer.sap_dirty = false;
	}
	
	/**
	 * Resize callback.
	 */
	static private function Resize():Void
	{		
		EngineContext.camera.Resize();		
	}
}
#end