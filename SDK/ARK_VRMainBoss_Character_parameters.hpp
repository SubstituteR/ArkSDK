#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_Character_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRMainBoss_Character.VRMainBoss_Character_C.PlaySoundFX
struct AVRMainBoss_Character_C_PlaySoundFX_Params
{
	class USoundCue*                                   Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.SelectCurrentBeamAttackType
struct AVRMainBoss_Character_C_SelectCurrentBeamAttackType_Params
{
	TEnumAsByte<EVRMainBossBeamType>                   SelectedAttack;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.SetShieldVisuals
struct AVRMainBoss_Character_C_SetShieldVisuals_Params
{
	float                                              ShieldStrength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.CreateShieldMaterials
struct AVRMainBoss_Character_C_CreateShieldMaterials_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Beam Callbacks
struct AVRMainBoss_Character_C_Bind_Beam_Callbacks_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Anim Callbacks
struct AVRMainBoss_Character_C_Bind_Anim_Callbacks_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.OnRep_InitialDamageState
struct AVRMainBoss_Character_C_OnRep_InitialDamageState_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.IsFiringAnyTargetedBeams?
struct AVRMainBoss_Character_C_IsFiringAnyTargetedBeams__Params
{
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveAnyDamage
struct AVRMainBoss_Character_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Get Attack Cooldown Time
struct AVRMainBoss_Character_C_Get_Attack_Cooldown_Time_Params
{
	float                                              CooldownValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.LookAtActor
struct AVRMainBoss_Character_C_LookAtActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Beams At Targets
struct AVRMainBoss_Character_C_Server_Fire_Beams_At_Targets_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Rotating Beams
struct AVRMainBoss_Character_C_Server_Fire_Rotating_Beams_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Eye Beams
struct AVRMainBoss_Character_C_Server_Fire_Eye_Beams_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Pick Beam Targets
struct AVRMainBoss_Character_C_Pick_Beam_Targets_Params
{
	TArray<int>                                        TargetIndices;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Get Is Vulnerable
struct AVRMainBoss_Character_C_Get_Is_Vulnerable_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.BPAdjustDamage
struct AVRMainBoss_Character_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.UserConstructionScript
struct AVRMainBoss_Character_C_UserConstructionScript_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__FinishedFunc
struct AVRMainBoss_Character_C_EyebeamsSweepingHeadTimeline__FinishedFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__UpdateFunc
struct AVRMainBoss_Character_C_EyebeamsSweepingHeadTimeline__UpdateFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__FinishedFunc
struct AVRMainBoss_Character_C_RotatingBeamsTimeline__FinishedFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__UpdateFunc
struct AVRMainBoss_Character_C_RotatingBeamsTimeline__UpdateFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__FinishedFunc
struct AVRMainBoss_Character_C_ShieldTimeline__FinishedFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__UpdateFunc
struct AVRMainBoss_Character_C_ShieldTimeline__UpdateFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__FinishedFunc
struct AVRMainBoss_Character_C_Timeline_0__FinishedFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__UpdateFunc
struct AVRMainBoss_Character_C_Timeline_0__UpdateFunc_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_DropShield
struct AVRMainBoss_Character_C_Multicast_DropShield_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_RaiseShield
struct AVRMainBoss_Character_C_Multicast_RaiseShield_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_DropShield
struct AVRMainBoss_Character_C_Server_DropShield_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_RaiseShield
struct AVRMainBoss_Character_C_Server_RaiseShield_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Set Vulnerability
struct AVRMainBoss_Character_C_Set_Vulnerability_Params
{
	bool                                               IsVulnerable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveTick
struct AVRMainBoss_Character_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Begin Attacking
struct AVRMainBoss_Character_C_Begin_Attacking_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireBeamAtTarget
struct AVRMainBoss_Character_C_Multicast_FireBeamAtTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateTracking
struct AVRMainBoss_Character_C_UpdateTracking_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireRotatingBeams
struct AVRMainBoss_Character_C_Multicast_FireRotatingBeams_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingYaw;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireEyeBeams
struct AVRMainBoss_Character_C_Multicast_FireEyeBeams_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Start Sweeping Head
struct AVRMainBoss_Character_C_Start_Sweeping_Head_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.SetHeadTrackingState
struct AVRMainBoss_Character_C_SetHeadTrackingState_Params
{
	TEnumAsByte<EVRBoss_HeadTrackingState>             State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.StartRotatingBeamTimeline
struct AVRMainBoss_Character_C_StartRotatingBeamTimeline_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.EyeBeamsStoppedFiring
struct AVRMainBoss_Character_C_EyeBeamsStoppedFiring_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.delayed reaction to forewarn players of incoming beam attacks
struct AVRMainBoss_Character_C_delayed_reaction_to_forewarn_players_of_incoming_beam_attacks_Params
{
	float                                              attack_cooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringEyebeams_Event
struct AVRMainBoss_Character_C_StartFiringEyebeams_Event_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.AdvanceAttackState
struct AVRMainBoss_Character_C_AdvanceAttackState_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsStoppedFiringEvent_Event
struct AVRMainBoss_Character_C_RotatingBeamsStoppedFiringEvent_Event_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringRotatingBeams
struct AVRMainBoss_Character_C_StartFiringRotatingBeams_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.SetCurrentCooldown
struct AVRMainBoss_Character_C_SetCurrentCooldown_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.AbortBeams
struct AVRMainBoss_Character_C_AbortBeams_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveBeginPlay
struct AVRMainBoss_Character_C_ReceiveBeginPlay_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugFacingDirection
struct AVRMainBoss_Character_C_DebugFacingDirection_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugTargetedBeams
struct AVRMainBoss_Character_C_DebugTargetedBeams_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugRotatingBeams
struct AVRMainBoss_Character_C_DebugRotatingBeams_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.OnDied_Event
struct AVRMainBoss_Character_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_Set VR Battle Stage
struct AVRMainBoss_Character_C_Multicast_Set_VR_Battle_Stage_Params
{
	int                                                Stage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBanterAnimation
struct AVRMainBoss_Character_C_PlayBanterAnimation_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.TargetedBeamsStoppedFiringEvent
struct AVRMainBoss_Character_C_TargetedBeamsStoppedFiringEvent_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.StartChargingTargetedBeams_Event
struct AVRMainBoss_Character_C_StartChargingTargetedBeams_Event_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringTargetedBeams_Event
struct AVRMainBoss_Character_C_StartFiringTargetedBeams_Event_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateHeadPosMPCParam
struct AVRMainBoss_Character_C_UpdateHeadPosMPCParam_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_SetBattleStage
struct AVRMainBoss_Character_C_Server_SetBattleStage_Params
{
	int                                                StageIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_PlayTaunt
struct AVRMainBoss_Character_C_Multicast_PlayTaunt_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_CancelTaunt
struct AVRMainBoss_Character_C_Multicast_CancelTaunt_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.ExecuteUbergraph_VRMainBoss_Character
struct AVRMainBoss_Character_C_ExecuteUbergraph_VRMainBoss_Character_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.CancelBossTaunt__DelegateSignature
struct AVRMainBoss_Character_C_CancelBossTaunt__DelegateSignature_Params
{
};

// Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBossTaunt__DelegateSignature
struct AVRMainBoss_Character_C_PlayBossTaunt__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
