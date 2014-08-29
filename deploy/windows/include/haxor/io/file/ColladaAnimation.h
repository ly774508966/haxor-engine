#ifndef INCLUDED_haxor_io_file_ColladaAnimation
#define INCLUDED_haxor_io_file_ColladaAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,file,ColladaAnimation)
HX_DECLARE_CLASS3(haxor,io,file,ColladaAnimationChannel)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  ColladaAnimation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColladaAnimation_obj OBJ_;
		ColladaAnimation_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColladaAnimation_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColladaAnimation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColladaAnimation"); }

		::String id;
		::String name;
		Array< ::Dynamic > channels;
};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_ColladaAnimation */ 
