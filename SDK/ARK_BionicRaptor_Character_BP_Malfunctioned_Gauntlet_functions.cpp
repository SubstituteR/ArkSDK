// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_Malfunctioned_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRaptor_Character_BP_Malfunctioned_Gauntlet.BionicRaptor_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript
// ()

void ABionicRaptor_Character_BP_Malfunctioned_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned_Gauntlet.BionicRaptor_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript");

	ABionicRaptor_Character_BP_Malfunctioned_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP_Malfunctioned_Gauntlet.BionicRaptor_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRaptor_Character_BP_Malfunctioned_Gauntlet_C::ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned_Gauntlet.BionicRaptor_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Gauntlet");

	ABionicRaptor_Character_BP_Malfunctioned_Gauntlet_C_ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
