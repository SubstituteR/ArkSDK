#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceGolem_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPIsHidden
struct AIceGolem_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPPreventRiding
struct AIceGolem_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAddedAttachmentsForItem
struct AIceGolem_Character_BP_C_BPAddedAttachmentsForItem_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPUnstasis
struct AIceGolem_Character_BP_C_BPUnstasis_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintOverrideWantsToRun
struct AIceGolem_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.SetupDisguise
struct AIceGolem_Character_BP_C_SetupDisguise_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAdjustDamage
struct AIceGolem_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.IsPlayerNearFeet
struct AIceGolem_Character_BP_C_IsPlayerNearFeet_Params
{
	bool                                               Yes;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveDestroyed
struct AIceGolem_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.OnRep_bIsDisguised
struct AIceGolem_Character_BP_C_OnRep_bIsDisguised_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTimerServer
struct AIceGolem_Character_BP_C_BPTimerServer_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.HasDirectOrder
struct AIceGolem_Character_BP_C_HasDirectOrder_Params
{
	bool                                               hasOrder;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTryMultiUse
struct AIceGolem_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPGetMultiUseEntries
struct AIceGolem_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ArePlayersNearby
struct AIceGolem_Character_BP_C_ArePlayersNearby_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.CanDisguise
struct AIceGolem_Character_BP_C_CanDisguise_Params
{
	bool                                               IsAllowed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.CheckDisguiseCondition
struct AIceGolem_Character_BP_C_CheckDisguiseCondition_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintCanAttack
struct AIceGolem_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.UserConstructionScript
struct AIceGolem_Character_BP_C_UserConstructionScript_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AIceGolem_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveBeginPlay
struct AIceGolem_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.StartDisguise
struct AIceGolem_Character_BP_C_StartDisguise_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.StopDisguise
struct AIceGolem_Character_BP_C_StopDisguise_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Bury
struct AIceGolem_Character_BP_C_AnimNotify_Golem_Bury_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Getup
struct AIceGolem_Character_BP_C_AnimNotify_Golem_Getup_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ClearTorporHit
struct AIceGolem_Character_BP_C_ClearTorporHit_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.TorporHit
struct AIceGolem_Character_BP_C_TorporHit_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_PlayGolemBurySound
struct AIceGolem_Character_BP_C_AnimNotify_PlayGolemBurySound_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ForceHideMeshes
struct AIceGolem_Character_BP_C_ForceHideMeshes_Params
{
};

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ExecuteUbergraph_IceGolem_Character_BP
struct AIceGolem_Character_BP_C_ExecuteUbergraph_IceGolem_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
