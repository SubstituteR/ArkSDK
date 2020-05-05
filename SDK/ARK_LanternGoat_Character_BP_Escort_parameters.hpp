#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternGoat_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ClearTamedFollowTarget
struct ALanternGoat_Character_BP_Escort_C_ClearTamedFollowTarget_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOnTamedProcessOrder
struct ALanternGoat_Character_BP_Escort_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BP_ForceAllowAddBuff
struct ALanternGoat_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.AllowGrappling
struct ALanternGoat_Character_BP_Escort_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPDisplayTamedMessage
struct ALanternGoat_Character_BP_Escort_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.GetActualRadius
struct ALanternGoat_Character_BP_Escort_C_GetActualRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPAdjustImpulseFromDamage
struct ALanternGoat_Character_BP_Escort_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPGetGravityZScale
struct ALanternGoat_Character_BP_Escort_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOrderedMoveToLoc
struct ALanternGoat_Character_BP_Escort_C_BPOrderedMoveToLoc_Params
{
	struct FVector                                     DestLoc;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.K2_OnMovementModeChanged
struct ALanternGoat_Character_BP_Escort_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.DoJetpackBurst
struct ALanternGoat_Character_BP_Escort_C_DoJetpackBurst_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStop;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.OnRep_PreventDinoShoulderMount
struct ALanternGoat_Character_BP_Escort_C_OnRep_PreventDinoShoulderMount_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.UserConstructionScript
struct ALanternGoat_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPTimerServer
struct ALanternGoat_Character_BP_Escort_C_BPTimerServer_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ReceiveBeginPlay
struct ALanternGoat_Character_BP_Escort_C_ReceiveBeginPlay_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.PlayPetAnimAfterDelay
struct ALanternGoat_Character_BP_Escort_C_PlayPetAnimAfterDelay_Params
{
};

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ExecuteUbergraph_LanternGoat_Character_BP_Escort
struct ALanternGoat_Character_BP_Escort_C_ExecuteUbergraph_LanternGoat_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
