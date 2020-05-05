// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTD_IsTooCloseToTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_IsTooCloseToTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ReceiveConditionCheck");

	UBTD_IsTooCloseToTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ExecuteUbergraph_BTD_IsTooCloseToTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_IsTooCloseToTarget_C::ExecuteUbergraph_BTD_IsTooCloseToTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ExecuteUbergraph_BTD_IsTooCloseToTarget");

	UBTD_IsTooCloseToTarget_C_ExecuteUbergraph_BTD_IsTooCloseToTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
