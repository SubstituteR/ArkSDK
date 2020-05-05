#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Hunt.MissionType_Hunt_C.StartFadeOut
struct AMissionType_Hunt_C_StartFadeOut_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetDinosToSpawnForStage
struct AMissionType_Hunt_C_GetDinosToSpawnForStage_Params
{
	int                                                ForStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDinoSetup>                          DinosSetups;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       IsMainTarget;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetClosestTrackLocation
struct AMissionType_Hunt_C_GetClosestTrackLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestTrack;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetClosestSplinePoint
struct AMissionType_Hunt_C_GetClosestSplinePoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.StartFleeing
struct AMissionType_Hunt_C_StartFleeing_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetHealthPercentForStage
struct AMissionType_Hunt_C_GetHealthPercentForStage_Params
{
	int                                                Stage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinHealthPercent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InitialHealthPercent;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentTargetPoint
struct AMissionType_Hunt_C_GetCurrentTargetPoint_Params
{
	class AMissionServerSidePoint*                     TargetPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetTrackIndexForStage
struct AMissionType_Hunt_C_GetTrackIndexForStage_Params
{
	int                                                Stage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetLastStagePercentage
struct AMissionType_Hunt_C_GetLastStagePercentage_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.SetHuntStageFinished
struct AMissionType_Hunt_C_SetHuntStageFinished_Params
{
	int                                                Stage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentHuntStage
struct AMissionType_Hunt_C_GetCurrentHuntStage_Params
{
	int                                                CurrentStage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetTotalDamageDonePercent
struct AMissionType_Hunt_C_GetTotalDamageDonePercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.React to Found Dinos
struct AMissionType_Hunt_C_React_to_Found_Dinos_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPServerHandleNetExecCommand
struct AMissionType_Hunt_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetNumberOfFoundTracks
struct AMissionType_Hunt_C_GetNumberOfFoundTracks_Params
{
	int                                                NrOfTracks;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Hunt_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.ReceiveBeginPlay
struct AMissionType_Hunt_C_ReceiveBeginPlay_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.IsAnyTargetVisible
struct AMissionType_Hunt_C_IsAnyTargetVisible_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckAllPlayers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnTargets;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldReveal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                VisibleTargets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.SetInitialHintLocation
struct AMissionType_Hunt_C_SetInitialHintLocation_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionComplete
struct AMissionType_Hunt_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Hunt.MissionType_Hunt_C.CreateLeaderboardEntry
struct AMissionType_Hunt_C_CreateLeaderboardEntry_Params
{
	class AShooterPlayerController*                    ForPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseEnded
struct AMissionType_Hunt_C_OnMissionPhaseEnded_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.IsTargetVisible
struct AMissionType_Hunt_C_IsTargetVisible_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldReveal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPGenerateMissionRewards
struct AMissionType_Hunt_C_BPGenerateMissionRewards_Params
{
	struct FCharacterAndControllerPair*                Player;                                                   // (Parm)
	bool*                                              bCompletedSuccessfully;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPReward;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         GeneratedItems;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDamage
struct AMissionType_Hunt_C_BPOnMissionDinoDamage_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDied
struct AMissionType_Hunt_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.IsMissionComplete
struct AMissionType_Hunt_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.SelectSpawnpoint
struct AMissionType_Hunt_C_SelectSpawnpoint_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.GeneratePerPlayerPhaseRequirements
struct AMissionType_Hunt_C_GeneratePerPlayerPhaseRequirements_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.Set Hunt Per Player Data
struct AMissionType_Hunt_C_Set_Hunt_Per_Player_Data_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpdateParamNr;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player_1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_BiometricTrackingItem>       BiometricTracking_2;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CurrentIndicatorState_3;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             LastSeenTargetTime_4;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsScanning_5;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             LastRevealedTrackingTime_6;                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             LastDamagedTargetTime_7;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastClosestSplineLocation_8;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetHuntPerPlayerData
struct AMissionType_Hunt_C_GetHuntPerPlayerData_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_HuntPerPlayerData                   Data;                                                     // (Parm, OutParm)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.FinishedScanCompetitive
struct AMissionType_Hunt_C_FinishedScanCompetitive_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocationCompetitive
struct AMissionType_Hunt_C_UpdateHintLocationCompetitive_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerRemovedFromMission
struct AMissionType_Hunt_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerAddedToMission
struct AMissionType_Hunt_C_BPOnPlayerAddedToMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.AddBiometricTrackingIndicators
struct AMissionType_Hunt_C_AddBiometricTrackingIndicators_Params
{
	TArray<struct FMissionWorldIndicator>              IndicatorArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.ChangedIndicatorState
struct AMissionType_Hunt_C_ChangedIndicatorState_Params
{
	int                                                From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.UpdateCurrentIndicatorState
struct AMissionType_Hunt_C_UpdateCurrentIndicatorState_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsScanning;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.Reveal Biometric Tracking
struct AMissionType_Hunt_C_Reveal_Biometric_Tracking_Params
{
	TArray<struct FStruct_BiometricTrackingItem>       RevealedArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.UpdateBiometricTrackingItems
struct AMissionType_Hunt_C_UpdateBiometricTrackingItems_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.CanInvitePlayerToMission
struct AMissionType_Hunt_C_CanInvitePlayerToMission_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontCheckFriendly;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanInvite;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.AddMissionWeapon
struct AMissionType_Hunt_C_AddMissionWeapon_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.SpawnHuntDinos
struct AMissionType_Hunt_C_SpawnHuntDinos_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.StartHunt
struct AMissionType_Hunt_C_StartHunt_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseStarted
struct AMissionType_Hunt_C_OnMissionPhaseStarted_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GatherPlayers
struct AMissionType_Hunt_C_GatherPlayers_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPStaticCanStartMission
struct AMissionType_Hunt_C_BPStaticCanStartMission_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_MissionData**                    PlayerMissionData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ClientFailureReason;                                      // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      OutSelectedMissionDispatcher;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GetPerPlayerWorldIndicators
struct AMissionType_Hunt_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.GeneratePhaseRequirements
struct AMissionType_Hunt_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPIsPhaseComplete
struct AMissionType_Hunt_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.UserConstructionScript
struct AMissionType_Hunt_C_UserConstructionScript_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.OnThrottledServerTick
struct AMissionType_Hunt_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocation
struct AMissionType_Hunt_C_UpdateHintLocation_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaAndBindOnFinish
struct AMissionType_Hunt_C_ScanAreaAndBindOnFinish_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.FinishedScan
struct AMissionType_Hunt_C_FinishedScan_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaReactionOnly
struct AMissionType_Hunt_C_ScanAreaReactionOnly_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Hunt.MissionType_Hunt_C.First Hint
struct AMissionType_Hunt_C_First_Hint_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDeactivated
struct AMissionType_Hunt_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Hunt.MissionType_Hunt_C.ExecuteUbergraph_MissionType_Hunt
struct AMissionType_Hunt_C_ExecuteUbergraph_MissionType_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
