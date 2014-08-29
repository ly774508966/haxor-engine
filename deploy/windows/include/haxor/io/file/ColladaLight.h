#ifndef INCLUDED_haxor_io_file_ColladaLight
#define INCLUDED_haxor_io_file_ColladaLight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,file,ColladaLight)
HX_DECLARE_CLASS2(haxor,math,Color)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  ColladaLight_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColladaLight_obj OBJ_;
		ColladaLight_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColladaLight_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColladaLight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColladaLight"); }

		::String id;
		::String name;
		::String type;
		::haxor::math::Color color;
		Float radius;
		Float intensity;
		Float atten;
};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_ColladaLight */ 
