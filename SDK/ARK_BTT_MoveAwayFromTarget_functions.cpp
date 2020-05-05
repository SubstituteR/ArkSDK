// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_MoveAwayFromTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAwayFromTarget_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveAbort");

	UBTT_MoveAwayFromTarget_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAwayFromTarget_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveTick");

	UBTT_MoveAwayFromTarget_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAwayFromTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveExecute");

	UBTT_MoveAwayFromTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ExecuteUbergraph_BTT_MoveAwayFromTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAwayFromTarget_C::ExecuteUbergraph_BTT_MoveAwayFromTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ExecuteUbergraph_BTT_MoveAwayFromTarget");

	UBTT_MoveAwayFromTarget_C_ExecuteUbergraph_BTT_MoveAwayFromTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
