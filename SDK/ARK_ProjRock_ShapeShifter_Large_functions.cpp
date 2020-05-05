// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjRock_ShapeShifter_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C.UserConstructionScript
// ()

void AProjRock_ShapeShifter_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C.UserConstructionScript");

	AProjRock_ShapeShifter_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C.ExecuteUbergraph_ProjRock_ShapeShifter_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_ShapeShifter_Large_C::ExecuteUbergraph_ProjRock_ShapeShifter_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C.ExecuteUbergraph_ProjRock_ShapeShifter_Large");

	AProjRock_ShapeShifter_Large_C_ExecuteUbergraph_ProjRock_ShapeShifter_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
