#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HLNA_AnimBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent
struct UHLNA_AnimBP_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358
struct UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358_Params
{
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation
struct UHLNA_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP
struct UHLNA_AnimBP_C_ExecuteUbergraph_HLNA_AnimBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
