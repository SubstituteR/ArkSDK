// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarm_AIController_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.UserConstructionScript
// ()

void AMicrobeSwarm_AIController_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.UserConstructionScript");

	AMicrobeSwarm_AIController_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarm_AIController_BP_Escort_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ReceiveTick");

	AMicrobeSwarm_AIController_BP_Escort_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarm_AIController_BP_Escort_C::ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort");

	AMicrobeSwarm_AIController_BP_Escort_C_ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
