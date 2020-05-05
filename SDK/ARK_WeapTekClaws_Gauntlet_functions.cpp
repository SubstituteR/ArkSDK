// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekClaws_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekClaws_Gauntlet.WeapTekClaws_Gauntlet_C.UserConstructionScript
// ()

void AWeapTekClaws_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws_Gauntlet.WeapTekClaws_Gauntlet_C.UserConstructionScript");

	AWeapTekClaws_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws_Gauntlet.WeapTekClaws_Gauntlet_C.ExecuteUbergraph_WeapTekClaws_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_Gauntlet_C::ExecuteUbergraph_WeapTekClaws_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws_Gauntlet.WeapTekClaws_Gauntlet_C.ExecuteUbergraph_WeapTekClaws_Gauntlet");

	AWeapTekClaws_Gauntlet_C_ExecuteUbergraph_WeapTekClaws_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
