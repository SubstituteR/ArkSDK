// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjSnow_Chalico_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C.UserConstructionScript
// ()

void AProjSnow_Chalico_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C.UserConstructionScript");

	AProjSnow_Chalico_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C.ExecuteUbergraph_ProjSnow_Chalico_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSnow_Chalico_Gauntlet_C::ExecuteUbergraph_ProjSnow_Chalico_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C.ExecuteUbergraph_ProjSnow_Chalico_Gauntlet");

	AProjSnow_Chalico_Gauntlet_C_ExecuteUbergraph_ProjSnow_Chalico_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
