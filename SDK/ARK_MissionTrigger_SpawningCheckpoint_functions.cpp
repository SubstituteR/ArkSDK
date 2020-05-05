// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_SpawningCheckpoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.SetActiveCheckpoint
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_SpawningCheckpoint_C::SetActiveCheckpoint(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.SetActiveCheckpoint");

	AMissionTrigger_SpawningCheckpoint_C_SetActiveCheckpoint_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.UserConstructionScript
// ()

void AMissionTrigger_SpawningCheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.UserConstructionScript");

	AMissionTrigger_SpawningCheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.ExecuteUbergraph_MissionTrigger_SpawningCheckpoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_SpawningCheckpoint_C::ExecuteUbergraph_MissionTrigger_SpawningCheckpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.ExecuteUbergraph_MissionTrigger_SpawningCheckpoint");

	AMissionTrigger_SpawningCheckpoint_C_ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
