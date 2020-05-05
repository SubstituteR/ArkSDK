// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapClusterGrenade_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapClusterGrenade_Gauntlet.WeapClusterGrenade_Gauntlet_C.UserConstructionScript
// ()

void AWeapClusterGrenade_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClusterGrenade_Gauntlet.WeapClusterGrenade_Gauntlet_C.UserConstructionScript");

	AWeapClusterGrenade_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClusterGrenade_Gauntlet.WeapClusterGrenade_Gauntlet_C.ExecuteUbergraph_WeapClusterGrenade_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClusterGrenade_Gauntlet_C::ExecuteUbergraph_WeapClusterGrenade_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClusterGrenade_Gauntlet.WeapClusterGrenade_Gauntlet_C.ExecuteUbergraph_WeapClusterGrenade_Gauntlet");

	AWeapClusterGrenade_Gauntlet_C_ExecuteUbergraph_WeapClusterGrenade_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
