#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Deco_CheckDistanceFromFollowTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ReceiveConditionCheck
struct UDeco_CheckDistanceFromFollowTarget_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget
struct UDeco_CheckDistanceFromFollowTarget_C_ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
