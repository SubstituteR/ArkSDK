#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionDispatcher_MultiUsePylon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPDeactivateMissionActors
struct AMissionDispatcher_MultiUsePylon_C_BPDeactivateMissionActors_Params
{
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPActivateMissionActors
struct AMissionDispatcher_MultiUsePylon_C_BPActivateMissionActors_Params
{
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.SetColorParams
struct AMissionDispatcher_MultiUsePylon_C_SetColorParams_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPClientDoMultiUse
struct AMissionDispatcher_MultiUsePylon_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ReceiveBeginPlay
struct AMissionDispatcher_MultiUsePylon_C_ReceiveBeginPlay_Params
{
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnMissionStarted
struct AMissionDispatcher_MultiUsePylon_C_BPOnMissionStarted_Params
{
	class AMissionType**                               NewMission;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          StartingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnRunningMissionDeactivated
struct AMissionDispatcher_MultiUsePylon_C_BPOnRunningMissionDeactivated_Params
{
	class AMissionType**                               Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.UserConstructionScript
struct AMissionDispatcher_MultiUsePylon_C_UserConstructionScript_Params
{
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.Initialize
struct AMissionDispatcher_MultiUsePylon_C_Initialize_Params
{
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.MultiSetColorParams
struct AMissionDispatcher_MultiUsePylon_C_MultiSetColorParams_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ExecuteUbergraph_MissionDispatcher_MultiUsePylon
struct AMissionDispatcher_MultiUsePylon_C_ExecuteUbergraph_MissionDispatcher_MultiUsePylon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
