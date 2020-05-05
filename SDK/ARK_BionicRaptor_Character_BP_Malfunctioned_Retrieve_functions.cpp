// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_Malfunctioned_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.BlueprintCanAttack");

	ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript
// ()

void ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript");

	ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C::ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Retrieve");

	ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C_ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
