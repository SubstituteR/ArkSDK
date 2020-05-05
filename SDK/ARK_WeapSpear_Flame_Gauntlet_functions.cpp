// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSpear_Flame_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.UserConstructionScript
// ()

void AWeapSpear_Flame_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.UserConstructionScript");

	AWeapSpear_Flame_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.OnHideProjectile
// ()

void AWeapSpear_Flame_Gauntlet_C::OnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.OnHideProjectile");

	AWeapSpear_Flame_Gauntlet_C_OnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.OnUnHideProjectile
// ()

void AWeapSpear_Flame_Gauntlet_C::OnUnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.OnUnHideProjectile");

	AWeapSpear_Flame_Gauntlet_C_OnUnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.ExecuteUbergraph_WeapSpear_Flame_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpear_Flame_Gauntlet_C::ExecuteUbergraph_WeapSpear_Flame_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Flame_Gauntlet.WeapSpear_Flame_Gauntlet_C.ExecuteUbergraph_WeapSpear_Flame_Gauntlet");

	AWeapSpear_Flame_Gauntlet_C_ExecuteUbergraph_WeapSpear_Flame_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
