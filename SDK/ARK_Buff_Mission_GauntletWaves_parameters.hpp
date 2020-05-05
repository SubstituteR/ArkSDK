#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_GauntletWaves_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickServer
struct ABuff_Mission_GauntletWaves_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPAdjustDamage_Ex
struct ABuff_Mission_GauntletWaves_C_BPAdjustDamage_Ex_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpulseDir;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPGetHUDElements
struct ABuff_Mission_GauntletWaves_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UserConstructionScript
struct ABuff_Mission_GauntletWaves_C_UserConstructionScript_Params
{
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.InpActEvt_F10_K2Node_InputKeyEvent_66
struct ABuff_Mission_GauntletWaves_C_InpActEvt_F10_K2Node_InputKeyEvent_66_Params
{
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickClient
struct ABuff_Mission_GauntletWaves_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ReceiveBeginPlay
struct ABuff_Mission_GauntletWaves_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UpdateMissionDinos
struct ABuff_Mission_GauntletWaves_C_UpdateMissionDinos_Params
{
};

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ExecuteUbergraph_Buff_Mission_GauntletWaves
struct ABuff_Mission_GauntletWaves_C_ExecuteUbergraph_Buff_Mission_GauntletWaves_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
