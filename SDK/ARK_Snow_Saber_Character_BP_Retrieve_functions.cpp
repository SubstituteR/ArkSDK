// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Saber_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Snow_Saber_Character_BP_Retrieve.Snow_Saber_Character_BP_Retrieve_C.UserConstructionScript
// ()

void ASnow_Saber_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Saber_Character_BP_Retrieve.Snow_Saber_Character_BP_Retrieve_C.UserConstructionScript");

	ASnow_Saber_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Snow_Saber_Character_BP_Retrieve.Snow_Saber_Character_BP_Retrieve_C.ExecuteUbergraph_Snow_Saber_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnow_Saber_Character_BP_Retrieve_C::ExecuteUbergraph_Snow_Saber_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Saber_Character_BP_Retrieve.Snow_Saber_Character_BP_Retrieve_C.ExecuteUbergraph_Snow_Saber_Character_BP_Retrieve");

	ASnow_Saber_Character_BP_Retrieve_C_ExecuteUbergraph_Snow_Saber_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
