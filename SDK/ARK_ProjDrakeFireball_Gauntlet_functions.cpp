// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjDrakeFireball_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDrakeFireball_Gauntlet.ProjDrakeFireball_Gauntlet_C.UserConstructionScript
// ()

void AProjDrakeFireball_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball_Gauntlet.ProjDrakeFireball_Gauntlet_C.UserConstructionScript");

	AProjDrakeFireball_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball_Gauntlet.ProjDrakeFireball_Gauntlet_C.ExecuteUbergraph_ProjDrakeFireball_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDrakeFireball_Gauntlet_C::ExecuteUbergraph_ProjDrakeFireball_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball_Gauntlet.ProjDrakeFireball_Gauntlet_C.ExecuteUbergraph_ProjDrakeFireball_Gauntlet");

	AProjDrakeFireball_Gauntlet_C_ExecuteUbergraph_ProjDrakeFireball_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
