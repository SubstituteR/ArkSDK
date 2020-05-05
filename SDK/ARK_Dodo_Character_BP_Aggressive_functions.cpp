// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C.UserConstructionScript
// ()

void ADodo_Character_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C.UserConstructionScript");

	ADodo_Character_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C.ExecuteUbergraph_Dodo_Character_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_Aggressive_C::ExecuteUbergraph_Dodo_Character_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C.ExecuteUbergraph_Dodo_Character_BP_Aggressive");

	ADodo_Character_BP_Aggressive_C_ExecuteUbergraph_Dodo_Character_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
