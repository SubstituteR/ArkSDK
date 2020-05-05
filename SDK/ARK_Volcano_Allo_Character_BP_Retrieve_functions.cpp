// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Allo_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVolcano_Allo_Character_BP_Retrieve_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.BlueprintCanAttack");

	AVolcano_Allo_Character_BP_Retrieve_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.UserConstructionScript
// ()

void AVolcano_Allo_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.UserConstructionScript");

	AVolcano_Allo_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Allo_Character_BP_Retrieve_C::ExecuteUbergraph_Volcano_Allo_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Retrieve.Volcano_Allo_Character_BP_Retrieve_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Retrieve");

	AVolcano_Allo_Character_BP_Retrieve_C_ExecuteUbergraph_Volcano_Allo_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
