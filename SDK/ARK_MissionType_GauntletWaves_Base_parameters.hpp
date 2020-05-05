#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.EvaluateArenaForPlayersAndStructs
struct AMissionType_GauntletWaves_Base_C_EvaluateArenaForPlayersAndStructs_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SortGauntletDamageData
struct AMissionType_GauntletWaves_Base_C_SortGauntletDamageData_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Get Gauntlet Damage Data For Player
struct AMissionType_GauntletWaves_Base_C_Get_Gauntlet_Damage_Data_For_Player_Params
{
	TArray<struct FGauntletWaves_PlayerControllerDamageStruct> Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGauntletWaves_PlayerControllerDamageStruct Array_Element;                                            // (Parm, OutParm)
	int                                                Array_Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundPlayer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.AddGauntletLeaderboardRow
struct AMissionType_GauntletWaves_Base_C_AddGauntletLeaderboardRow_Params
{
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             NetworkTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // (Parm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Clear Improperly Destroyed Mission Dinos
struct AMissionType_GauntletWaves_Base_C_Clear_Improperly_Destroyed_Mission_Dinos_Params
{
	TArray<class APrimalDinoCharacter*>                InputPin;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMostCommonSetup
struct AMissionType_GauntletWaves_Base_C_GetMostCommonSetup_Params
{
	TArray<struct FDinoSetup>                          InputPin;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        EntriesSpawnNumLimits;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDinoSetup                                  OutputPin;                                                // (Parm, OutParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.formatted time
struct AMissionType_GauntletWaves_Base_C_formatted_time_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GivePlayerPowerUpWeapons
struct AMissionType_GauntletWaves_Base_C_GivePlayerPowerUpWeapons_Params
{
	class ABuff_GauntletWaves_PowerUpTrigger_C*        PowerUpBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponDataForCurrentWave
struct AMissionType_GauntletWaves_Base_C_GetWeaponDataForCurrentWave_Params
{
	TArray<struct FGauntletWeaponPowerupData_Struct>   CurrentPhaseWeaponDatas;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponTypeForMissionTriggerPriority
struct AMissionType_GauntletWaves_Base_C_GetWeaponTypeForMissionTriggerPriority_Params
{
	TArray<struct FGauntletWeaponPowerupData_Struct>   WeaponsForThisPhase;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MissionTriggerOrder;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReactivationTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoAmount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWaveDuration
struct AMissionType_GauntletWaves_Base_C_GetCurrentWaveDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.TeleportActorOutsideMission
struct AMissionType_GauntletWaves_Base_C_TeleportActorOutsideMission_Params
{
	class AActor*                                      ActorToTeleport;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSaddleData
struct AMissionType_GauntletWaves_Base_C_GetDinoSaddleData_Params
{
	class APrimalDinoCharacter*                        InputDino;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnBytes;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCharStatsAsFloats
struct AMissionType_GauntletWaves_Base_C_GetCharStatsAsFloats_Params
{
	class APrimalDinoCharacter*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ConvertToCryoData
struct AMissionType_GauntletWaves_Base_C_ConvertToCryoData_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCustomItemData                             CustomItemData;                                           // (Parm, OutParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Set Phase Dino Spawn Types
struct AMissionType_GauntletWaves_Base_C_Set_Phase_Dino_Spawn_Types_Params
{
	TArray<struct FDinoSetup>                          DinoSetupEntires;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetPerPlayerWorldIndicators
struct AMissionType_GauntletWaves_Base_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ReceiveDestroyed
struct AMissionType_GauntletWaves_Base_C_ReceiveDestroyed_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxTotalDinosPerWave
struct AMissionType_GauntletWaves_Base_C_GetMaxTotalDinosPerWave_Params
{
	int                                                MaxTotalDinos;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CanStartPhase
struct AMissionType_GauntletWaves_Base_C_CanStartPhase_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGenerateMissionRewards
struct AMissionType_GauntletWaves_Base_C_BPGenerateMissionRewards_Params
{
	struct FCharacterAndControllerPair*                Player;                                                   // (Parm)
	bool*                                              bCompletedSuccessfully;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPReward;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         GeneratedItems;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SpawnGauntletDino
struct AMissionType_GauntletWaves_Base_C_SpawnGauntletDino_Params
{
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSpawnInterval
struct AMissionType_GauntletWaves_Base_C_GetDinoSpawnInterval_Params
{
	float                                              DinoSpawnInterval;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxActiveDinos
struct AMissionType_GauntletWaves_Base_C_GetMaxActiveDinos_Params
{
	int                                                MaxActiveDinos;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverride;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGetMissionTimerText
struct AMissionType_GauntletWaves_Base_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetRandomDinoSetupForPhase
struct AMissionType_GauntletWaves_Base_C_GetRandomDinoSetupForPhase_Params
{
	struct FName                                       PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidSetup;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDinoSetup                                  DinoSetup;                                                // (Parm, OutParm)
	int                                                RandomSetupIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.IsMissionComplete
struct AMissionType_GauntletWaves_Base_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPIsPhaseComplete
struct AMissionType_GauntletWaves_Base_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWorldIndicators
struct AMissionType_GauntletWaves_Base_C_GetCurrentWorldIndicators_Params
{
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GeneratePhaseRequirements
struct AMissionType_GauntletWaves_Base_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.UserConstructionScript
struct AMissionType_GauntletWaves_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDinoDied
struct AMissionType_GauntletWaves_Base_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnThrottledServerTick
struct AMissionType_GauntletWaves_Base_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionComplete
struct AMissionType_GauntletWaves_Base_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDamage
struct AMissionType_GauntletWaves_Base_C_BPOnMissionStructureDamage_Params
{
	class APrimalStructure**                           Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDestroyed
struct AMissionType_GauntletWaves_Base_C_BPOnMissionStructureDestroyed_Params
{
	class APrimalStructure**                           Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_GauntletWaves_Base_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SetupPowerUpTriggersAndBuffs
struct AMissionType_GauntletWaves_Base_C_SetupPowerUpTriggersAndBuffs_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Begin Waiting Period
struct AMissionType_GauntletWaves_Base_C_Begin_Waiting_Period_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.MultiSpawnEmitterForGauntlet
struct AMissionType_GauntletWaves_Base_C_MultiSpawnEmitterForGauntlet_Params
{
	class UParticleSystem*                             particleTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DinoSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideScaleAndTimeDilation;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerRespawned
struct AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ThrottledEnsureAggro
struct AMissionType_GauntletWaves_Base_C_ThrottledEnsureAggro_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerDied
struct AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerDied_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerEnteredBounds
struct AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerEnteredBounds_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPlayerFoundOutsideBounds
struct AMissionType_GauntletWaves_Base_C_OnPlayerFoundOutsideBounds_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CryoAllTamesAndPortOthers
struct AMissionType_GauntletWaves_Base_C_CryoAllTamesAndPortOthers_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseEnded
struct AMissionType_GauntletWaves_Base_C_OnPrepPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnOtherWaveStarted
struct AMissionType_GauntletWaves_Base_C_OnOtherWaveStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnFirstWaveStarted
struct AMissionType_GauntletWaves_Base_C_OnFirstWaveStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseStarted
struct AMissionType_GauntletWaves_Base_C_OnPrepPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionServerSetup
struct AMissionType_GauntletWaves_Base_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.PreSetupForFirstWave
struct AMissionType_GauntletWaves_Base_C_PreSetupForFirstWave_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnGauntletWaveStarted
struct AMissionType_GauntletWaves_Base_C_OnGauntletWaveStarted_Params
{
	int                                                WaveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MissionPhaseName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.NotifyDamageTakenByPlayer
struct AMissionType_GauntletWaves_Base_C_NotifyDamageTakenByPlayer_Params
{
	class AShooterPlayerController*                    Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDeactivated
struct AMissionType_GauntletWaves_Base_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ExecuteUbergraph_MissionType_GauntletWaves_Base
struct AMissionType_GauntletWaves_Base_C_ExecuteUbergraph_MissionType_GauntletWaves_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
