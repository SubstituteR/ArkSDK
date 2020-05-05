// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoBlueprintBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintPlayAnimationEvent
// ()
// Parameters:
// class UAnimMontage**           AnimationMontage               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoBlueprintBase_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintPlayAnimationEvent");

	UDinoBlueprintBase_C_BlueprintPlayAnimationEvent_Params params;
	params.AnimationMontage = AnimationMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3504
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3504()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3504");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3504_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4403
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4403()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4403");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4403_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_690
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_690()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_690");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_690_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3503
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3503()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3503");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3503_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_210
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_210()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_210");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_210_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3502
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3502()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3502");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3502_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3501
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3501()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3501");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3501_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3500
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3500()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3500");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3500_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4402
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4402()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4402");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4402_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4401
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4401()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4401");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4401_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3499
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3499()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3499");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3499_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3498
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3498()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3498");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3498_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4398
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4398()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4398");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4398_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4397
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4397()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4397");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4397_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3497
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3497()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3497");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3497_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3496
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3496()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3496");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3496_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4396
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4396()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4396");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4396_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4395
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4395()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4395");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_4395_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3495
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3495()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3495");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3495_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3494
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3494()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3494");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3494_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3493
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3493()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3493");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3493_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_689
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_689()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_689");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_689_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_294
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_294()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_294");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_294_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3492
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3492()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3492");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3492_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3491
// ()

void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3491()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3491");

	UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3491_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoBlueprintBase_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintUpdateAnimation");

	UDinoBlueprintBase_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoBlueprintBase.DinoBlueprintBase_C.ExecuteUbergraph_DinoBlueprintBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoBlueprintBase_C::ExecuteUbergraph_DinoBlueprintBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.ExecuteUbergraph_DinoBlueprintBase");

	UDinoBlueprintBase_C_ExecuteUbergraph_DinoBlueprintBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
