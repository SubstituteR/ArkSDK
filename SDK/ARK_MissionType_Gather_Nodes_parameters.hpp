#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Gather_Nodes_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetActualTotalMissionTime
struct AMissionType_Gather_Nodes_C_GetActualTotalMissionTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetMissionTimerText
struct AMissionType_Gather_Nodes_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOverrideMissionTimerColor
struct AMissionType_Gather_Nodes_C_BPOverrideMissionTimerColor_Params
{
	class AShooterPlayerController**                   ShooterContr;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TimerOverrideColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetTimeOfPhase
struct AMissionType_Gather_Nodes_C_GetTimeOfPhase_Params
{
	int                                                PhaseDuration;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.FindGatherPointsCenterAndMinDistance
struct AMissionType_Gather_Nodes_C_FindGatherPointsCenterAndMinDistance_Params
{
	struct FVector                                     Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetPhaseDisplayText
struct AMissionType_Gather_Nodes_C_BPGetPhaseDisplayText_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Reset Target Locations
struct AMissionType_Gather_Nodes_C_Reset_Target_Locations_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnMissionPhaseStarted
struct AMissionType_Gather_Nodes_C_OnMissionPhaseStarted_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UpdatePhase
struct AMissionType_Gather_Nodes_C_UpdatePhase_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Gather_Nodes_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerRespawned
struct AMissionType_Gather_Nodes_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionComplete
struct AMissionType_Gather_Nodes_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetNodesToShowIndicatorsFor
struct AMissionType_Gather_Nodes_C_GetNodesToShowIndicatorsFor_Params
{
	bool                                               shouldUpdate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GeneratePhaseRequirements
struct AMissionType_Gather_Nodes_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Get Closeset Node for Actor
struct AMissionType_Gather_Nodes_C_Get_Closeset_Node_for_Actor_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRangeToPass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             TriggerFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInRange;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetPerPlayerWorldIndicators
struct AMissionType_Gather_Nodes_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.SetNextLocationForBuff
struct AMissionType_Gather_Nodes_C_SetNextLocationForBuff_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPIsPhaseComplete
struct AMissionType_Gather_Nodes_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UserConstructionScript
struct AMissionType_Gather_Nodes_C_UserConstructionScript_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionServerSetup
struct AMissionType_Gather_Nodes_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnThrottledServerTick
struct AMissionType_Gather_Nodes_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GatherSetup
struct AMissionType_Gather_Nodes_C_GatherSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ReceiveDestroyed
struct AMissionType_Gather_Nodes_C_ReceiveDestroyed_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.PrepSetup
struct AMissionType_Gather_Nodes_C_PrepSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionDeactivated
struct AMissionType_Gather_Nodes_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ExecuteUbergraph_MissionType_Gather_Nodes
struct AMissionType_Gather_Nodes_C_ExecuteUbergraph_MissionType_Gather_Nodes_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
