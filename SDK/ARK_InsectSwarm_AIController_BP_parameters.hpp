#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InsectSwarm_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.Destroy Foliage In Radius
struct AInsectSwarm_AIController_BP_C_Destroy_Foliage_In_Radius_Params
{
};

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.BPGetTargetingDesire
struct AInsectSwarm_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ChangedAITarget
struct AInsectSwarm_AIController_BP_C_ChangedAITarget_Params
{
};

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.UserConstructionScript
struct AInsectSwarm_AIController_BP_C_UserConstructionScript_Params
{
};

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ReceiveTick
struct AInsectSwarm_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ExecuteUbergraph_InsectSwarm_AIController_BP
struct AInsectSwarm_AIController_BP_C_ExecuteUbergraph_InsectSwarm_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
