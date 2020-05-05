#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bot_AIController_BP.Bot_AIController_BP_C.BPGetTargetingDesire
struct ABot_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bot_AIController_BP.Bot_AIController_BP_C.UserConstructionScript
struct ABot_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Bot_AIController_BP.Bot_AIController_BP_C.ReceiveBeginPlay
struct ABot_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Bot_AIController_BP.Bot_AIController_BP_C.ExecuteUbergraph_Bot_AIController_BP
struct ABot_AIController_BP_C_ExecuteUbergraph_Bot_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
