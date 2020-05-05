// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Raptor_Character_BP_Hunt_Volcanic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARaptor_Character_BP_Hunt_Volcanic_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.BlueprintCanAttack");

	ARaptor_Character_BP_Hunt_Volcanic_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.UserConstructionScript
// ()

void ARaptor_Character_BP_Hunt_Volcanic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.UserConstructionScript");

	ARaptor_Character_BP_Hunt_Volcanic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.ExecuteUbergraph_Raptor_Character_BP_Hunt_Volcanic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_Hunt_Volcanic_C::ExecuteUbergraph_Raptor_Character_BP_Hunt_Volcanic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C.ExecuteUbergraph_Raptor_Character_BP_Hunt_Volcanic");

	ARaptor_Character_BP_Hunt_Volcanic_C_ExecuteUbergraph_Raptor_Character_BP_Hunt_Volcanic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
