package examples.ethan;
import haxe.Timer;
import haxor.component.animation.Animation;
import haxor.component.Camera;
import haxor.component.CameraOrbit;
import haxor.component.light.Light;
import haxor.component.MeshRenderer;
import haxor.component.physics.BoxCollider;
import haxor.component.physics.Collider;
import haxor.component.physics.RigidBody;
import haxor.component.physics.SphereCollider;
import haxor.component.Transform;
import haxor.context.Process;
import haxor.context.UID;
import haxor.core.Application;
import haxor.core.Asset;
import haxor.core.BaseApplication.ApplicationProtocol;
import haxor.core.BaseApplication.EntryPoint;
import haxor.core.Console;
import haxor.core.Debug;
import haxor.core.Entity;
import haxor.core.Enums.AnimationWrap;
import haxor.core.Enums.CameraMode;
import haxor.core.Enums.ClearFlag;
import haxor.core.Enums.ForceMode;
import haxor.core.Enums.InputState;
import haxor.core.IFixedUpdateable;
import haxor.core.IRenderable;
import haxor.core.IUpdateable;
import haxor.core.Resource;
import haxor.core.RenderStats;
import haxor.core.Time;
import haxor.core.Enums.BlendMode;
import haxor.core.Enums.CullMode;
import haxor.core.Enums.MeshPrimitive;
import haxor.core.Enums.PixelFormat;
import haxor.core.Enums.TextureFilter;
import haxor.ds.SAP;
import haxor.ds.USet;
import haxor.graphics.Gizmo;
import haxor.graphics.Graphics;
import haxor.graphics.material.Material;
import haxor.graphics.material.Shader;
import haxor.graphics.mesh.Mesh;
import haxor.graphics.mesh.MeshLayout;
import haxor.graphics.mesh.Model;
import haxor.graphics.Screen;
import haxor.graphics.texture.Bitmap;
import haxor.graphics.texture.RenderTexture;
import haxor.graphics.texture.Texture;
import haxor.graphics.texture.Texture2D;
import haxor.input.Input;
import haxor.input.Joystick;
import haxor.input.KeyCode;
import haxor.io.Buffer;
import haxor.io.file.ColladaFile;
import haxor.io.file.MaterialFile;
import haxor.io.FloatArray;
import haxor.io.Int32Array;
import haxor.io.UInt16Array;
import haxor.math.AABB2;
import haxor.math.Color;
import haxor.math.Mathf;
import haxor.math.Matrix4;
import haxor.math.Quaternion;
import haxor.math.Random;
import haxor.math.Vector2;
import haxor.math.Vector3;
import haxor.math.Vector4;
import haxor.net.Web;
import haxor.graphics.GL;
import haxor.graphics.GraphicContext.GraphicAPI;
import haxor.physics.broadphase.SAPBroadPhase;
import haxor.physics.Collision;
import haxor.physics.Physics;
import haxor.physics.PhysicsMaterial;
import haxor.platform.Types.Float32;
import haxor.platform.Types.MeshBufferId;
import haxor.thread.Activity;
import js.Browser;




/**
 * ...
 * @author Eduardo Pons - eduardo@thelaborat.org
 */

class Main extends Application implements IUpdateable implements IRenderable
{
	
	static public function main():Void 
	{ 
		EntryPoint.Initialize();
	}
	
	
	#if html
	var ui : js.Stats;
	var field : js.html.DivElement;	
	#end
	
	
	public var debug : Bool;
	
	public var game : GameController;
	
	
	
	/**
	 * 
	 */
	private function LoadDebug():Void
	{
		#if html
		field = cast js.Browser.document.getElementById("field");
		ui = new js.Stats();
		ui.domElement.style.position = "absolute";
        ui.domElement.style.top = '0px';		
        js.Browser.document.body.appendChild(ui.domElement);
		
		Activity.Run(function(t:Float32):Bool
		{
			ui.update();
			return true;
		});
		#end
		
		debug = false;
	}
	
	/**
	 * 
	 */
	override public function Initialize():Void 
	{
		Console.Log("Initialize!");
		LoadDebug();
		game = (new Entity("game")).AddComponent(GameController);
		game.Initialize();
		
		entity.enabled = true;
	}
	
	override public function OnStart():Void
	{
		entity.enabled = false;
	}
	
	
	
	public function OnUpdate():Void
	{			
		//if (game == null) return;
		var log : String = "";		
		log += "Stats";
		log += "\nSAP: " + Camera.SAPCulling;
		log += "\nVisible: " + RenderStats.visible;
		log += "\nCulled: " + RenderStats.culled;
		log += "\nActive: " + RenderStats.total;
		log += "\nRenderers: " + RenderStats.renderers;
		log += "\nTris: " + RenderStats.triangles;
		
		if (Input.Down(KeyCode.Q))  Camera.SAPCulling   = !Camera.SAPCulling;
		if (Input.Down(KeyCode.D2)) Debug.transform 	= !Debug.transform;		
		if (Input.Down(KeyCode.D3)) Debug.collider 		= !Debug.collider;		
		if (Input.Down(KeyCode.D4)) Debug.light 		= !Debug.light;		
		if (Input.Down(KeyCode.D5)) Debug.renderer 		= !Debug.renderer;		
		//if (Input.Down(KeyCode.D6)) Debug.particles 	= !Debug.particles;
		
		#if html
		
		if (Input.Down(KeyCode.D1))
		{
			debug = !debug;
			if (!debug)
			{
				field.innerText = "";				
			}
			game.orbit.follow = !debug;
			ui.domElement.style.display = debug ? "block" : "none";
		}
		
		var p : Vector3 = game.orbit.pivot.localPosition;
		var vz : Vector3 = game.orbit.pivot.forward;
		var vx : Vector3 = game.orbit.pivot.right;
		vz.y = 0; vz.Normalize();
		vx.y = 0; vx.Normalize();
		
		if (debug)
		{
			if (Input.Pressed(KeyCode.W)) p.Add(vz.Scale(Time.delta * 500.0));
			if (Input.Pressed(KeyCode.S)) p.Sub(vz.Scale(Time.delta * 500.0));			
			if (Input.Pressed(KeyCode.A)) p.Sub(vx.Scale(Time.delta * 500.0));
			if (Input.Pressed(KeyCode.D)) p.Add(vx.Scale(Time.delta * 500.0));
			game.orbit.pivot.localPosition = p;			
		}
		
		if(debug) if(field!=null) field.innerText = log;		
		#end
		
		#if windows		
		application.window.title = StringTools.replace(log+" FPS: "+Time.fps, "\n", " ");
		#end
		
		#if android
		Console.Log(StringTools.replace(log + " FPS: " + Time.fps, "\n", " "));
		#end

		
	}
	
	public function OnRender():Void
	{
		//if(Debug.transform)
		{
			Gizmo.Grid(500.0, new Color(1, 1, 1, 0.1));
			Gizmo.Axis(Vector3.temp.Set(), Vector3.temp.Set(2, 2, 2));
		}
	}
	
	/**
	 * 
	 * @return
	 */
	override public function Load():Bool 
	{	
		Web.root = "http://www.haxor.xyz/resources/";
		
		#if html		
		#end
		
		//Falloff Ramp
		Asset.LoadTexture2D("player/ramp", 	  "./texture/misc/ramp00.jpg");				
		Asset.LoadTexture2D("player/diffuse", "assets/ethan/texture/EthanOcclusion.png");
		Asset.LoadTexture2D("player/normal", "assets/ethan/texture/EthanNormals.png");
		
		Asset.LoadCollada("player", 		 "assets/ethan/asset.dae");
		Asset.LoadCollada("player/animation/idle",  "assets/ethan/animation-idle.DAE");
		Asset.LoadCollada("player/animation/run",   "assets/ethan/animation-run.DAE");
				
		Asset.LoadTexture2D("BlobShadow", 	    "./texture/misc/shadow_blob.jpg");		
		
		Asset.LoadShader("haxor/unlit/FlatTexture", 								"./shader/unlit/FlatTexture.shader");						
		Asset.LoadShader("haxor/unlit/FlatTextureSkin", 							"./shader/unlit/FlatTextureSkin.shader");				
		Asset.LoadShader("haxor/unlit/FlatSkin", 									"./shader/unlit/FlatSkin.shader");				
		Asset.LoadShader("haxor/unlit/Flat", 										"./shader/unlit/Flat.shader");		
		Asset.LoadShader("haxor/lightmap/FlatTexture", 								"./shader/lightmap/FlatTexture.shader");								
		Asset.LoadShader("haxor/unlit/Particle", 									"./shader/unlit/Particle.shader");		
		
		Asset.LoadShader("haxor/diffuse/Flat",	 									"./shader/diffuse/Flat.shader");
		Asset.LoadShader("haxor/diffuse/Diffuse", 									"./shader/diffuse/Diffuse.shader");
		Asset.LoadShader("haxor/diffuse/DiffuseSkin", 								"./shader/diffuse/DiffuseSkin.shader");
		Asset.LoadShader("haxor/diffuse/ToonSkin", 									"./shader/diffuse/ToonSkin.shader");
		Asset.LoadShader("haxor/diffuse/ToonSkinFalloff", 							"./shader/diffuse/ToonSkinFalloff.shader");		
		Asset.LoadShader("haxor/screen/Displacement",								"./shader/screen/Displacement.shader");
		
		Asset.LoadShader("haxor/kernel/ParticleKernel", 							"./shader/kernel/ParticleKernel.shader");
		
		Asset.LoadMaterial("haxor/material/opaque/unlit/Flat", 		  				"./material/opaque/unlit/Flat.mat");		
		Asset.LoadMaterial("haxor/material/opaque/unlit/FlatTexture", 				"./material/opaque/unlit/FlatTexture.mat");						   
		Asset.LoadMaterial("haxor/material/opaque/unlit/FlatTextureSkin",			"./material/opaque/unlit/FlatTextureSkin.mat");				
		Asset.LoadMaterial("haxor/material/opaque/lightmap/FlatTexture", 			"./material/opaque/lightmap/FlatTexture.mat");		
		Asset.LoadMaterial("haxor/material/opaque/diffuse/DiffuseSkin", 		  	"./material/opaque/diffuse/DiffuseSkin.mat");	
		Asset.LoadMaterial("haxor/material/opaque/diffuse/ToonSkin", 		  		"./material/opaque/diffuse/ToonSkin.mat");	
		Asset.LoadMaterial("haxor/material/transparent/unlit/Flat", 		  		"./material/transparent/unlit/Flat.mat");		
		Asset.LoadMaterial("haxor/material/transparent/unlit/FlatTexture", 			"./material/transparent/unlit/FlatTexture.mat");						   
		Asset.LoadMaterial("haxor/material/transparent/unlit/FlatTextureSkin", 		"./material/transparent/unlit/FlatTextureSkin.mat");		
		Asset.LoadMaterial("haxor/material/transparent/unlit/ParticleAdditive", 	"./material/transparent/unlit/ParticleAdditive.mat");
		Asset.LoadMaterial("haxor/material/transparent/unlit/ParticleAlpha", 		"./material/transparent/unlit/ParticleAlpha.mat");		
		Asset.LoadMaterial("haxor/material/opaque/diffuse/Diffuse",	  				"./material/opaque/diffuse/Diffuse.mat");		
		Asset.LoadMaterial("haxor/material/opaque/diffuse/Flat",	  				"./material/opaque/diffuse/Flat.mat");				
		Asset.LoadMaterial("haxor/material/screen/Displacement",	  				"./material/screen/Displacement.mat");
		
		return false;
	}
	
	override public function OnLoadProgress(p_id:String, p_progress:Float32):Void 
	{
		#if html
		var f = cast js.Browser.document.getElementById("field");
		f.innerText = "Loading [" + p_id + "] " + Mathf.Ceil(Asset.progress * 100) + "%";		
		#end
	}
	
	override public function OnLoadComplete(p_id:String, p_asset:Dynamic):Void 
	{
		//trace("DungeonApp> [" + p_id + "] created!");
		#if html		
		var f = cast js.Browser.document.getElementById("field");
		//f.innerText = "Loading " + Mathf.Ceil(Asset.progress * 100)+"%";
		if (Asset.progress >= 1.0) f.innerText = "";
		#end
	}
	
}