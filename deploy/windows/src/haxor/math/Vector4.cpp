#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxor{
namespace math{

Void Vector4_obj::__construct(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{
HX_STACK_FRAME("haxor.math.Vector4","new",0x6c44ab69,"haxor.math.Vector4.new","haxor/math/Vector4.hx",127,0x50940887)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_x,"p_x")
HX_STACK_ARG(__o_p_y,"p_y")
HX_STACK_ARG(__o_p_z,"p_z")
HX_STACK_ARG(__o_p_w,"p_w")
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(0);
{
	HX_STACK_LINE(128)
	this->x = p_x;
	HX_STACK_LINE(129)
	this->y = p_y;
	HX_STACK_LINE(130)
	this->z = p_z;
	HX_STACK_LINE(131)
	this->w = p_w;
}
;
	return null();
}

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(__o_p_x,__o_p_y,__o_p_z,__o_p_w);
	return result;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::haxor::math::Vector4 Vector4_obj::get_clone( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_clone",0xded4b77d,"haxor.math.Vector4.get_clone","haxor/math/Vector4.hx",55,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::haxor::math::Vector4_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_clone,return )

::haxor::math::Color Vector4_obj::get_rgba( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_rgba",0xdaaf1094,"haxor.math.Vector4.get_rgba","haxor/math/Vector4.hx",61,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return ::haxor::math::Color_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_rgba,return )

::haxor::math::Color Vector4_obj::get_rgb( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_rgb",0x3a61372d,"haxor.math.Vector4.get_rgb","haxor/math/Vector4.hx",67,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ::haxor::math::Color_obj::__new(this->x,this->y,this->z,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_rgb,return )

::haxor::math::Vector3 Vector4_obj::get_xyz( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_xyz",0x3a65d479,"haxor.math.Vector4.get_xyz","haxor/math/Vector4.hx",73,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::haxor::math::Vector3_obj::__new(this->x,this->y,this->z);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_xyz,return )

::haxor::math::Vector2 Vector4_obj::get_xy( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_xy",0x14ecf0e1,"haxor.math.Vector4.get_xy","haxor/math/Vector4.hx",79,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::haxor::math::Vector2_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_xy,return )

Float Vector4_obj::get_length( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_length",0xac058cc6,"haxor.math.Vector4.get_length","haxor/math/Vector4.hx",85,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::get_lengthSqr( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_lengthSqr",0xf21990ee,"haxor.math.Vector4.get_lengthSqr","haxor/math/Vector4.hx",91,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_lengthSqr,return )

::haxor::math::Vector4 Vector4_obj::get_normalized( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_normalized",0x43f6cc17,"haxor.math.Vector4.get_normalized","haxor/math/Vector4.hx",97,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::haxor::math::Vector4_obj::__new(this->x,this->y,this->z,this->w)->Normalize();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_normalized,return )

Float Vector4_obj::Get( int p){
	HX_STACK_FRAME("haxor.math.Vector4","Get",0x6c27137f,"haxor.math.Vector4.Get","haxor/math/Vector4.hx",139,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(139)
	if (((p == (int)0))){
		HX_STACK_LINE(139)
		return this->x;
	}
	else{
		HX_STACK_LINE(139)
		if (((p == (int)1))){
			HX_STACK_LINE(139)
			return this->y;
		}
		else{
			HX_STACK_LINE(139)
			if (((p == (int)2))){
				HX_STACK_LINE(139)
				return this->z;
			}
			else{
				HX_STACK_LINE(139)
				return this->w;
			}
		}
	}
	HX_STACK_LINE(139)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Get,return )

::haxor::math::Vector4 Vector4_obj::Set( hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_z,hx::Null< Float >  __o_p_w){
Float p_x = __o_p_x.Default(0);
Float p_y = __o_p_y.Default(0);
Float p_z = __o_p_z.Default(0);
Float p_w = __o_p_w.Default(0);
	HX_STACK_FRAME("haxor.math.Vector4","Set",0x6c302e8b,"haxor.math.Vector4.Set","haxor/math/Vector4.hx",149,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_z,"p_z")
	HX_STACK_ARG(p_w,"p_w")
{
		HX_STACK_LINE(149)
		this->x = p_x;
		HX_STACK_LINE(149)
		this->y = p_y;
		HX_STACK_LINE(149)
		this->z = p_z;
		HX_STACK_LINE(149)
		this->w = p_w;
		HX_STACK_LINE(149)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,Set,return )

::haxor::math::Vector4 Vector4_obj::Set2( ::haxor::math::Vector2 v){
	HX_STACK_FRAME("haxor.math.Vector4","Set2",0x3df88b47,"haxor.math.Vector4.Set2","haxor/math/Vector4.hx",156,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(156)
	this->x = v->x;
	HX_STACK_LINE(156)
	this->y = v->y;
	HX_STACK_LINE(156)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Set2,return )

::haxor::math::Vector4 Vector4_obj::Set3( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.math.Vector4","Set3",0x3df88b48,"haxor.math.Vector4.Set3","haxor/math/Vector4.hx",163,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(163)
	this->x = v->x;
	HX_STACK_LINE(163)
	this->y = v->y;
	HX_STACK_LINE(163)
	this->z = v->z;
	HX_STACK_LINE(163)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Set3,return )

::haxor::math::Vector4 Vector4_obj::SetColor( ::haxor::math::Color v){
	HX_STACK_FRAME("haxor.math.Vector4","SetColor",0x418e1ad8,"haxor.math.Vector4.SetColor","haxor/math/Vector4.hx",170,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(170)
	this->x = v->r;
	HX_STACK_LINE(170)
	this->y = v->g;
	HX_STACK_LINE(170)
	this->z = v->b;
	HX_STACK_LINE(170)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,SetColor,return )

::haxor::math::Vector4 Vector4_obj::Add( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Add",0x6c22850a,"haxor.math.Vector4.Add","haxor/math/Vector4.hx",177,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(177)
	hx::AddEq(this->x,p_v->x);
	HX_STACK_LINE(177)
	hx::AddEq(this->y,p_v->y);
	HX_STACK_LINE(177)
	hx::AddEq(this->z,p_v->z);
	HX_STACK_LINE(177)
	hx::AddEq(this->w,p_v->w);
	HX_STACK_LINE(177)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Add,return )

::haxor::math::Vector4 Vector4_obj::Sub( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Sub",0x6c303c69,"haxor.math.Vector4.Sub","haxor/math/Vector4.hx",184,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(184)
	hx::SubEq(this->x,p_v->x);
	HX_STACK_LINE(184)
	hx::SubEq(this->y,p_v->y);
	HX_STACK_LINE(184)
	hx::SubEq(this->z,p_v->z);
	HX_STACK_LINE(184)
	hx::SubEq(this->w,p_v->w);
	HX_STACK_LINE(184)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Sub,return )

::haxor::math::Vector4 Vector4_obj::Multiply( ::haxor::math::Vector4 p_v){
	HX_STACK_FRAME("haxor.math.Vector4","Multiply",0x838a229b,"haxor.math.Vector4.Multiply","haxor/math/Vector4.hx",191,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(191)
	hx::MultEq(this->x,p_v->x);
	HX_STACK_LINE(191)
	hx::MultEq(this->y,p_v->y);
	HX_STACK_LINE(191)
	hx::MultEq(this->z,p_v->z);
	HX_STACK_LINE(191)
	hx::MultEq(this->w,p_v->w);
	HX_STACK_LINE(191)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Multiply,return )

::haxor::math::Vector4 Vector4_obj::Scale( Float p_s){
	HX_STACK_FRAME("haxor.math.Vector4","Scale",0xfa20adb3,"haxor.math.Vector4.Scale","haxor/math/Vector4.hx",198,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_s,"p_s")
	HX_STACK_LINE(198)
	hx::MultEq(this->x,p_s);
	HX_STACK_LINE(198)
	hx::MultEq(this->y,p_s);
	HX_STACK_LINE(198)
	hx::MultEq(this->z,p_s);
	HX_STACK_LINE(198)
	hx::MultEq(this->w,p_s);
	HX_STACK_LINE(198)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,Scale,return )

::haxor::math::Vector4 Vector4_obj::Normalize( ){
	HX_STACK_FRAME("haxor.math.Vector4","Normalize",0xa03c5f36,"haxor.math.Vector4.Normalize","haxor/math/Vector4.hx",205,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	Float l = ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(207)
	if (((l <= (int)0))){
		HX_STACK_LINE(207)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(208)
	Float _g = l = (Float(1.0) / Float(l));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(208)
	hx::MultEq(this->x,_g);
	HX_STACK_LINE(209)
	hx::MultEq(this->y,l);
	HX_STACK_LINE(210)
	hx::MultEq(this->z,l);
	HX_STACK_LINE(211)
	hx::MultEq(this->w,l);
	HX_STACK_LINE(212)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,Normalize,return )

bool Vector4_obj::IsCulled( ){
	HX_STACK_FRAME("haxor.math.Vector4","IsCulled",0x7c52ca92,"haxor.math.Vector4.IsCulled","haxor/math/Vector4.hx",220,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	if (((this->x < -(this->w)))){
		HX_STACK_LINE(221)
		return true;
	}
	HX_STACK_LINE(222)
	if (((this->x > this->w))){
		HX_STACK_LINE(222)
		return true;
	}
	HX_STACK_LINE(223)
	if (((this->y < -(this->w)))){
		HX_STACK_LINE(223)
		return true;
	}
	HX_STACK_LINE(224)
	if (((this->y > this->w))){
		HX_STACK_LINE(224)
		return true;
	}
	HX_STACK_LINE(225)
	if (((this->z < -(this->w)))){
		HX_STACK_LINE(225)
		return true;
	}
	HX_STACK_LINE(226)
	if (((this->z > this->w))){
		HX_STACK_LINE(226)
		return true;
	}
	HX_STACK_LINE(227)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,IsCulled,return )

Array< Float > Vector4_obj::ToArray( ){
	HX_STACK_FRAME("haxor.math.Vector4","ToArray",0xd2fa7587,"haxor.math.Vector4.ToArray","haxor/math/Vector4.hx",234,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	return Array_obj< Float >::__new().Add(this->x).Add(this->y).Add(this->z).Add(this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,ToArray,return )

::String Vector4_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.math.Vector4","ToString",0x216c1123,"haxor.math.Vector4.ToString","haxor/math/Vector4.hx",241,0x50940887)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(241)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float d = ::Math_obj::pow((int)10,p_places);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(241)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				Float p_v = (this->x * d);		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(241)
				_g = ::Std_obj::_int((p_v + ((  (((p_v < (int)0))) ? Float(-0.5) : Float(0.5) ))));
			}
			HX_STACK_LINE(241)
			_g1 = (Float(_g) / Float(d));
		}
		HX_STACK_LINE(241)
		::String _g2 = (HX_CSTRING("[") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(241)
		::String _g3 = (_g2 + HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(241)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float d = ::Math_obj::pow((int)10,p_places);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(241)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				Float p_v = (this->y * d);		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(241)
				_g4 = ::Std_obj::_int((p_v + ((  (((p_v < (int)0))) ? Float(-0.5) : Float(0.5) ))));
			}
			HX_STACK_LINE(241)
			_g5 = (Float(_g4) / Float(d));
		}
		HX_STACK_LINE(241)
		::String _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(241)
		::String _g7 = (_g6 + HX_CSTRING(","));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(241)
		Float _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float d = ::Math_obj::pow((int)10,p_places);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(241)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				Float p_v = (this->z * d);		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(241)
				_g8 = ::Std_obj::_int((p_v + ((  (((p_v < (int)0))) ? Float(-0.5) : Float(0.5) ))));
			}
			HX_STACK_LINE(241)
			_g9 = (Float(_g8) / Float(d));
		}
		HX_STACK_LINE(241)
		::String _g10 = (_g7 + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(241)
		::String _g11 = (_g10 + HX_CSTRING(","));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(241)
		Float _g13;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float d = ::Math_obj::pow((int)10,p_places);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(241)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				Float p_v = (this->w * d);		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(241)
				_g12 = ::Std_obj::_int((p_v + ((  (((p_v < (int)0))) ? Float(-0.5) : Float(0.5) ))));
			}
			HX_STACK_LINE(241)
			_g13 = (Float(_g12) / Float(d));
		}
		HX_STACK_LINE(241)
		::String _g14 = (_g11 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(241)
		return (_g14 + HX_CSTRING("]"));
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,ToString,return )

::haxor::math::Vector4 Vector4_obj::temp;

::haxor::math::Vector4 Vector4_obj::get_temp( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_temp",0xdc0002f4,"haxor.math.Vector4.get_temp","haxor/math/Vector4.hx",14,0x50940887)
	HX_STACK_LINE(14)
	::haxor::context::DataContext _this = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(14)
	int _g = _this->m_nv4 = hx::Mod(((_this->m_nv4 + (int)1)),_this->m_v4->length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	return _this->m_v4->__get(_g).StaticCast< ::haxor::math::Vector4 >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_temp,return )

::haxor::math::Vector4 Vector4_obj::zero;

::haxor::math::Vector4 Vector4_obj::get_zero( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_zero",0xdff74f08,"haxor.math.Vector4.get_zero","haxor/math/Vector4.hx",20,0x50940887)
	HX_STACK_LINE(20)
	return ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_zero,return )

::haxor::math::Vector4 Vector4_obj::one;

::haxor::math::Vector4 Vector4_obj::get_one( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_one",0x3a5ef686,"haxor.math.Vector4.get_one","haxor/math/Vector4.hx",26,0x50940887)
	HX_STACK_LINE(26)
	return ::haxor::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_one,return )

::haxor::math::Vector4 Vector4_obj::W;

::haxor::math::Vector4 Vector4_obj::get_W( ){
	HX_STACK_FRAME("haxor.math.Vector4","get_W",0x7f851477,"haxor.math.Vector4.get_W","haxor/math/Vector4.hx",32,0x50940887)
	HX_STACK_LINE(32)
	return ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_W,return )

::haxor::math::Vector4 Vector4_obj::Lerp( ::haxor::math::Vector4 p_a,::haxor::math::Vector4 p_b,Float p_r){
	HX_STACK_FRAME("haxor.math.Vector4","Lerp",0x39580b6e,"haxor.math.Vector4.Lerp","haxor/math/Vector4.hx",43,0x50940887)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_r,"p_r")
	HX_STACK_LINE(43)
	return ::haxor::math::Vector4_obj::__new((p_a->x + (((p_b->x - p_a->x)) * p_r)),(p_a->y + (((p_b->y - p_a->y)) * p_r)),(p_a->z + (((p_b->z - p_a->z)) * p_r)),(p_a->w + (((p_b->w - p_a->w)) * p_r)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,Lerp,return )

::haxor::math::Vector4 Vector4_obj::Parse( ::String p_data,::String __o_p_delimiter){
::String p_delimiter = __o_p_delimiter.Default(HX_CSTRING(" "));
	HX_STACK_FRAME("haxor.math.Vector4","Parse",0x3ea76f5c,"haxor.math.Vector4.Parse","haxor/math/Vector4.hx",249,0x50940887)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
{
		HX_STACK_LINE(250)
		Array< ::String > tk = p_data.split(p_delimiter);		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(252)
		::String _g = ::StringTools_obj::trim(tk->__get((int)0));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		::String _g2 = ::StringTools_obj::trim(tk->__get((int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(253)
		Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(254)
		::String _g4 = ::StringTools_obj::trim(tk->__get((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(254)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(255)
		::String _g6 = ::StringTools_obj::trim(tk->__get((int)3));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(255)
		Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(251)
		return ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)0)->Set(_g1,_g3,_g5,_g7);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,Parse,return )


Vector4_obj::Vector4_obj()
{
}

void Vector4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector4);
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(rgba,"rgba");
	HX_MARK_MEMBER_NAME(rgb,"rgb");
	HX_MARK_MEMBER_NAME(xyz,"xyz");
	HX_MARK_MEMBER_NAME(xy,"xy");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void Vector4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(rgba,"rgba");
	HX_VISIT_MEMBER_NAME(rgb,"rgb");
	HX_VISIT_MEMBER_NAME(xyz,"xyz");
	HX_VISIT_MEMBER_NAME(xy,"xy");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthSqr,"lengthSqr");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
}

Dynamic Vector4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"W") ) { return inCallProp ? get_W() : W; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return inCallProp ? get_xy() : xy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { return inCallProp ? get_one() : one; }
		if (HX_FIELD_EQ(inName,"rgb") ) { return inCallProp ? get_rgb() : rgb; }
		if (HX_FIELD_EQ(inName,"xyz") ) { return inCallProp ? get_xyz() : xyz; }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Sub") ) { return Sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { return inCallProp ? get_temp() : temp; }
		if (HX_FIELD_EQ(inName,"zero") ) { return inCallProp ? get_zero() : zero; }
		if (HX_FIELD_EQ(inName,"Lerp") ) { return Lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rgba") ) { return inCallProp ? get_rgba() : rgba; }
		if (HX_FIELD_EQ(inName,"Set2") ) { return Set2_dyn(); }
		if (HX_FIELD_EQ(inName,"Set3") ) { return Set3_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_W") ) { return get_W_dyn(); }
		if (HX_FIELD_EQ(inName,"Parse") ) { return Parse_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return inCallProp ? get_clone() : clone; }
		if (HX_FIELD_EQ(inName,"Scale") ) { return Scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_xy") ) { return get_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_one") ) { return get_one_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xyz") ) { return get_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_temp") ) { return get_temp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zero") ) { return get_zero_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgba") ) { return get_rgba_dyn(); }
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"IsCulled") ) { return IsCulled_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clone") ) { return get_clone_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { return inCallProp ? get_lengthSqr() : lengthSqr; }
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp ? get_normalized() : normalized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_lengthSqr") ) { return get_lengthSqr_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"W") ) { W=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { xy=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rgb") ) { rgb=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xyz") ) { xyz=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rgba") ) { rgba=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lengthSqr") ) { lengthSqr=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clone"));
	outFields->push(HX_CSTRING("rgba"));
	outFields->push(HX_CSTRING("rgb"));
	outFields->push(HX_CSTRING("xyz"));
	outFields->push(HX_CSTRING("xy"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSqr"));
	outFields->push(HX_CSTRING("normalized"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("temp"),
	HX_CSTRING("get_temp"),
	HX_CSTRING("zero"),
	HX_CSTRING("get_zero"),
	HX_CSTRING("one"),
	HX_CSTRING("get_one"),
	HX_CSTRING("W"),
	HX_CSTRING("get_W"),
	HX_CSTRING("Lerp"),
	HX_CSTRING("Parse"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Vector4_obj,clone),HX_CSTRING("clone")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Vector4_obj,rgba),HX_CSTRING("rgba")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Vector4_obj,rgb),HX_CSTRING("rgb")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Vector4_obj,xyz),HX_CSTRING("xyz")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Vector4_obj,xy),HX_CSTRING("xy")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,lengthSqr),HX_CSTRING("lengthSqr")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(Vector4_obj,normalized),HX_CSTRING("normalized")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_CSTRING("z")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_CSTRING("w")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_clone"),
	HX_CSTRING("rgba"),
	HX_CSTRING("get_rgba"),
	HX_CSTRING("rgb"),
	HX_CSTRING("get_rgb"),
	HX_CSTRING("xyz"),
	HX_CSTRING("get_xyz"),
	HX_CSTRING("xy"),
	HX_CSTRING("get_xy"),
	HX_CSTRING("length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("lengthSqr"),
	HX_CSTRING("get_lengthSqr"),
	HX_CSTRING("normalized"),
	HX_CSTRING("get_normalized"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("w"),
	HX_CSTRING("Get"),
	HX_CSTRING("Set"),
	HX_CSTRING("Set2"),
	HX_CSTRING("Set3"),
	HX_CSTRING("SetColor"),
	HX_CSTRING("Add"),
	HX_CSTRING("Sub"),
	HX_CSTRING("Multiply"),
	HX_CSTRING("Scale"),
	HX_CSTRING("Normalize"),
	HX_CSTRING("IsCulled"),
	HX_CSTRING("ToArray"),
	HX_CSTRING("ToString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector4_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Vector4_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(Vector4_obj::one,"one");
	HX_MARK_MEMBER_NAME(Vector4_obj::W,"W");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector4_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Vector4_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(Vector4_obj::one,"one");
	HX_VISIT_MEMBER_NAME(Vector4_obj::W,"W");
};

#endif

Class Vector4_obj::__mClass;

void Vector4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxor.math.Vector4"), hx::TCanCast< Vector4_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Vector4_obj::__boot()
{
}

} // end namespace haxor
} // end namespace math
