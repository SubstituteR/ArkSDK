// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_AI_Blueprint_Aggressive_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Para_AI_Blueprint_Aggressive_Gauntlet.Para_AI_Blueprint_Aggressive_Gauntlet_C.UserConstructionScript
// ()

void APara_AI_Blueprint_Aggressive_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint_Aggressive_Gauntlet.Para_AI_Blueprint_Aggressive_Gauntlet_C.UserConstructionScript");

	APara_AI_Blueprint_Aggressive_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_AI_Blueprint_Aggressive_Gauntlet.Para_AI_Blueprint_Aggressive_Gauntlet_C.ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APara_AI_Blueprint_Aggressive_Gauntlet_C::ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint_Aggressive_Gauntlet.Para_AI_Blueprint_Aggressive_Gauntlet_C.ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Gauntlet");

	APara_AI_Blueprint_Aggressive_Gauntlet_C_ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
