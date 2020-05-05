#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChupacabraPackLeader_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.SetAlphaProperties
struct ABuff_ChupacabraPackLeader_C_SetAlphaProperties_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.BPDeactivated
struct ABuff_ChupacabraPackLeader_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.ReceiveDestroyed
struct ABuff_ChupacabraPackLeader_C_ReceiveDestroyed_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.BPSetupForInstigator
struct ABuff_ChupacabraPackLeader_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.UserConstructionScript
struct ABuff_ChupacabraPackLeader_C_UserConstructionScript_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.IncreaseSizeTimeline__FinishedFunc
struct ABuff_ChupacabraPackLeader_C_IncreaseSizeTimeline__FinishedFunc_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.IncreaseSizeTimeline__UpdateFunc
struct ABuff_ChupacabraPackLeader_C_IncreaseSizeTimeline__UpdateFunc_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.ReduceSizeTimeline__FinishedFunc
struct ABuff_ChupacabraPackLeader_C_ReduceSizeTimeline__FinishedFunc_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.ReduceSizeTimeline__UpdateFunc
struct ABuff_ChupacabraPackLeader_C_ReduceSizeTimeline__UpdateFunc_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.OnBecameAlpha
struct ABuff_ChupacabraPackLeader_C_OnBecameAlpha_Params
{
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.OnBuffDeactivate
struct ABuff_ChupacabraPackLeader_C_OnBuffDeactivate_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.ReceiveBeginPlay
struct ABuff_ChupacabraPackLeader_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ChupacabraPackLeader.Buff_ChupacabraPackLeader_C.ExecuteUbergraph_Buff_ChupacabraPackLeader
struct ABuff_ChupacabraPackLeader_C_ExecuteUbergraph_Buff_ChupacabraPackLeader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
