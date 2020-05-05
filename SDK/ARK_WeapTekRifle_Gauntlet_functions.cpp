// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekRifle_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekRifle_Gauntlet.WeapTekRifle_Gauntlet_C.UserConstructionScript
// ()

void AWeapTekRifle_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle_Gauntlet.WeapTekRifle_Gauntlet_C.UserConstructionScript");

	AWeapTekRifle_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle_Gauntlet.WeapTekRifle_Gauntlet_C.ExecuteUbergraph_WeapTekRifle_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekRifle_Gauntlet_C::ExecuteUbergraph_WeapTekRifle_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle_Gauntlet.WeapTekRifle_Gauntlet_C.ExecuteUbergraph_WeapTekRifle_Gauntlet");

	AWeapTekRifle_Gauntlet_C_ExecuteUbergraph_WeapTekRifle_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
