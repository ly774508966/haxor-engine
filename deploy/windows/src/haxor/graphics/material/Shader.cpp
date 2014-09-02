#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void Shader_obj::__construct(::String p_source)
{
HX_STACK_FRAME("haxor.graphics.material.Shader","new",0x2a1209a7,"haxor.graphics.material.Shader.new","haxor/graphics/material/Shader.hx",49,0x97658f68)
HX_STACK_THIS(this)
HX_STACK_ARG(p_source,"p_source")
{
	HX_STACK_LINE(50)
	super::__construct(null());
	HX_STACK_LINE(51)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::haxor::context::UID _this = ::haxor::context::EngineContext_obj::material->sid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(51)
		if (((_this->m_cache->length <= (int)0))){
			HX_STACK_LINE(51)
			_g = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(51)
			_g = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(51)
	this->__cid = _g;
	HX_STACK_LINE(55)
	int vt0 = p_source.indexOf(HX_CSTRING("<vertex"),null());		HX_STACK_VAR(vt0,"vt0");
	HX_STACK_LINE(56)
	int vt1 = p_source.indexOf(HX_CSTRING(">"),(vt0 + (int)1));		HX_STACK_VAR(vt1,"vt1");
	HX_STACK_LINE(57)
	::String vt = p_source.substring(vt0,(vt1 + (int)1));		HX_STACK_VAR(vt,"vt");
	HX_STACK_LINE(58)
	int ft0 = p_source.indexOf(HX_CSTRING("<fragment"),null());		HX_STACK_VAR(ft0,"ft0");
	HX_STACK_LINE(59)
	int ft1 = p_source.indexOf(HX_CSTRING(">"),(ft0 + (int)1));		HX_STACK_VAR(ft1,"ft1");
	HX_STACK_LINE(60)
	::String ft = p_source.substring(ft0,(ft1 + (int)1));		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(63)
	::String _g1 = ::StringTools_obj::replace(p_source,vt,(vt + HX_CSTRING("<![CDATA[")));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(63)
	p_source = _g1;
	HX_STACK_LINE(64)
	::String _g2 = ::StringTools_obj::replace(p_source,HX_CSTRING("</vertex>"),HX_CSTRING("]]></vertex>"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(64)
	p_source = _g2;
	HX_STACK_LINE(65)
	::String _g3 = ::StringTools_obj::replace(p_source,ft,(ft + HX_CSTRING("<![CDATA[")));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(65)
	p_source = _g3;
	HX_STACK_LINE(66)
	::String _g4 = ::StringTools_obj::replace(p_source,HX_CSTRING("</fragment>"),HX_CSTRING("]]></fragment>"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(66)
	p_source = _g4;
	HX_STACK_LINE(68)
	::Xml x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(70)
	::Xml _g5 = ::Xml_obj::parse(p_source);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(70)
	x = _g5;
	HX_STACK_LINE(71)
	::Xml _g6 = x->firstElement();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(71)
	x = _g6;
	HX_STACK_LINE(73)
	::String _g7 = x->get(HX_CSTRING("id"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(73)
	this->set_name(_g7);
	HX_STACK_LINE(75)
	::String _g8 = this->get_name();		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::haxor::graphics::material::Shader_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",75,0x97658f68)
			{
				HX_STACK_LINE(75)
				::String _g9 = __this->get_name();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(75)
				return (_g9 == HX_CSTRING(""));
			}
			return null();
		}
	};
	HX_STACK_LINE(75)
	if (((  ((!(((_g8 == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
		HX_STACK_LINE(75)
		this->set_name((HX_CSTRING("Shader") + this->__cid));
	}
	HX_STACK_LINE(77)
	::Xml vs = x->elementsNamed(HX_CSTRING("vertex"))->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(vs,"vs");
	HX_STACK_LINE(78)
	::Xml fs = x->elementsNamed(HX_CSTRING("fragment"))->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(80)
	::String _g10 = this->GetShaderSource(vs);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(80)
	this->m_vss = _g10;
	HX_STACK_LINE(81)
	::String _g11 = this->GetShaderSource(fs);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(81)
	this->m_fss = _g11;
	HX_STACK_LINE(82)
	this->m_hasError = false;
	HX_STACK_LINE(84)
	::haxor::context::EngineContext_obj::material->InitializeShader(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::String p_source)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(p_source);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Shader_obj::get_hasError( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_hasError",0x4c75aff0,"haxor.graphics.material.Shader.get_hasError","haxor/graphics/material/Shader.hx",41,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return this->m_hasError;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_hasError,return )

::String Shader_obj::GetShaderSource( ::Xml n){
	HX_STACK_FRAME("haxor.graphics.material.Shader","GetShaderSource",0x28a3333d,"haxor.graphics.material.Shader.GetShaderSource","haxor/graphics/material/Shader.hx",93,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(94)
	if (((n == null()))){
		HX_STACK_LINE(94)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(95)
	::String src = n->firstChild()->get_nodeValue().toString();		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(96)
	::String _g = n->get(HX_CSTRING("precision"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(96)
	::String prec = ((  (((_g == null()))) ? ::String(HX_CSTRING("low")) : ::String(n->get(HX_CSTRING("precision"))) )).toLowerCase();		HX_STACK_VAR(prec,"prec");
	HX_STACK_LINE(97)
	::String _switch_1 = (prec);
	if (  ( _switch_1==HX_CSTRING("low"))){
		HX_STACK_LINE(99)
		prec = HX_CSTRING("precision lowp float;");
	}
	else if (  ( _switch_1==HX_CSTRING("medium"))){
		HX_STACK_LINE(100)
		prec = HX_CSTRING("precision mediump float;");
	}
	else if (  ( _switch_1==HX_CSTRING("high"))){
		HX_STACK_LINE(101)
		prec = HX_CSTRING("precision highp float;");
	}
	HX_STACK_LINE(103)
	return (prec + src);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,GetShaderSource,return )

Void Shader_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.material.Shader","OnDestroy",0x7a26ae02,"haxor.graphics.material.Shader.OnDestroy","haxor/graphics/material/Shader.hx",111,0x97658f68)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		::haxor::context::EngineContext_obj::material->DestroyShader(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


::haxor::graphics::material::Shader Shader_obj::Flat;

::haxor::graphics::material::Shader Shader_obj::get_Flat( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_Flat",0x2ebbb8bb,"haxor.graphics.material.Shader.get_Flat","haxor/graphics/material/Shader.hx",17,0x97658f68)
	HX_STACK_LINE(17)
	if (((::haxor::graphics::material::Shader_obj::m_flat_shader == null()))){
		HX_STACK_LINE(17)
		::haxor::graphics::material::Shader _g = ::haxor::graphics::material::Shader_obj::__new(::haxor::context::ShaderContext_obj::flat_source);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		return ::haxor::graphics::material::Shader_obj::m_flat_shader = _g;
	}
	else{
		HX_STACK_LINE(17)
		return ::haxor::graphics::material::Shader_obj::m_flat_shader;
	}
	HX_STACK_LINE(17)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_Flat,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_shader;

::haxor::graphics::material::Shader Shader_obj::FlatTexture;

::haxor::graphics::material::Shader Shader_obj::get_FlatTexture( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_FlatTexture",0x64b69560,"haxor.graphics.material.Shader.get_FlatTexture","haxor/graphics/material/Shader.hx",24,0x97658f68)
	HX_STACK_LINE(24)
	if (((::haxor::graphics::material::Shader_obj::m_flat_texture_shader == null()))){
		HX_STACK_LINE(24)
		::haxor::graphics::material::Shader _g = ::haxor::graphics::material::Shader_obj::__new(::haxor::context::ShaderContext_obj::flat_texture_source);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		return ::haxor::graphics::material::Shader_obj::m_flat_texture_shader = _g;
	}
	else{
		HX_STACK_LINE(24)
		return ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_FlatTexture,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_texture_shader;


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(m_vss,"m_vss");
	HX_MARK_MEMBER_NAME(m_fss,"m_fss");
	HX_MARK_MEMBER_NAME(m_hasError,"m_hasError");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_vss,"m_vss");
	HX_VISIT_MEMBER_NAME(m_fss,"m_fss");
	HX_VISIT_MEMBER_NAME(m_hasError,"m_hasError");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Flat") ) { return inCallProp ? get_Flat() : Flat; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_vss") ) { return m_vss; }
		if (HX_FIELD_EQ(inName,"m_fss") ) { return m_fss; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_Flat") ) { return get_Flat_dyn(); }
		if (HX_FIELD_EQ(inName,"hasError") ) { return get_hasError(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_hasError") ) { return m_hasError; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FlatTexture") ) { return inCallProp ? get_FlatTexture() : FlatTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_hasError") ) { return get_hasError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_flat_shader") ) { return m_flat_shader; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_FlatTexture") ) { return get_FlatTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"GetShaderSource") ) { return GetShaderSource_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_flat_texture_shader") ) { return m_flat_texture_shader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Flat") ) { Flat=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_vss") ) { m_vss=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fss") ) { m_fss=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_hasError") ) { m_hasError=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FlatTexture") ) { FlatTexture=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_flat_shader") ) { m_flat_shader=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_flat_texture_shader") ) { m_flat_texture_shader=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_vss"));
	outFields->push(HX_CSTRING("m_fss"));
	outFields->push(HX_CSTRING("hasError"));
	outFields->push(HX_CSTRING("m_hasError"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Flat"),
	HX_CSTRING("get_Flat"),
	HX_CSTRING("m_flat_shader"),
	HX_CSTRING("FlatTexture"),
	HX_CSTRING("get_FlatTexture"),
	HX_CSTRING("m_flat_texture_shader"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,m_vss),HX_CSTRING("m_vss")},
	{hx::fsString,(int)offsetof(Shader_obj,m_fss),HX_CSTRING("m_fss")},
	{hx::fsBool,(int)offsetof(Shader_obj,m_hasError),HX_CSTRING("m_hasError")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_vss"),
	HX_CSTRING("m_fss"),
	HX_CSTRING("get_hasError"),
	HX_CSTRING("m_hasError"),
	HX_CSTRING("GetShaderSource"),
	HX_CSTRING("OnDestroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::Flat,"Flat");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_shader,"m_flat_shader");
	HX_MARK_MEMBER_NAME(Shader_obj::FlatTexture,"FlatTexture");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_texture_shader,"m_flat_texture_shader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::Flat,"Flat");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_shader,"m_flat_shader");
	HX_VISIT_MEMBER_NAME(Shader_obj::FlatTexture,"FlatTexture");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_texture_shader,"m_flat_texture_shader");
};

#endif

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxor.graphics.material.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
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

void Shader_obj::__boot()
{
}

} // end namespace haxor
} // end namespace graphics
} // end namespace material
