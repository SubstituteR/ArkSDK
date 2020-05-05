// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicGigant_Character_BP_Malfunctioned_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript
// ()

void ABionicGigant_Character_BP_Malfunctioned_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript");

	ABionicGigant_Character_BP_Malfunctioned_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicGigant_Character_BP_Malfunctioned_Gauntlet_C::ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Gauntlet");

	ABionicGigant_Character_BP_Malfunctioned_Gauntlet_C_ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
