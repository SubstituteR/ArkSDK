#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MissionEscortDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffAdjustDamage
struct ABuff_MissionEscortDino_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPClientDoMultiUse
struct ABuff_MissionEscortDino_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPTryMultiUse
struct ABuff_MissionEscortDino_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPGetMultiUseEntries
struct ABuff_MissionEscortDino_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.UserConstructionScript
struct ABuff_MissionEscortDino_C_UserConstructionScript_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffTickServer
struct ABuff_MissionEscortDino_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchToGoal
struct ABuff_MissionEscortDino_C_DelayedAddLaunchToGoal_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.LaunchCharWithVFX
struct ABuff_MissionEscortDino_C_LaunchCharWithVFX_Params
{
	struct FRotator                                    LaunchDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LaunchMagnitude;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveBeginPlay
struct ABuff_MissionEscortDino_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchForward
struct ABuff_MissionEscortDino_C_DelayedAddLaunchForward_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchBackward
struct ABuff_MissionEscortDino_C_DelayedAddLaunchBackward_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.MultiSpawnOrRemoveFX
struct ABuff_MissionEscortDino_C_MultiSpawnOrRemoveFX_Params
{
	bool                                               bIsForSpawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveDestroyed
struct ABuff_MissionEscortDino_C_ReceiveDestroyed_Params
{
};

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ExecuteUbergraph_Buff_MissionEscortDino
struct ABuff_MissionEscortDino_C_ExecuteUbergraph_Buff_MissionEscortDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
