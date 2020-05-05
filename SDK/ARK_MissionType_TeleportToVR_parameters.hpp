#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.GetBossArenaManager
struct AMissionType_TeleportToVR_C_GetBossArenaManager_Params
{
	class ABossArenaManager_VRBattle_C*                BossArenaManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AreAnyPlayersInTheVRBiome?
struct AMissionType_TeleportToVR_C_AreAnyPlayersInTheVRBiome__Params
{
	TArray<class AShooterCharacter*>                   Players;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               APlayerIsInTheVRBiome;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AllowMissionCreation
struct AMissionType_TeleportToVR_C_AllowMissionCreation_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     MissionDispatcherActor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnMissionPhaseEnded
struct AMissionType_TeleportToVR_C_OnMissionPhaseEnded_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.create and initialize next mission
struct AMissionType_TeleportToVR_C_create_and_initialize_next_mission_Params
{
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnThrottledClientTick
struct AMissionType_TeleportToVR_C_OnThrottledClientTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPIsPhaseComplete
struct AMissionType_TeleportToVR_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.end mission
struct AMissionType_TeleportToVR_C_end_mission_Params
{
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.UserConstructionScript
struct AMissionType_TeleportToVR_C_UserConstructionScript_Params
{
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPOnMissionServerSetup
struct AMissionType_TeleportToVR_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepareTeleport
struct AMissionType_TeleportToVR_C_PrepareTeleport_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.On Teleport Finish
struct AMissionType_TeleportToVR_C_On_Teleport_Finish_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepVRBattleArea
struct AMissionType_TeleportToVR_C_PrepVRBattleArea_Params
{
};

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.ExecuteUbergraph_MissionType_TeleportToVR
struct AMissionType_TeleportToVR_C_ExecuteUbergraph_MissionType_TeleportToVR_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
