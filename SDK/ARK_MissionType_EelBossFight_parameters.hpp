#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_EelBossFight_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPAllowPlayerToLeaveMission
struct AMissionType_EelBossFight_C_BPAllowPlayerToLeaveMission_Params
{
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionCheat
struct AMissionType_EelBossFight_C_BPOnMissionCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport Back CharactersInArena
struct AMissionType_EelBossFight_C_Teleport_Back_CharactersInArena_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerRemovedFromMission
struct AMissionType_EelBossFight_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport CharactersToArena
struct AMissionType_EelBossFight_C_Teleport_CharactersToArena_Params
{
	TArray<class APrimalCharacter*>                    Characters;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugSplinePaths
struct AMissionType_EelBossFight_C_DebugSplinePaths_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPClientHandleNetExecCommand
struct AMissionType_EelBossFight_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Issue Return Timer
struct AMissionType_EelBossFight_C_Issue_Return_Timer_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Get Spawn Dino Number multiplier by Player Number
struct AMissionType_EelBossFight_C_Get_Spawn_Dino_Number_multiplier_by_Player_Number_Params
{
	int                                                SpawnDinoNumber;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckOverlapAndAddImpulse
struct AMissionType_EelBossFight_C_CheckOverlapAndAddImpulse_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckBiteAttackOnSpline
struct AMissionType_EelBossFight_C_CheckBiteAttackOnSpline_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDinoDied
struct AMissionType_EelBossFight_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerRespawned
struct AMissionType_EelBossFight_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerLeftBounds
struct AMissionType_EelBossFight_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerAddedToMission
struct AMissionType_EelBossFight_C_BPOnPlayerAddedToMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Clear Aggro
struct AMissionType_EelBossFight_C_Clear_Aggro_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.StarttoUseAggroForMama
struct AMissionType_EelBossFight_C_StarttoUseAggroForMama_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.GetPerPlayerWorldIndicators
struct AMissionType_EelBossFight_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DeactivateCyclone
struct AMissionType_EelBossFight_C_DeactivateCyclone_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPGetMissionTimerText
struct AMissionType_EelBossFight_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.GeneratePhaseRequirements
struct AMissionType_EelBossFight_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.MinionsSetTarget
struct AMissionType_EelBossFight_C_MinionsSetTarget_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugDrawMinionsLocation
struct AMissionType_EelBossFight_C_DebugDrawMinionsLocation_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnEelMinionsForWave
struct AMissionType_EelBossFight_C_SpawnEelMinionsForWave_Params
{
	int                                                WaveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnOneEelMinion
struct AMissionType_EelBossFight_C_SpawnOneEelMinion_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPStaticCanStartMission
struct AMissionType_EelBossFight_C_BPStaticCanStartMission_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_MissionData**                    PlayerMissionData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ClientFailureReason;                                      // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      OutSelectedMissionDispatcher;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPIsPhaseComplete
struct AMissionType_EelBossFight_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.UserConstructionScript
struct AMissionType_EelBossFight_C_UserConstructionScript_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionServerSetup
struct AMissionType_EelBossFight_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.PrepareTeleport
struct AMissionType_EelBossFight_C_PrepareTeleport_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledClientTick
struct AMissionType_EelBossFight_C_OnThrottledClientTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.TeleportAndSpawnEels
struct AMissionType_EelBossFight_C_TeleportAndSpawnEels_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledServerTick
struct AMissionType_EelBossFight_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.MamaOutAndSetup
struct AMissionType_EelBossFight_C_MamaOutAndSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CleanUpAndTeleportBack
struct AMissionType_EelBossFight_C_CleanUpAndTeleportBack_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionComplete
struct AMissionType_EelBossFight_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerDied
struct AMissionType_EelBossFight_C_BPOnMissionPlayerDied_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDeactivated
struct AMissionType_EelBossFight_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.On Current Mama Phase Complete
struct AMissionType_EelBossFight_C_On_Current_Mama_Phase_Complete_Params
{
};

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.ExecuteUbergraph_MissionType_EelBossFight
struct AMissionType_EelBossFight_C_ExecuteUbergraph_MissionType_EelBossFight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
