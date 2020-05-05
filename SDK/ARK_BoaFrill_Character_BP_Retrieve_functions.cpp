// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoaFrill_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoaFrill_Character_BP_Retrieve.BoaFrill_Character_BP_Retrieve_C.UserConstructionScript
// ()

void ABoaFrill_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP_Retrieve.BoaFrill_Character_BP_Retrieve_C.UserConstructionScript");

	ABoaFrill_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP_Retrieve.BoaFrill_Character_BP_Retrieve_C.ExecuteUbergraph_BoaFrill_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_Retrieve_C::ExecuteUbergraph_BoaFrill_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP_Retrieve.BoaFrill_Character_BP_Retrieve_C.ExecuteUbergraph_BoaFrill_Character_BP_Retrieve");

	ABoaFrill_Character_BP_Retrieve_C_ExecuteUbergraph_BoaFrill_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
