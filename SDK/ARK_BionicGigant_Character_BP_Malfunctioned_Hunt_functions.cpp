// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicGigant_Character_BP_Malfunctioned_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicGigant_Character_BP_Malfunctioned_Hunt.BionicGigant_Character_BP_Malfunctioned_Hunt_C.UserConstructionScript
// ()

void ABionicGigant_Character_BP_Malfunctioned_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned_Hunt.BionicGigant_Character_BP_Malfunctioned_Hunt_C.UserConstructionScript");

	ABionicGigant_Character_BP_Malfunctioned_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicGigant_Character_BP_Malfunctioned_Hunt.BionicGigant_Character_BP_Malfunctioned_Hunt_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicGigant_Character_BP_Malfunctioned_Hunt_C::ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned_Hunt.BionicGigant_Character_BP_Malfunctioned_Hunt_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Hunt");

	ABionicGigant_Character_BP_Malfunctioned_Hunt_C_ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
