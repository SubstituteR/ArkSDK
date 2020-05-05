// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjEndDrone_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjEndDrone_Gauntlet.ProjEndDrone_Gauntlet_C.UserConstructionScript
// ()

void AProjEndDrone_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndDrone_Gauntlet.ProjEndDrone_Gauntlet_C.UserConstructionScript");

	AProjEndDrone_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjEndDrone_Gauntlet.ProjEndDrone_Gauntlet_C.ExecuteUbergraph_ProjEndDrone_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjEndDrone_Gauntlet_C::ExecuteUbergraph_ProjEndDrone_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndDrone_Gauntlet.ProjEndDrone_Gauntlet_C.ExecuteUbergraph_ProjEndDrone_Gauntlet");

	AProjEndDrone_Gauntlet_C_ExecuteUbergraph_ProjEndDrone_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
