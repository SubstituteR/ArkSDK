// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Tek_Shield_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2156
// ()

void UTek_Shield_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2156()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2156");

	UTek_Shield_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2156_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UTek_Shield_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");

	UTek_Shield_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTek_Shield_RIG_AnimBlueprint_C::ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_Shield_RIG_AnimBlueprint.Tek_Shield_RIG_AnimBlueprint_C.ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint");

	UTek_Shield_RIG_AnimBlueprint_C_ExecuteUbergraph_Tek_Shield_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
