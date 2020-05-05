#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_UnderseaBubble_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.BuffTickServer
struct ABuff_UnderseaBubble_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.UserConstructionScript
struct ABuff_UnderseaBubble_C_UserConstructionScript_Params
{
};

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveBeginPlay
struct ABuff_UnderseaBubble_C_ReceiveBeginPlay_Params
{
};

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveActorBeginOverlap
struct ABuff_UnderseaBubble_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ExecuteUbergraph_Buff_UnderseaBubble
struct ABuff_UnderseaBubble_C_ExecuteUbergraph_Buff_UnderseaBubble_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
