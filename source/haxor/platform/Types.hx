package haxor.platform;



#if html

typedef BitmapFile		= js.html.Image;
typedef ArrayBuffer		= js.html.Uint8Array;
typedef MeshBufferId    = js.html.webgl.Buffer;
typedef TextureId    	= js.html.webgl.Texture;
typedef FrameBufferId  	= js.html.webgl.Framebuffer;
typedef RenderBufferId  = js.html.webgl.Renderbuffer;
typedef ShaderId		= js.html.webgl.Shader;
typedef ProgramId		= js.html.webgl.Program;
typedef UniformLocation = js.html.webgl.UniformLocation;

#end


#if android

#if gles3
typedef GLES = android.opengl.GLES30;
#else
typedef GLES = android.opengl.GLES20;
#end

typedef BitmapFile		= haxor.io.Buffer;

typedef ArrayBuffer		= java.nio.ByteBuffer;
typedef MeshBufferId    = Int;
typedef TextureId    	= Int;
typedef FrameBufferId  	= Int;
typedef RenderBufferId  = Int;
typedef ShaderId		= Int;
typedef ProgramId		= Int;
typedef UniformLocation = Int;

#end

#if ios

#end


#if (windows || osx || linux)

typedef BitmapFile		= haxor.io.Buffer;

typedef ArrayBuffer		= haxe.io.Bytes;
typedef MeshBufferId    = Int;
typedef TextureId    	= Int;
typedef FrameBufferId  	= Int;
typedef RenderBufferId  = Int;
typedef ShaderId		= Int;
typedef ProgramId		= Int;
typedef UniformLocation = Int;

#end