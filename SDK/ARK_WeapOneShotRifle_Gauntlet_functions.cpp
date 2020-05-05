// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapOneShotRifle_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C.UserConstructionScript
// ()

void AWeapOneShotRifle_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C.UserConstructionScript");

	AWeapOneShotRifle_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C.ExecuteUbergraph_WeapOneShotRifle_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifle_Gauntlet_C::ExecuteUbergraph_WeapOneShotRifle_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C.ExecuteUbergraph_WeapOneShotRifle_Gauntlet");

	AWeapOneShotRifle_Gauntlet_C_ExecuteUbergraph_WeapOneShotRifle_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
