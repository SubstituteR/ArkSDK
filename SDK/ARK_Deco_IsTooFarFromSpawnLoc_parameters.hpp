#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Deco_IsTooFarFromSpawnLoc_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ReceiveConditionCheck
struct UDeco_IsTooFarFromSpawnLoc_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc
struct UDeco_IsTooFarFromSpawnLoc_C_ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
