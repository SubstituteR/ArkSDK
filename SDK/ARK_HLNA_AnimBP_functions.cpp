// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HLNA_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent
// ()
// Parameters:
// class UAnimMontage**           AnimationMontage               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent");

	UHLNA_AnimBP_C_BlueprintPlayAnimationEvent_Params params;
	params.AnimationMontage = AnimationMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_335_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_336_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_864_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_462_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5358_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation");

	UHLNA_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::ExecuteUbergraph_HLNA_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP");

	UHLNA_AnimBP_C_ExecuteUbergraph_HLNA_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
