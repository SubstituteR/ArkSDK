#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.PreventsTargeting
struct AEelBoss_Character_BP_C_PreventsTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAdjustOutputDamage
struct AEelBoss_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.GetDamageThresholdPerPhase
struct AEelBoss_Character_BP_C_GetDamageThresholdPerPhase_Params
{
	float                                              Threshold;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.AllowAttackingAfterUnHide
struct AEelBoss_Character_BP_C_AllowAttackingAfterUnHide_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.TickSounds
struct AEelBoss_Character_BP_C_TickSounds_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPSentKilledNotification
struct AEelBoss_Character_BP_C_BPSentKilledNotification_Params
{
	class AShooterPlayerController**                   ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Is Any Enemy Within Bite Attack
struct AEelBoss_Character_BP_C_Is_Any_Enemy_Within_Bite_Attack_Params
{
	bool                                               ShouldBite;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintCanAttack
struct AEelBoss_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.FireMouth Projectiles
struct AEelBoss_Character_BP_C_FireMouth_Projectiles_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartBulletHell
struct AEelBoss_Character_BP_C_StartBulletHell_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.OnRep_bIsHiding
struct AEelBoss_Character_BP_C_OnRep_bIsHiding_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AEelBoss_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPAdjustDamage
struct AEelBoss_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPModifyDesiredRotation
struct AEelBoss_Character_BP_C_BPModifyDesiredRotation_Params
{
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.UserConstructionScript
struct AEelBoss_Character_BP_C_UserConstructionScript_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__FinishedFunc
struct AEelBoss_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__UpdateFunc
struct AEelBoss_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveBeginPlay
struct AEelBoss_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveTick
struct AEelBoss_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartGoingBackToHole
struct AEelBoss_Character_BP_C_StartGoingBackToHole_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ServerRequest_ResetTransform
struct AEelBoss_Character_BP_C_ServerRequest_ResetTransform_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.PlayYawn
struct AEelBoss_Character_BP_C_PlayYawn_Params
{
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ExecuteUbergraph_EelBoss_Character_BP
struct AEelBoss_Character_BP_C_ExecuteUbergraph_EelBoss_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Current Phase Complete and Returning Home__DelegateSignature
struct AEelBoss_Character_BP_C_Current_Phase_Complete_and_Returning_Home__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
