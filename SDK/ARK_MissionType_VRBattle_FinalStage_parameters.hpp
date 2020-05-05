#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_FinalStage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ForceSucceedMission
struct AMissionType_VRBattle_FinalStage_C_ForceSucceedMission_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.HaveAllPlayersAscended?
struct AMissionType_VRBattle_FinalStage_C_HaveAllPlayersAscended__Params
{
	bool                                               AllPlayersHaveAscended;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnPlayerRemovedFromMission
struct AMissionType_VRBattle_FinalStage_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamFromKiosk
struct AMissionType_VRBattle_FinalStage_C_FireBeamFromKiosk_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Get Difficulty Index As Int
struct AMissionType_VRBattle_FinalStage_C_Get_Difficulty_Index_As_Int_Params
{
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Num Code Keys Required to Activate Kiosk
struct AMissionType_VRBattle_FinalStage_C_Num_Code_Keys_Required_to_Activate_Kiosk_Params
{
	int                                                NumKeys;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionActivated
struct AMissionType_VRBattle_FinalStage_C_BPOnMissionActivated_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GetCurrentWorldIndicators
struct AMissionType_VRBattle_FinalStage_C_GetCurrentWorldIndicators_Params
{
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionDeactivated
struct AMissionType_VRBattle_FinalStage_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.IsMissionComplete
struct AMissionType_VRBattle_FinalStage_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.On Player Begin Overlap Code Key Kiosk
struct AMissionType_VRBattle_FinalStage_C_On_Player_Begin_Overlap_Code_Key_Kiosk_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_VRBattleCodeKeyKiosk_C**     CodeKeyKiosk;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionComplete
struct AMissionType_VRBattle_FinalStage_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDamaged
struct AMissionType_VRBattle_FinalStage_C_OnMainBossDamaged_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GeneratePhaseRequirements
struct AMissionType_VRBattle_FinalStage_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Play Shield Up Reaction
struct AMissionType_VRBattle_FinalStage_C_Play_Shield_Up_Reaction_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnSpawningPhaseStarted
struct AMissionType_VRBattle_FinalStage_C_OnSpawningPhaseStarted_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDied
struct AMissionType_VRBattle_FinalStage_C_OnMainBossDied_Params
{
	class APrimalCharacter*                            BossCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Init Main Boss
struct AMissionType_VRBattle_FinalStage_C_Init_Main_Boss_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.UserConstructionScript
struct AMissionType_VRBattle_FinalStage_C_UserConstructionScript_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnCollectCodeKeysPhaseStarted
struct AMissionType_VRBattle_FinalStage_C_OnCollectCodeKeysPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnPrepPhaseStarted
struct AMissionType_VRBattle_FinalStage_C_OnPrepPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamAtBoss
struct AMissionType_VRBattle_FinalStage_C_FireBeamAtBoss_Params
{
	int                                                TerminalIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.AscendPlayer
struct AMissionType_VRBattle_FinalStage_C_AscendPlayer_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnThrottledServerTick
struct AMissionType_VRBattle_FinalStage_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionServerSetup
struct AMissionType_VRBattle_FinalStage_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ExecuteUbergraph_MissionType_VRBattle_FinalStage
struct AMissionType_VRBattle_FinalStage_C_ExecuteUbergraph_MissionType_VRBattle_FinalStage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
