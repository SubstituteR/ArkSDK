#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_SpawningCheckpoint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.SetActiveCheckpoint
struct AMissionTrigger_SpawningCheckpoint_C_SetActiveCheckpoint_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.UserConstructionScript
struct AMissionTrigger_SpawningCheckpoint_C_UserConstructionScript_Params
{
};

// Function MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C.ExecuteUbergraph_MissionTrigger_SpawningCheckpoint
struct AMissionTrigger_SpawningCheckpoint_C_ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
