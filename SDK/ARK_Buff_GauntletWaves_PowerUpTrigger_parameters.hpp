#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GauntletWaves_PowerUpTrigger_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UpdateWeaponMeshParticle
struct ABuff_GauntletWaves_PowerUpTrigger_C_UpdateWeaponMeshParticle_Params
{
	class AShooterWeapon*                              weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UserConstructionScript
struct ABuff_GauntletWaves_PowerUpTrigger_C_UserConstructionScript_Params
{
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ReceiveBeginPlay
struct ABuff_GauntletWaves_PowerUpTrigger_C_ReceiveBeginPlay_Params
{
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SetActiveState
struct ABuff_GauntletWaves_PowerUpTrigger_C_SetActiveState_Params
{
	bool                                               NewActiveState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewWeaponToGive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewAmmoToGive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAmmoAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.Multi_SetActiveState
struct ABuff_GauntletWaves_PowerUpTrigger_C_Multi_SetActiveState_Params
{
	class UClass*                                      NewWeaponToSet;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewAmmoToGive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAmmoAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.PrepareReactivation
struct ABuff_GauntletWaves_PowerUpTrigger_C_PrepareReactivation_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewWeaponToGive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewReactivationTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewAmmoToGive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAmmoAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ClearActivateTimer
struct ABuff_GauntletWaves_PowerUpTrigger_C_ClearActivateTimer_Params
{
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.DelayedActivation
struct ABuff_GauntletWaves_PowerUpTrigger_C_DelayedActivation_Params
{
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickClient
struct ABuff_GauntletWaves_PowerUpTrigger_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickServer
struct ABuff_GauntletWaves_PowerUpTrigger_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SpawnPickupCollectedVFX
struct ABuff_GauntletWaves_PowerUpTrigger_C_SpawnPickupCollectedVFX_Params
{
};

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger
struct ABuff_GauntletWaves_PowerUpTrigger_C_ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
