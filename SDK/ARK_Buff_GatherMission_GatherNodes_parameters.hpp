#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GatherMission_GatherNodes_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.GetClosestTargetLocation
struct ABuff_GatherMission_GatherNodes_C_GetClosestTargetLocation_Params
{
	struct FVector                                     Closest;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BPGetHUDElements
struct ABuff_GatherMission_GatherNodes_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.UserConstructionScript
struct ABuff_GatherMission_GatherNodes_C_UserConstructionScript_Params
{
};

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BuffTickClient
struct ABuff_GatherMission_GatherNodes_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.ExecuteUbergraph_Buff_GatherMission_GatherNodes
struct ABuff_GatherMission_GatherNodes_C_ExecuteUbergraph_Buff_GatherMission_GatherNodes_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
