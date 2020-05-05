// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekGrenadeLauncher_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.BPStartEquippedNotify
// (NetRequest, Event, MulticastDelegate, NetServer, Const)

void AWeapTekGrenadeLauncher_Gauntlet_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.BPStartEquippedNotify");

	AWeapTekGrenadeLauncher_Gauntlet_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.GetAmmoCountOfType
// ()
// Parameters:
// class UClass**                 AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvailableAmmo                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_Gauntlet_C::GetAmmoCountOfType(class UClass** AmmoType, int* AvailableAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.GetAmmoCountOfType");

	AWeapTekGrenadeLauncher_Gauntlet_C_GetAmmoCountOfType_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableAmmo != nullptr)
		*AvailableAmmo = params.AvailableAmmo;
}


// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.UserConstructionScript
// ()

void AWeapTekGrenadeLauncher_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.UserConstructionScript");

	AWeapTekGrenadeLauncher_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_Gauntlet_C::ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet");

	AWeapTekGrenadeLauncher_Gauntlet_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
