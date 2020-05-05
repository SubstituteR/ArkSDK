// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTD_IsTooFarFromTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_IsTooFarFromTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ReceiveConditionCheck");

	UBTD_IsTooFarFromTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ExecuteUbergraph_BTD_IsTooFarFromTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_IsTooFarFromTarget_C::ExecuteUbergraph_BTD_IsTooFarFromTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ExecuteUbergraph_BTD_IsTooFarFromTarget");

	UBTD_IsTooFarFromTarget_C_ExecuteUbergraph_BTD_IsTooFarFromTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
