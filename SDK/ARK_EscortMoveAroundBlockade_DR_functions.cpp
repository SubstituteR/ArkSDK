// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EscortMoveAroundBlockade_DR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionFinish
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UEscortMoveAroundBlockade_DR_C::ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionFinish");

	UEscortMoveAroundBlockade_DR_C_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UEscortMoveAroundBlockade_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveConditionCheck");

	UEscortMoveAroundBlockade_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionStart
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UEscortMoveAroundBlockade_DR_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionStart");

	UEscortMoveAroundBlockade_DR_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ExecuteUbergraph_EscortMoveAroundBlockade_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEscortMoveAroundBlockade_DR_C::ExecuteUbergraph_EscortMoveAroundBlockade_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ExecuteUbergraph_EscortMoveAroundBlockade_DR");

	UEscortMoveAroundBlockade_DR_C_ExecuteUbergraph_EscortMoveAroundBlockade_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
