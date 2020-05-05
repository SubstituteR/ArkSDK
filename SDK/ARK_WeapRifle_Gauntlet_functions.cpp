// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapRifle_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_Gauntlet.WeapRifle_Gauntlet_C.UserConstructionScript
// ()

void AWeapRifle_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Gauntlet.WeapRifle_Gauntlet_C.UserConstructionScript");

	AWeapRifle_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle_Gauntlet.WeapRifle_Gauntlet_C.ExecuteUbergraph_WeapRifle_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_Gauntlet_C::ExecuteUbergraph_WeapRifle_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Gauntlet.WeapRifle_Gauntlet_C.ExecuteUbergraph_WeapRifle_Gauntlet");

	AWeapRifle_Gauntlet_C_ExecuteUbergraph_WeapRifle_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
