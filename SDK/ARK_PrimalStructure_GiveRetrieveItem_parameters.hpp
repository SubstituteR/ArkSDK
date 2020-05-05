#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.SpawnItemOrDino
struct APrimalStructure_GiveRetrieveItem_C_SpawnItemOrDino_Params
{
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOverrideUILocation
struct APrimalStructure_GiveRetrieveItem_C_BPOverrideUILocation_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ReceiveDestroyed
struct APrimalStructure_GiveRetrieveItem_C_ReceiveDestroyed_Params
{
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOnDemolish
struct APrimalStructure_GiveRetrieveItem_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPTryMultiUse
struct APrimalStructure_GiveRetrieveItem_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPGetMultiUseEntries
struct APrimalStructure_GiveRetrieveItem_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.UserConstructionScript
struct APrimalStructure_GiveRetrieveItem_C_UserConstructionScript_Params
{
};

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem
struct APrimalStructure_GiveRetrieveItem_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
