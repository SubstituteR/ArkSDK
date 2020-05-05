#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveInvalidVRBuff
struct AMissionType_VRBattle_Base_C_RemoveInvalidVRBuff_Params
{
	class APrimalCharacter*                            self2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetTeleporter
struct AMissionType_VRBattle_Base_C_GetTeleporter_Params
{
	class AMissionTrigger_VRBattleTeleporter_C*        AsMissionTrigger_VRBattleTeleporter_C;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceSucceedMission
struct AMissionType_VRBattle_Base_C_ForceSucceedMission_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.FindNonCollidingRandomPoint
struct AMissionType_VRBattle_Base_C_FindNonCollidingRandomPoint_Params
{
	class AActor*                                      Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DinoCapsuleRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustDesiredValue
struct AMissionType_VRBattle_Base_C_AdjustDesiredValue_Params
{
	int                                                BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdjustedValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnRep_MainBossCharacter
struct AMissionType_VRBattle_Base_C_OnRep_MainBossCharacter_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DropCodeKey
struct AMissionType_VRBattle_Base_C_DropCodeKey_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionCheat
struct AMissionType_VRBattle_Base_C_BPOnMissionCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Validate Characters Are Within Bounds
struct AMissionType_VRBattle_Base_C_Validate_Characters_Are_Within_Bounds_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetLandingLocation
struct AMissionType_VRBattle_Base_C_GetLandingLocation_Params
{
	class AVRBattle_StageLandingLocation_C*            Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceTeleportAnyLeftoverCharacters
struct AMissionType_VRBattle_Base_C_ForceTeleportAnyLeftoverCharacters_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.MissionCompleted
struct AMissionType_VRBattle_Base_C_MissionCompleted_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTimedOut
struct AMissionType_VRBattle_Base_C_BPOnMissionTimedOut_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerRemovedFromMission
struct AMissionType_VRBattle_Base_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AllowMissionCreation
struct AMissionType_VRBattle_Base_C_AllowMissionCreation_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     MissionDispatcherActor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticCanStartMission
struct AMissionType_VRBattle_Base_C_BPStaticCanStartMission_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_MissionData**                    PlayerMissionData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ClientFailureReason;                                      // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      OutSelectedMissionDispatcher;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPAllowTimeout
struct AMissionType_VRBattle_Base_C_BPAllowTimeout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Stop Companion Hacking
struct AMissionType_VRBattle_Base_C_Stop_Companion_Hacking_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Start Companion Hacking
struct AMissionType_VRBattle_Base_C_Start_Companion_Hacking_Params
{
	class AActor*                                      Kiosk;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.VRBattleCosmeticsManager
struct AMissionType_VRBattle_Base_C_VRBattleCosmeticsManager_Params
{
	class AMissionServerSidePoint_VRBattleCosmeticsManager_C* CosmeticsManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Num Code Keys Required to Activate Kiosk
struct AMissionType_VRBattle_Base_C_Num_Code_Keys_Required_to_Activate_Kiosk_Params
{
	int                                                NumKeys;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AddDebugRequirements
struct AMissionType_VRBattle_Base_C_AddDebugRequirements_Params
{
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveCodeKeysFromPlayerInventory
struct AMissionType_VRBattle_Base_C_RemoveCodeKeysFromPlayerInventory_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                NumToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ResetCodeKiosks
struct AMissionType_VRBattle_Base_C_ResetCodeKiosks_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticIsPlayerEligibleForMission
struct AMissionType_VRBattle_Base_C_BPStaticIsPlayerEligibleForMission_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_MissionData**                    PlayerMissionData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutReason;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetSingleServerSidePoint
struct AMissionType_VRBattle_Base_C_GetSingleServerSidePoint_Params
{
	struct FName                                       TriggerKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionServerSidePoint*                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Boss Character
struct AMissionType_VRBattle_Base_C_Spawn_Boss_Character_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionActivated
struct AMissionType_VRBattle_Base_C_BPOnMissionActivated_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDeactivated
struct AMissionType_VRBattle_Base_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Create Next Mission
struct AMissionType_VRBattle_Base_C_Create_Next_Mission_Params
{
	class AMissionType_VRBattle_Base_C*                MissionCreated;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleporting Everybody
struct AMissionType_VRBattle_Base_C_StartTeleporting_Everybody_Params
{
	int                                                PlayersTeleported;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingTamed Dinos
struct AMissionType_VRBattle_Base_C_StartTeleportingTamed_Dinos_Params
{
	class AMissionTrigger_VRBattleTeleporter_C*        Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingPlayer
struct AMissionType_VRBattle_Base_C_StartTeleportingPlayer_Params
{
	class APrimalCharacter*                            PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_VRBattleTeleporter_C*        Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.SetupPhaseCallbacks
struct AMissionType_VRBattle_Base_C_SetupPhaseCallbacks_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerRespawned
struct AMissionType_VRBattle_Base_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerLeftBounds
struct AMissionType_VRBattle_Base_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionComplete
struct AMissionType_VRBattle_Base_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.KillLeftoverCharacters
struct AMissionType_VRBattle_Base_C_KillLeftoverCharacters_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On Player Begin Overlap Code Key Kiosk
struct AMissionType_VRBattle_Base_C_On_Player_Begin_Overlap_Code_Key_Kiosk_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_VRBattleCodeKeyKiosk_C*      CodeKeyKiosk;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerAddedToMission
struct AMissionType_VRBattle_Base_C_BPOnPlayerAddedToMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init Main Boss
struct AMissionType_VRBattle_Base_C_Init_Main_Boss_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Units
struct AMissionType_VRBattle_Base_C_Get_Number_Of_Units_Params
{
	struct FVRBattleWeightedBurst                      Groups;                                                   // (Parm)
	int                                                NumUnits;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ActivatePortals
struct AMissionType_VRBattle_Base_C_ActivatePortals_Params
{
	int                                                WaveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAIToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Current Wave AIAlive
struct AMissionType_VRBattle_Base_C_Get_Number_Of_Current_Wave_AIAlive_Params
{
	int                                                NumAlive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetNumberOfAIAlive
struct AMissionType_VRBattle_Base_C_GetNumberOfAIAlive_Params
{
	TArray<class APrimalCharacter*>                    Characters;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustSpawnInterval
struct AMissionType_VRBattle_Base_C_AdjustSpawnInterval_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetViableTargets
struct AMissionType_VRBattle_Base_C_GetViableTargets_Params
{
	TArray<class APrimalCharacter*>                    Targets;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        NumAttackers;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TargetsSortedByAttacker;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Attackers for Target
struct AMissionType_VRBattle_Base_C_Get_Number_Of_Attackers_for_Target_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackerCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Advance Wave Index
struct AMissionType_VRBattle_Base_C_Advance_Wave_Index_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Mission AIAlive
struct AMissionType_VRBattle_Base_C_Get_Number_Of_Mission_AIAlive_Params
{
	int                                                NumAlive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetPerPlayerWorldIndicators
struct AMissionType_VRBattle_Base_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayCompanionReactionForAllPlayers
struct AMissionType_VRBattle_Base_C_PlayCompanionReactionForAllPlayers_Params
{
	struct FCompanionReactionData                      ReactionData;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ForcePlayNow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePerPlayerPhaseRequirements
struct AMissionType_VRBattle_Base_C_GeneratePerPlayerPhaseRequirements_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init AIAttack Coordinator
struct AMissionType_VRBattle_Base_C_Init_AIAttack_Coordinator_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_VRBattle_Base_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPIsPhaseComplete
struct AMissionType_VRBattle_Base_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On CodeKey Dropped in World
struct AMissionType_VRBattle_Base_C_On_CodeKey_Dropped_in_World_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Score Spawn Portal
struct AMissionType_VRBattle_Base_C_Score_Spawn_Portal_Params
{
	TArray<class APrimalCharacter*>                    PlayersAndTamesWithinRange;                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Set Current Wave Data
struct AMissionType_VRBattle_Base_C_Set_Current_Wave_Data_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Choose Portals to Spawn BurstsAt
struct AMissionType_VRBattle_Base_C_Choose_Portals_to_Spawn_BurstsAt_Params
{
	TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*> PossiblePortals;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumberOfPortalsToChoose;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*> ChosenPortals;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Burst At Portal
struct AMissionType_VRBattle_Base_C_Spawn_Burst_At_Portal_Params
{
	class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPGetMissionTimerText
struct AMissionType_VRBattle_Base_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Dino Group for Burst
struct AMissionType_VRBattle_Base_C_Get_Dino_Group_for_Burst_Params
{
	TArray<struct FVRBattleWeightedBurst>              WeightedGroups;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ValidSetup;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePhaseRequirements
struct AMissionType_VRBattle_Base_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.UserConstructionScript
struct AMissionType_VRBattle_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionServerSetup
struct AMissionType_VRBattle_Base_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPrepPhaseStarted
struct AMissionType_VRBattle_Base_C_OnPrepPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseStarted
struct AMissionType_VRBattle_Base_C_OnCollectCodeKeysPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnThrottledServerTick
struct AMissionType_VRBattle_Base_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDroppedItemPickedUp
struct AMissionType_VRBattle_Base_C_BPOnMissionDroppedItemPickedUp_Params
{
	class ADroppedItemMission**                        DroppedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDinoDied
struct AMissionType_VRBattle_Base_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseEnded
struct AMissionType_VRBattle_Base_C_OnCollectCodeKeysPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerDied
struct AMissionType_VRBattle_Base_C_BPOnMissionPlayerDied_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnReadyToSpawn_Event
struct AMissionType_VRBattle_Base_C_OnReadyToSpawn_Event_Params
{
	class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DoSpawnFX
struct AMissionType_VRBattle_Base_C_DoSpawnFX_Params
{
	class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayerFinishedTeleporting
struct AMissionType_VRBattle_Base_C_PlayerFinishedTeleporting_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptToSpawnAI
struct AMissionType_VRBattle_Base_C_AttemptToSpawnAI_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseStarted
struct AMissionType_VRBattle_Base_C_OnCrackCodePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseStarted
struct AMissionType_VRBattle_Base_C_OnTeleportAndLevelDestroyPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseEnded
struct AMissionType_VRBattle_Base_C_OnCrackCodePhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseEnded
struct AMissionType_VRBattle_Base_C_OnTeleportAndLevelDestroyPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_TeleportingPhase
struct AMissionType_VRBattle_Base_C_ServerTick_TeleportingPhase_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CrackCodePhase
struct AMissionType_VRBattle_Base_C_ServerTick_CrackCodePhase_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BroadcastPhaseEvent
struct AMissionType_VRBattle_Base_C_BroadcastPhaseEvent_Params
{
	TEnumAsByte<EVRBattlePhaseEvent>                   PhaseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptMidBossBanter
struct AMissionType_VRBattle_Base_C_AttemptMidBossBanter_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CollectCodeKeyPhase
struct AMissionType_VRBattle_Base_C_ServerTick_CollectCodeKeyPhase_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseStarted
struct AMissionType_VRBattle_Base_C_OnLoadingLevelPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseEnded
struct AMissionType_VRBattle_Base_C_OnLoadingLevelPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.CallBossArenaManagerShutdown
struct AMissionType_VRBattle_Base_C_CallBossArenaManagerShutdown_Params
{
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ExecuteUbergraph_MissionType_VRBattle_Base
struct AMissionType_VRBattle_Base_C_ExecuteUbergraph_MissionType_VRBattle_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPhaseEvent__DelegateSignature
struct AMissionType_VRBattle_Base_C_OnPhaseEvent__DelegateSignature_Params
{
	TEnumAsByte<EVRBattlePhaseEvent>                   Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
