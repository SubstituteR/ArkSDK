// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megatherium_AIController_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megatherium_AIController_BP_Aggressive.Megatherium_AIController_BP_Aggressive_C.UserConstructionScript
// ()

void AMegatherium_AIController_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP_Aggressive.Megatherium_AIController_BP_Aggressive_C.UserConstructionScript");

	AMegatherium_AIController_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_AIController_BP_Aggressive.Megatherium_AIController_BP_Aggressive_C.ExecuteUbergraph_Megatherium_AIController_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_AIController_BP_Aggressive_C::ExecuteUbergraph_Megatherium_AIController_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP_Aggressive.Megatherium_AIController_BP_Aggressive_C.ExecuteUbergraph_Megatherium_AIController_BP_Aggressive");

	AMegatherium_AIController_BP_Aggressive_C_ExecuteUbergraph_Megatherium_AIController_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
