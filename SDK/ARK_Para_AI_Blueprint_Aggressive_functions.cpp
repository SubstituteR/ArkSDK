// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_AI_Blueprint_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Para_AI_Blueprint_Aggressive.Para_AI_Blueprint_Aggressive_C.UserConstructionScript
// ()

void APara_AI_Blueprint_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint_Aggressive.Para_AI_Blueprint_Aggressive_C.UserConstructionScript");

	APara_AI_Blueprint_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_AI_Blueprint_Aggressive.Para_AI_Blueprint_Aggressive_C.ExecuteUbergraph_Para_AI_Blueprint_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APara_AI_Blueprint_Aggressive_C::ExecuteUbergraph_Para_AI_Blueprint_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint_Aggressive.Para_AI_Blueprint_Aggressive_C.ExecuteUbergraph_Para_AI_Blueprint_Aggressive");

	APara_AI_Blueprint_Aggressive_C_ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
