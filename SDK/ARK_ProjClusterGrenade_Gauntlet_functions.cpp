// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjClusterGrenade_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjClusterGrenade_Gauntlet.ProjClusterGrenade_Gauntlet_C.UserConstructionScript
// ()

void AProjClusterGrenade_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenade_Gauntlet.ProjClusterGrenade_Gauntlet_C.UserConstructionScript");

	AProjClusterGrenade_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjClusterGrenade_Gauntlet.ProjClusterGrenade_Gauntlet_C.ExecuteUbergraph_ProjClusterGrenade_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjClusterGrenade_Gauntlet_C::ExecuteUbergraph_ProjClusterGrenade_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenade_Gauntlet.ProjClusterGrenade_Gauntlet_C.ExecuteUbergraph_ProjClusterGrenade_Gauntlet");

	AProjClusterGrenade_Gauntlet_C_ExecuteUbergraph_ProjClusterGrenade_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
