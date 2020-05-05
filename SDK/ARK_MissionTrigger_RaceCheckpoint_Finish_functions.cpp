// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_RaceCheckpoint_Finish_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.OnCheckpointHit
// ()

void AMissionTrigger_RaceCheckpoint_Finish_C::OnCheckpointHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.OnCheckpointHit");

	AMissionTrigger_RaceCheckpoint_Finish_C_OnCheckpointHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.InitCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_Finish_C::InitCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.InitCheckpoint");

	AMissionTrigger_RaceCheckpoint_Finish_C_InitCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.UserConstructionScript
// ()

void AMissionTrigger_RaceCheckpoint_Finish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.UserConstructionScript");

	AMissionTrigger_RaceCheckpoint_Finish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Finish
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_Finish_C::ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Finish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Finish");

	AMissionTrigger_RaceCheckpoint_Finish_C_ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Finish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
