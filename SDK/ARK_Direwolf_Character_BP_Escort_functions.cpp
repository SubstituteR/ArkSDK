// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Direwolf_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direwolf_Character_BP_Escort.Direwolf_Character_BP_Escort_C.UserConstructionScript
// ()

void ADirewolf_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Escort.Direwolf_Character_BP_Escort_C.UserConstructionScript");

	ADirewolf_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP_Escort.Direwolf_Character_BP_Escort_C.ExecuteUbergraph_Direwolf_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_Escort_C::ExecuteUbergraph_Direwolf_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Escort.Direwolf_Character_BP_Escort_C.ExecuteUbergraph_Direwolf_Character_BP_Escort");

	ADirewolf_Character_BP_Escort_C_ExecuteUbergraph_Direwolf_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
