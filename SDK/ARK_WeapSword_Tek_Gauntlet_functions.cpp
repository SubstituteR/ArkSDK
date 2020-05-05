// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSword_Tek_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.ReceiveDestroyed
// ()

void AWeapSword_Tek_Gauntlet_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.ReceiveDestroyed");

	AWeapSword_Tek_Gauntlet_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.BPPreInitializeComponents
// ()

void AWeapSword_Tek_Gauntlet_C::BPPreInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.BPPreInitializeComponents");

	AWeapSword_Tek_Gauntlet_C_BPPreInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.UserConstructionScript
// ()

void AWeapSword_Tek_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.UserConstructionScript");

	AWeapSword_Tek_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.ExecuteUbergraph_WeapSword_Tek_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Tek_Gauntlet_C::ExecuteUbergraph_WeapSword_Tek_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C.ExecuteUbergraph_WeapSword_Tek_Gauntlet");

	AWeapSword_Tek_Gauntlet_C_ExecuteUbergraph_WeapSword_Tek_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
