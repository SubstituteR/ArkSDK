// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapMachinedPistol_HoloSight_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol_HoloSight_Gauntlet.WeapMachinedPistol_HoloSight_Gauntlet_C.UserConstructionScript
// ()

void AWeapMachinedPistol_HoloSight_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_HoloSight_Gauntlet.WeapMachinedPistol_HoloSight_Gauntlet_C.UserConstructionScript");

	AWeapMachinedPistol_HoloSight_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_HoloSight_Gauntlet.WeapMachinedPistol_HoloSight_Gauntlet_C.ExecuteUbergraph_WeapMachinedPistol_HoloSight_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_HoloSight_Gauntlet_C::ExecuteUbergraph_WeapMachinedPistol_HoloSight_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_HoloSight_Gauntlet.WeapMachinedPistol_HoloSight_Gauntlet_C.ExecuteUbergraph_WeapMachinedPistol_HoloSight_Gauntlet");

	AWeapMachinedPistol_HoloSight_Gauntlet_C_ExecuteUbergraph_WeapMachinedPistol_HoloSight_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
