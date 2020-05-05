// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArctic_ShapeShifter_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C.UserConstructionScript
// ()

void AProjArctic_ShapeShifter_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C.UserConstructionScript");

	AProjArctic_ShapeShifter_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C.ExecuteUbergraph_ProjArctic_ShapeShifter_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArctic_ShapeShifter_Large_C::ExecuteUbergraph_ProjArctic_ShapeShifter_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C.ExecuteUbergraph_ProjArctic_ShapeShifter_Large");

	AProjArctic_ShapeShifter_Large_C_ExecuteUbergraph_ProjArctic_ShapeShifter_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
