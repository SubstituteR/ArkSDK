// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicStego_Character_BP_Malfunctioned_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript
// ()

void ABionicStego_Character_BP_Malfunctioned_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript");

	ABionicStego_Character_BP_Malfunctioned_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicStego_Character_BP_Malfunctioned_Retrieve_C::ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Retrieve");

	ABionicStego_Character_BP_Malfunctioned_Retrieve_C_ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
