#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_BaseArray
#include <haxor/io/BaseArray.h>
#endif
namespace haxor{
namespace io{

Void BaseArray_obj::__construct()
{
	return null();
}

//BaseArray_obj::~BaseArray_obj() { }

Dynamic BaseArray_obj::__CreateEmpty() { return  new BaseArray_obj; }
hx::ObjectPtr< BaseArray_obj > BaseArray_obj::__new()
{  hx::ObjectPtr< BaseArray_obj > result = new BaseArray_obj();
	result->__construct();
	return result;}

Dynamic BaseArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseArray_obj > result = new BaseArray_obj();
	result->__construct();
	return result;}

int BaseArray_obj::get_length( ){
	HX_STACK_FRAME("haxor.io.BaseArray","get_length",0x771c9711,"haxor.io.BaseArray.get_length","haxor/io/BaseArray.hx",13,0xb1b46212)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseArray_obj,get_length,return )

::String BaseArray_obj::get_type( ){
	HX_STACK_FRAME("haxor.io.BaseArray","get_type",0xdd868425,"haxor.io.BaseArray.get_type","haxor/io/BaseArray.hx",19,0xb1b46212)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(BaseArray_obj,get_type,return )


BaseArray_obj::BaseArray_obj()
{
}

Dynamic BaseArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_length"),
	HX_CSTRING("get_type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseArray_obj::__mClass,"__mClass");
};

#endif

Class BaseArray_obj::__mClass;

void BaseArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxor.io.BaseArray"), hx::TCanCast< BaseArray_obj> ,sStaticFields,sMemberFields,
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

void BaseArray_obj::__boot()
{
}

} // end namespace haxor
} // end namespace io
