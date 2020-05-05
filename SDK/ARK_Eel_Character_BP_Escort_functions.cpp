// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Eel_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Eel_Character_BP_Escort.Eel_Character_BP_Escort_C.UserConstructionScript
// ()

void AEel_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP_Escort.Eel_Character_BP_Escort_C.UserConstructionScript");

	AEel_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP_Escort.Eel_Character_BP_Escort_C.ExecuteUbergraph_Eel_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_Escort_C::ExecuteUbergraph_Eel_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP_Escort.Eel_Character_BP_Escort_C.ExecuteUbergraph_Eel_Character_BP_Escort");

	AEel_Character_BP_Escort_C_ExecuteUbergraph_Eel_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
