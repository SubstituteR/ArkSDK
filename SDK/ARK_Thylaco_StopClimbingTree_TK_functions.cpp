// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Thylaco_StopClimbingTree_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylaco_StopClimbingTree_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ReceiveExecute");

	UThylaco_StopClimbingTree_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ExecuteUbergraph_Thylaco_StopClimbingTree_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylaco_StopClimbingTree_TK_C::ExecuteUbergraph_Thylaco_StopClimbingTree_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C.ExecuteUbergraph_Thylaco_StopClimbingTree_TK");

	UThylaco_StopClimbingTree_TK_C_ExecuteUbergraph_Thylaco_StopClimbingTree_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
