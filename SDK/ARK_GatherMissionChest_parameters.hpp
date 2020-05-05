#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GatherMissionChest_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GatherMissionChest.GatherMissionChest_C.Is Player On Mission
struct AGatherMissionChest_C_Is_Player_On_Mission_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnMission;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GatherMissionChest.GatherMissionChest_C.BPClientDoMultiUse
struct AGatherMissionChest_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatherMissionChest.GatherMissionChest_C.BPGetMultiUseEntries
struct AGatherMissionChest_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GatherMissionChest.GatherMissionChest_C.BPTryMultiUse
struct AGatherMissionChest_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GatherMissionChest.GatherMissionChest_C.Initialize
struct AGatherMissionChest_C_Initialize_Params
{
	class UClass*                                      MissionTypeClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatherMissionChest.GatherMissionChest_C.UserConstructionScript
struct AGatherMissionChest_C_UserConstructionScript_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.GoDown__FinishedFunc
struct AGatherMissionChest_C_GoDown__FinishedFunc_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.GoDown__UpdateFunc
struct AGatherMissionChest_C_GoDown__UpdateFunc_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.Timeline_0__FinishedFunc
struct AGatherMissionChest_C_Timeline_0__FinishedFunc_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.Timeline_0__UpdateFunc
struct AGatherMissionChest_C_Timeline_0__UpdateFunc_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.ReceiveBeginPlay
struct AGatherMissionChest_C_ReceiveBeginPlay_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.StartToDestroy
struct AGatherMissionChest_C_StartToDestroy_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.ServerStartToRise
struct AGatherMissionChest_C_ServerStartToRise_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.ServerSetSphereRadius
struct AGatherMissionChest_C_ServerSetSphereRadius_Params
{
	float                                              NewSphereRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatherMissionChest.GatherMissionChest_C.StartToDestroyEvent
struct AGatherMissionChest_C_StartToDestroyEvent_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.StartToRise
struct AGatherMissionChest_C_StartToRise_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.CheckForPlayersNearBy
struct AGatherMissionChest_C_CheckForPlayersNearBy_Params
{
};

// Function GatherMissionChest.GatherMissionChest_C.ExecuteUbergraph_GatherMissionChest
struct AGatherMissionChest_C_ExecuteUbergraph_GatherMissionChest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
