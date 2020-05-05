#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GetNumBatteries
struct AChupaCabra_Character_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get Charge Variable Interface
struct AChupaCabra_Character_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPIsHidden
struct AChupaCabra_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BP_OnSetDeath
struct AChupaCabra_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnRep_isUnderground
struct AChupaCabra_Character_BP_C_OnRep_isUnderground_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UseCringeForTime
struct AChupaCabra_Character_BP_C_UseCringeForTime_Params
{
	float*                                             cringeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChargeEvent
struct AChupaCabra_Character_BP_C_OnChargeEvent_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PlayCringeAnim
struct AChupaCabra_Character_BP_C_PlayCringeAnim_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeMontage
struct AChupaCabra_Character_BP_C_IsPlayingCringeMontage_Params
{
	bool                                               playingCringeAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelTempCringe
struct AChupaCabra_Character_BP_C_CancelTempCringe_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Use Cringe for TimeOld
struct AChupaCabra_Character_BP_C_Use_Cringe_for_TimeOld_Params
{
	float                                              cringeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeAnim
struct AChupaCabra_Character_BP_C_IsPlayingCringeAnim_Params
{
	class UAnimMontage*                                montagePlaying;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DisableAlpha
struct AChupaCabra_Character_BP_C_DisableAlpha_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get RadiusToJoinPack
struct AChupaCabra_Character_BP_C_Get_RadiusToJoinPack_Params
{
	bool*                                              belongsToOldPack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              firstTimeRadius;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Add Dino to Pack
struct AChupaCabra_Character_BP_C_Add_Dino_to_Pack_Params
{
	class AActor**                                     ActorToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Create Charge Manager
struct AChupaCabra_Character_BP_C_Create_Charge_Manager_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanPlayCringeAnim
struct AChupaCabra_Character_BP_C_CanPlayCringeAnim_Params
{
	bool                                               fromInstantCharge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canPlayAnim;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Charge EventOld
struct AChupaCabra_Character_BP_C_On_Charge_EventOld_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StateChangeActions_ServerAndClient
struct AChupaCabra_Character_BP_C_StateChangeActions_ServerAndClient_Params
{
	bool                                               underground;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetVeinsEmissive
struct AChupaCabra_Character_BP_C_SetVeinsEmissive_Params
{
	float                                              emissiveValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroySurroundingChupacabras
struct AChupaCabra_Character_BP_C_DestroySurroundingChupacabras_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get MoundTransform
struct AChupaCabra_Character_BP_C_Get_MoundTransform_Params
{
	bool                                               useDiveInSocket;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moundLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    moundRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moundScale;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPCharacterSleeped
struct AChupaCabra_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Has Relevant Target
struct AChupaCabra_Character_BP_C_Has_Relevant_Target_Params
{
	bool                                               relevant;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveDestroyed
struct AChupaCabra_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelSuperminionSpawnIfNeeded
struct AChupaCabra_Character_BP_C_CancelSuperminionSpawnIfNeeded_Params
{
	float                                              currentChargeAmount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               cancelled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateBiteAttackAnimPriorities
struct AChupaCabra_Character_BP_C_UpdateBiteAttackAnimPriorities_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateSuperminionState
struct AChupaCabra_Character_BP_C_UpdateSuperminionState_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Superminion Died
struct AChupaCabra_Character_BP_C_On_Superminion_Died_Params
{
	class APrimalDinoCharacter*                        superMinion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPAdjustDamage
struct AChupaCabra_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidSurfaceToDiveIn
struct AChupaCabra_Character_BP_C_IsValidSurfaceToDiveIn_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn
struct AChupaCabra_Character_BP_C_StopSuperminionSpawn_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SpawnSuperminion
struct AChupaCabra_Character_BP_C_SpawnSuperminion_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnMinionSpawned
struct AChupaCabra_Character_BP_C_OnMinionSpawned_Params
{
	class APrimalDinoCharacter*                        newMinion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Start Superminion Spawn
struct AChupaCabra_Character_BP_C_Can_Start_Superminion_Spawn_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySetAlphaDino
struct AChupaCabra_Character_BP_C_TrySetAlphaDino_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Spawn Minion
struct AChupaCabra_Character_BP_C_Spawn_Minion_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Spawn Super Minion
struct AChupaCabra_Character_BP_C_Can_Spawn_Super_Minion_Params
{
	bool                                               canSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanSpawnMinion
struct AChupaCabra_Character_BP_C_CanSpawnMinion_Params
{
	bool                                               canSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GatherPack
struct AChupaCabra_Character_BP_C_GatherPack_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPShouldForceFlee
struct AChupaCabra_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.FindNewLeaderForPack
struct AChupaCabra_Character_BP_C_FindNewLeaderForPack_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPDoAttack
struct AChupaCabra_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidClassForPack
struct AChupaCabra_Character_BP_C_IsValidClassForPack_Params
{
	class AActor**                                     joiningActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPackLeader
struct AChupaCabra_Character_BP_C_IsPackLeader_Params
{
	bool                                               bIsLeader;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveOut
struct AChupaCabra_Character_BP_C_CanDiveOut_Params
{
	bool                                               FastDiveOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateVisibilityAndCollision
struct AChupaCabra_Character_BP_C_UpdateVisibilityAndCollision_Params
{
	bool                                               isUnderground;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintCanAttack
struct AChupaCabra_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveOut
struct AChupaCabra_Character_BP_C_ShouldDiveOut_Params
{
	bool                                               shouldOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldOutFast;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveIn
struct AChupaCabra_Character_BP_C_ShouldDiveIn_Params
{
	bool                                               shouldIn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveIn
struct AChupaCabra_Character_BP_C_CanDiveIn_Params
{
	bool                                               isFastDive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canDoDive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetDinoCollisionState
struct AChupaCabra_Character_BP_C_SetDinoCollisionState_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTimerServer
struct AChupaCabra_Character_BP_C_BPTimerServer_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UserConstructionScript
struct AChupaCabra_Character_BP_C_UserConstructionScript_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__FinishedFunc
struct AChupaCabra_Character_BP_C_ChargeVeinsTimeline__FinishedFunc_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__UpdateFunc
struct AChupaCabra_Character_BP_C_ChargeVeinsTimeline__UpdateFunc_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Interface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Trigger Multicast Interface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Interface Check for Batteries and Update Multicast
struct AChupaCabra_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean MulticastInterface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Double MulticastInterface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean Interface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventDoubleInterface
struct AChupaCabra_Character_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntInterface
struct AChupaCabra_Character_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntMulticastInterface
struct AChupaCabra_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveBeginPlay
struct AChupaCabra_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn
struct AChupaCabra_Character_BP_C_DiveIn_Params
{
	bool                                               fastDiveIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                forceAnimIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveIn
struct AChupaCabra_Character_BP_C_OnDiveIn_Params
{
	bool                                               wasFast;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut
struct AChupaCabra_Character_BP_C_DiveOut_Params
{
	bool                                               FastDiveOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                forceAnimIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveOut
struct AChupaCabra_Character_BP_C_OnDiveOut_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveIn
struct AChupaCabra_Character_BP_C_TryDiveIn_Params
{
	bool                                               fastDiveIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                forceAnimIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInitialBury;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveOut
struct AChupaCabra_Character_BP_C_TryDiveOut_Params
{
	bool                                               FastDiveOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                forceAnimIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AChupaCabra_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPUnstasis
struct AChupaCabra_Character_BP_C_BPUnstasis_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopChargeEffects
struct AChupaCabra_Character_BP_C_StopChargeEffects_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawArrow
struct AChupaCabra_Character_BP_C_DrawArrow_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawSphere
struct AChupaCabra_Character_BP_C_DrawSphere_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn_FailSafe
struct AChupaCabra_Character_BP_C_DiveIn_FailSafe_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut_FailSafe
struct AChupaCabra_Character_BP_C_DiveOut_FailSafe_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySpawnSuperminion
struct AChupaCabra_Character_BP_C_TrySpawnSuperminion_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTriggerStasisEvent
struct AChupaCabra_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals_Multicast
struct AChupaCabra_Character_BP_C_StartDissolveVisuals_Multicast_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopDissolveVisuals_Multicast
struct AChupaCabra_Character_BP_C_StopDissolveVisuals_Multicast_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DespawnDissolveParticles
struct AChupaCabra_Character_BP_C_DespawnDissolveParticles_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChupacabraSleeped
struct AChupaCabra_Character_BP_C_OnChupacabraSleeped_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PreDiveOut
struct AChupaCabra_Character_BP_C_PreDiveOut_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Set Charge Variable Interface
struct AChupaCabra_Character_BP_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopCringeAnim
struct AChupaCabra_Character_BP_C_StopCringeAnim_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.NetPlayDiveOutAnim
struct AChupaCabra_Character_BP_C_NetPlayDiveOutAnim_Params
{
	class UAnimMontage*                                AnimToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroyOnInactivity
struct AChupaCabra_Character_BP_C_DestroyOnInactivity_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float
struct AChupaCabra_Character_BP_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float_Multicast
struct AChupaCabra_Character_BP_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventFloatInterface
struct AChupaCabra_Character_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Float Multicast Interface
struct AChupaCabra_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals
struct AChupaCabra_Character_BP_C_StartDissolveVisuals_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopTempCringe
struct AChupaCabra_Character_BP_C_StopTempCringe_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn_Multicast
struct AChupaCabra_Character_BP_C_StopSuperminionSpawn_Multicast_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnSuperminionAnimFinished
struct AChupaCabra_Character_BP_C_OnSuperminionAnimFinished_Params
{
};

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ExecuteUbergraph_ChupaCabra_Character_BP
struct AChupaCabra_Character_BP_C_ExecuteUbergraph_ChupaCabra_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
