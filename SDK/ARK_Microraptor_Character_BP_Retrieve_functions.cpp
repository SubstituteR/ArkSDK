// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Microraptor_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_Character_BP_Retrieve_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.BPCanTargetCorpse");

	AMicroraptor_Character_BP_Retrieve_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.UserConstructionScript
// ()

void AMicroraptor_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.UserConstructionScript");

	AMicroraptor_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.ExecuteUbergraph_Microraptor_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_Retrieve_C::ExecuteUbergraph_Microraptor_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C.ExecuteUbergraph_Microraptor_Character_BP_Retrieve");

	AMicroraptor_Character_BP_Retrieve_C_ExecuteUbergraph_Microraptor_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
