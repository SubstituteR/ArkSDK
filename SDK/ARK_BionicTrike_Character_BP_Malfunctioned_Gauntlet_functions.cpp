// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicTrike_Character_BP_Malfunctioned_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicTrike_Character_BP_Malfunctioned_Gauntlet.BionicTrike_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript
// ()

void ABionicTrike_Character_BP_Malfunctioned_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP_Malfunctioned_Gauntlet.BionicTrike_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript");

	ABionicTrike_Character_BP_Malfunctioned_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicTrike_Character_BP_Malfunctioned_Gauntlet.BionicTrike_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicTrike_Character_BP_Malfunctioned_Gauntlet_C::ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP_Malfunctioned_Gauntlet.BionicTrike_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Gauntlet");

	ABionicTrike_Character_BP_Malfunctioned_Gauntlet_C_ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
