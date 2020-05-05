// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapMachinedSniper_Scope_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper_Scope_Gauntlet.WeapMachinedSniper_Scope_Gauntlet_C.UserConstructionScript
// ()

void AWeapMachinedSniper_Scope_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Scope_Gauntlet.WeapMachinedSniper_Scope_Gauntlet_C.UserConstructionScript");

	AWeapMachinedSniper_Scope_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper_Scope_Gauntlet.WeapMachinedSniper_Scope_Gauntlet_C.ExecuteUbergraph_WeapMachinedSniper_Scope_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_Scope_Gauntlet_C::ExecuteUbergraph_WeapMachinedSniper_Scope_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Scope_Gauntlet.WeapMachinedSniper_Scope_Gauntlet_C.ExecuteUbergraph_WeapMachinedSniper_Scope_Gauntlet");

	AWeapMachinedSniper_Scope_Gauntlet_C_ExecuteUbergraph_WeapMachinedSniper_Scope_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
