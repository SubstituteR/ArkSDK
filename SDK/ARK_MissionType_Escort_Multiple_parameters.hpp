#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Multiple_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.CalculateLeaderboardScore
struct AMissionType_Escort_Multiple_C_CalculateLeaderboardScore_Params
{
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateAttackingDinoTargetOnEscortDinoDied
struct AMissionType_Escort_Multiple_C_UpdateAttackingDinoTargetOnEscortDinoDied_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.OnThrottledServerTick
struct AMissionType_Escort_Multiple_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPGetExtraLocalMissionIndicators
struct AMissionType_Escort_Multiple_C_BPGetExtraLocalMissionIndicators_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              IndicatorsIn;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMissionWorldIndicator>              IndicatorsOut;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdatePreventMovementOnEscortDamaged
struct AMissionType_Escort_Multiple_C_UpdatePreventMovementOnEscortDamaged_Params
{
	bool*                                              PreventMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetAttackingDinosTarget
struct AMissionType_Escort_Multiple_C_GetAttackingDinosTarget_Params
{
	class APrimalDinoCharacter*                        DinoToTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MakeDinoBaby
struct AMissionType_Escort_Multiple_C_MakeDinoBaby_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BabyAge;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExtraReceiveDamMult;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.RemoveDinoFromFollowers
struct AMissionType_Escort_Multiple_C_RemoveDinoFromFollowers_Params
{
	class AActor*                                      DinoActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetNextLeader
struct AMissionType_Escort_Multiple_C_GetNextLeader_Params
{
	class APrimalDinoCharacter*                        LeaderDino;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetPerPlayerWorldIndicators
struct AMissionType_Escort_Multiple_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExtraFollowerSetup
struct AMissionType_Escort_Multiple_C_ExtraFollowerSetup_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GeneratePhaseRequirements
struct AMissionType_Escort_Multiple_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ShouldShowHints
struct AMissionType_Escort_Multiple_C_ShouldShowHints_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateFollowTargets
struct AMissionType_Escort_Multiple_C_UpdateFollowTargets_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UserConstructionScript
struct AMissionType_Escort_Multiple_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.EscortPhaseSetup
struct AMissionType_Escort_Multiple_C_EscortPhaseSetup_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoDied
struct AMissionType_Escort_Multiple_C_Event_EscortDinoDied_Params
{
	class APrimalCharacter**                           DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MultiAdjustFollowerEscortSpeed
struct AMissionType_Escort_Multiple_C_MultiAdjustFollowerEscortSpeed_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowersDamage
struct AMissionType_Escort_Multiple_C_BindFollowersDamage_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowerDied
struct AMissionType_Escort_Multiple_C_BindFollowerDied_Params
{
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoTakeDamage
struct AMissionType_Escort_Multiple_C_Event_EscortDinoTakeDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPOnMissionComplete
struct AMissionType_Escort_Multiple_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExecuteUbergraph_MissionType_Escort_Multiple
struct AMissionType_Escort_Multiple_C_ExecuteUbergraph_MissionType_Escort_Multiple_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
