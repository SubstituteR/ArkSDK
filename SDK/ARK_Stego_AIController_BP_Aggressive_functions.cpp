// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stego_AIController_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stego_AIController_BP_Aggressive.Stego_AIController_BP_Aggressive_C.UserConstructionScript
// ()

void AStego_AIController_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_AIController_BP_Aggressive.Stego_AIController_BP_Aggressive_C.UserConstructionScript");

	AStego_AIController_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_AIController_BP_Aggressive.Stego_AIController_BP_Aggressive_C.ExecuteUbergraph_Stego_AIController_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStego_AIController_BP_Aggressive_C::ExecuteUbergraph_Stego_AIController_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_AIController_BP_Aggressive.Stego_AIController_BP_Aggressive_C.ExecuteUbergraph_Stego_AIController_BP_Aggressive");

	AStego_AIController_BP_Aggressive_C_ExecuteUbergraph_Stego_AIController_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
