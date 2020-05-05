// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapMachinedShotgun_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedShotgun_Gauntlet.WeapMachinedShotgun_Gauntlet_C.UserConstructionScript
// ()

void AWeapMachinedShotgun_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Gauntlet.WeapMachinedShotgun_Gauntlet_C.UserConstructionScript");

	AWeapMachinedShotgun_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun_Gauntlet.WeapMachinedShotgun_Gauntlet_C.ExecuteUbergraph_WeapMachinedShotgun_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_Gauntlet_C::ExecuteUbergraph_WeapMachinedShotgun_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Gauntlet.WeapMachinedShotgun_Gauntlet_C.ExecuteUbergraph_WeapMachinedShotgun_Gauntlet");

	AWeapMachinedShotgun_Gauntlet_C_ExecuteUbergraph_WeapMachinedShotgun_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
