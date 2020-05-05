// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_Malfunctioned_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript
// ()

void ABionicPara_Character_BP_Malfunctioned_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript");

	ABionicPara_Character_BP_Malfunctioned_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicPara_Character_BP_Malfunctioned_Retrieve_C::ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Retrieve");

	ABionicPara_Character_BP_Malfunctioned_Retrieve_C_ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
