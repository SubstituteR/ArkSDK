#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.InitMeshCheckpoints
struct AMissionType_Escort_Base_C_InitMeshCheckpoints_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetExtraLocalMissionIndicators
struct AMissionType_Escort_Base_C_BPGetExtraLocalMissionIndicators_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              IndicatorsIn;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMissionWorldIndicator>              IndicatorsOut;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdatePreventMovementOnEscortDamaged
struct AMissionType_Escort_Base_C_UpdatePreventMovementOnEscortDamaged_Params
{
	bool                                               PreventMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetAttackingDinosTarget
struct AMissionType_Escort_Base_C_GetAttackingDinosTarget_Params
{
	class APrimalDinoCharacter*                        DinoToTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateBuffLaunchMagnitude
struct AMissionType_Escort_Base_C_UpdateBuffLaunchMagnitude_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraEscortDinoSetup
struct AMissionType_Escort_Base_C_ExtraEscortDinoSetup_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetMissionTimerText
struct AMissionType_Escort_Base_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ReceiveDestroyed
struct AMissionType_Escort_Base_C_ReceiveDestroyed_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetPerPlayerWorldIndicators
struct AMissionType_Escort_Base_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Escort_Base_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.OnThrottledServerTick
struct AMissionType_Escort_Base_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerRespawned
struct AMissionType_Escort_Base_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraSpecificDinoSetup
struct AMissionType_Escort_Base_C_ExtraSpecificDinoSetup_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionServerSidePoint*                     Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackerDino;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.TestingString
struct AMissionType_Escort_Base_C_TestingString_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ShouldShowHints
struct AMissionType_Escort_Base_C_ShouldShowHints_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GeneratePhaseRequirements
struct AMissionType_Escort_Base_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.SpawnTriggerDinos
struct AMissionType_Escort_Base_C_SpawnTriggerDinos_Params
{
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateCheckpointVFX
struct AMissionType_Escort_Base_C_UpdateCheckpointVFX_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.SetupPhaseComplete
struct AMissionType_Escort_Base_C_SetupPhaseComplete_Params
{
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPIsPhaseComplete
struct AMissionType_Escort_Base_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetCurrentWorldIndicators
struct AMissionType_Escort_Base_C_GetCurrentWorldIndicators_Params
{
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.TryIncrementCheckpoint
struct AMissionType_Escort_Base_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger*                             HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UserConstructionScript
struct AMissionType_Escort_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionServerSetup
struct AMissionType_Escort_Base_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseSetup
struct AMissionType_Escort_Base_C_EscortPhaseSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Escort_Base_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseStarted
struct AMissionType_Escort_Base_C_EscortPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiActivateCheckpoint
struct AMissionType_Escort_Base_C_MultiActivateCheckpoint_Params
{
	class AMissionTrigger*                             checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoTakeDamage
struct AMissionType_Escort_Base_C_Event_EscortDinoTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.HideProtectEscortHint
struct AMissionType_Escort_Base_C_HideProtectEscortHint_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoDied
struct AMissionType_Escort_Base_C_Event_EscortDinoDied_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionDeactivated
struct AMissionType_Escort_Base_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionComplete
struct AMissionType_Escort_Base_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiAdjustEscortDinoSpeed
struct AMissionType_Escort_Base_C_MultiAdjustEscortDinoSpeed_Params
{
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiUpdateHiddenMeshCheckpoints
struct AMissionType_Escort_Base_C_MultiUpdateHiddenMeshCheckpoints_Params
{
	TArray<class AMissionTrigger*>                     Checkpoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExecuteUbergraph_MissionType_Escort_Base
struct AMissionType_Escort_Base_C_ExecuteUbergraph_MissionType_Escort_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
