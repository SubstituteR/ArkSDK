#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RefreshMissionItemsAtGoal
struct AMissionType_Retrieve_Base_C_RefreshMissionItemsAtGoal_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetAllPlayersNotPendingRemoval
struct AMissionType_Retrieve_Base_C_GetAllPlayersNotPendingRemoval_Params
{
	TArray<class AShooterCharacter*>                   OutChars;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnPlayerRemovedFromMission
struct AMissionType_Retrieve_Base_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CreateLeaderboardEntry
struct AMissionType_Retrieve_Base_C_CreateLeaderboardEntry_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnDinoForStructure
struct AMissionType_Retrieve_Base_C_SpawnDinoForStructure_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveItem
struct AMissionType_Retrieve_Base_C_SpawnRetrieveItem_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CheckClearProtectorDinoTether
struct AMissionType_Retrieve_Base_C_CheckClearProtectorDinoTether_Params
{
	class ADroppedItemMission*                         DroppedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetMissionItemsOnPlayer
struct AMissionType_Retrieve_Base_C_GetMissionItemsOnPlayer_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalQuantity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerDied
struct AMissionType_Retrieve_Base_C_BPOnMissionPlayerDied_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsPlayerCloseToCheckpoint
struct AMissionType_Retrieve_Base_C_IsPlayerCloseToCheckpoint_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_Retrieve_Checkpoint_C*       checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnLastCheckpointEmitter
struct AMissionType_Retrieve_Base_C_SpawnLastCheckpointEmitter_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.begin wait event
struct AMissionType_Retrieve_Base_C_begin_wait_event_Params
{
	float                                              Wander_Duration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.StartHLNARandomWandering
struct AMissionType_Retrieve_Base_C_StartHLNARandomWandering_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_Retrieve_Checkpoint_C*       checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.MakeCompanionEventData
struct AMissionType_Retrieve_Base_C_MakeCompanionEventData_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_Retrieve_Checkpoint_C*       ForCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCompanionEventData                         CompanionWaitEvent;                                       // (Parm, OutParm)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPClientHandleNetExecCommand
struct AMissionType_Retrieve_Base_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ReceiveTick
struct AMissionType_Retrieve_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnRep_ReplicatedRemainingTime
struct AMissionType_Retrieve_Base_C_OnRep_ReplicatedRemainingTime_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionIndicatorString
struct AMissionType_Retrieve_Base_C_BPOverrideMissionIndicatorString_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionWorldIndicator*                     Indicator;                                                // (Parm)
	class FString*                                     String;                                                   // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnAdditionalDinos
struct AMissionType_Retrieve_Base_C_SpawnAdditionalDinos_Params
{
	struct FStruct_DelayedCheckpointData               DelayedCheckpointData;                                    // (Parm, OutParm, ReferenceParm)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnAddedDelayedCheckpoint
struct AMissionType_Retrieve_Base_C_OnAddedDelayedCheckpoint_Params
{
	struct FStruct_DelayedCheckpointData               DelayedCheckpointData;                                    // (Parm)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetDelayedCheckpointState
struct AMissionType_Retrieve_Base_C_GetDelayedCheckpointState_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_Retrieve_Checkpoint_C*       checkpoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UpdateDelayedCheckpointQueue
struct AMissionType_Retrieve_Base_C_UpdateDelayedCheckpointQueue_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.AddToDelayedCheckpointQueue
struct AMissionType_Retrieve_Base_C_AddToDelayedCheckpointQueue_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextCheckpoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_Retrieve_Checkpoint_C*       checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionTimerColor
struct AMissionType_Retrieve_Base_C_BPOverrideMissionTimerColor_Params
{
	class AShooterPlayerController**                   ShooterContr;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TimerOverrideColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsMissionComplete
struct AMissionType_Retrieve_Base_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPIsPhaseComplete
struct AMissionType_Retrieve_Base_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Retrieve_Base_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExtraSpecificDinoSetup
struct AMissionType_Retrieve_Base_C_ExtraSpecificDinoSetup_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionServerSidePoint*                     Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackerDino;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRespawned
struct AMissionType_Retrieve_Base_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionComplete
struct AMissionType_Retrieve_Base_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveTriggerDinos
struct AMissionType_Retrieve_Base_C_SpawnRetrieveTriggerDinos_Params
{
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GeneratePhaseRequirements
struct AMissionType_Retrieve_Base_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetNextCheckpoint
struct AMissionType_Retrieve_Base_C_GetNextCheckpoint_Params
{
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             NextCheckpoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletedNav;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.TryIncrementCheckpoint
struct AMissionType_Retrieve_Base_C_TryIncrementCheckpoint_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DelayedNext;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetPerPlayerWorldIndicators
struct AMissionType_Retrieve_Base_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UserConstructionScript
struct AMissionType_Retrieve_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionServerSetup
struct AMissionType_Retrieve_Base_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Retrieve_Base_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RetrieveSetup
struct AMissionType_Retrieve_Base_C_RetrieveSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ItemSetup
struct AMissionType_Retrieve_Base_C_ItemSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDroppedItemPickedUp
struct AMissionType_Retrieve_Base_C_BPOnMissionDroppedItemPickedUp_Params
{
	class ADroppedItemMission**                        DroppedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.EscapeEventSetup
struct AMissionType_Retrieve_Base_C_EscapeEventSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnThrottledServerTick
struct AMissionType_Retrieve_Base_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Begin Scan
struct AMissionType_Retrieve_Base_C_Begin_Scan_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area and bind on finish
struct AMissionType_Retrieve_Base_C_scan_area_and_bind_on_finish_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area reaction only
struct AMissionType_Retrieve_Base_C_scan_area_reaction_only_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Finished Playing Scan
struct AMissionType_Retrieve_Base_C_Finished_Playing_Scan_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.finished scan backup timer
struct AMissionType_Retrieve_Base_C_finished_scan_backup_timer_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_SpawnLastCheckpointEmitter
struct AMissionType_Retrieve_Base_C_Multi_SpawnLastCheckpointEmitter_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepSetup
struct AMissionType_Retrieve_Base_C_PrepSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepEnded
struct AMissionType_Retrieve_Base_C_PrepEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SetupRetrieveMission
struct AMissionType_Retrieve_Base_C_SetupRetrieveMission_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRemovedInventoryItem
struct AMissionType_Retrieve_Base_C_BPOnMissionPlayerRemovedInventoryItem_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent**                  Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountRemoved;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerEndOverlap
struct AMissionType_Retrieve_Base_C_BPOnMissionTriggerEndOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ShowMissionTime
struct AMissionType_Retrieve_Base_C_Multi_ShowMissionTime_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ToggleSpline
struct AMissionType_Retrieve_Base_C_Multi_ToggleSpline_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionSpline*                              Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDeactivated
struct AMissionType_Retrieve_Base_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExecuteUbergraph_MissionType_Retrieve_Base
struct AMissionType_Retrieve_Base_C_ExecuteUbergraph_MissionType_Retrieve_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
