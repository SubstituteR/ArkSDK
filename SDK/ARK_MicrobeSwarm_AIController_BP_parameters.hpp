#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarm_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.BPGetTargetingDesire
struct AMicrobeSwarm_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.SearchForPoop
struct AMicrobeSwarm_AIController_BP_C_SearchForPoop_Params
{
};

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.IsDroppedItemPoop
struct AMicrobeSwarm_AIController_BP_C_IsDroppedItemPoop_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.UserConstructionScript
struct AMicrobeSwarm_AIController_BP_C_UserConstructionScript_Params
{
};

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ReceiveTick
struct AMicrobeSwarm_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP
struct AMicrobeSwarm_AIController_BP_C_ExecuteUbergraph_MicrobeSwarm_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
