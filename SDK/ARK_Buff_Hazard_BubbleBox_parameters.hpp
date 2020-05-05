#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Hazard_BubbleBox_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveEndPlay
struct ABuff_Hazard_BubbleBox_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveDestroyed
struct ABuff_Hazard_BubbleBox_C_ReceiveDestroyed_Params
{
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickClient
struct ABuff_Hazard_BubbleBox_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickServer
struct ABuff_Hazard_BubbleBox_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.UserConstructionScript
struct ABuff_Hazard_BubbleBox_C_UserConstructionScript_Params
{
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveBeginPlay
struct ABuff_Hazard_BubbleBox_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ExecuteUbergraph_Buff_Hazard_BubbleBox
struct ABuff_Hazard_BubbleBox_C_ExecuteUbergraph_Buff_Hazard_BubbleBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
