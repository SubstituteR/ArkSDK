// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Daeodon_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Daeodon_Character_BP_Escort.Daeodon_Character_BP_Escort_C.UserConstructionScript
// ()

void ADaeodon_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP_Escort.Daeodon_Character_BP_Escort_C.UserConstructionScript");

	ADaeodon_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP_Escort.Daeodon_Character_BP_Escort_C.ExecuteUbergraph_Daeodon_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_Escort_C::ExecuteUbergraph_Daeodon_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP_Escort.Daeodon_Character_BP_Escort_C.ExecuteUbergraph_Daeodon_Character_BP_Escort");

	ADaeodon_Character_BP_Escort_C_ExecuteUbergraph_Daeodon_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
