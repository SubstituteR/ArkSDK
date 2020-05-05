// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekSniper_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekSniper_Gauntlet.WeapTekSniper_Gauntlet_C.UserConstructionScript
// ()

void AWeapTekSniper_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_Gauntlet.WeapTekSniper_Gauntlet_C.UserConstructionScript");

	AWeapTekSniper_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper_Gauntlet.WeapTekSniper_Gauntlet_C.ExecuteUbergraph_WeapTekSniper_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_Gauntlet_C::ExecuteUbergraph_WeapTekSniper_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_Gauntlet.WeapTekSniper_Gauntlet_C.ExecuteUbergraph_WeapTekSniper_Gauntlet");

	AWeapTekSniper_Gauntlet_C_ExecuteUbergraph_WeapTekSniper_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
