// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GetRandomPointOnGround_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GetRandomPointOnGround.GetRandomPointOnGround_C.ReceiveExecute
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomPointOnGround_C::STATIC_ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomPointOnGround.GetRandomPointOnGround_C.ReceiveExecute");

	UGetRandomPointOnGround_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetRandomPointOnGround.GetRandomPointOnGround_C.ExecuteUbergraph_GetRandomPointOnGround
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomPointOnGround_C::ExecuteUbergraph_GetRandomPointOnGround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomPointOnGround.GetRandomPointOnGround_C.ExecuteUbergraph_GetRandomPointOnGround");

	UGetRandomPointOnGround_C_ExecuteUbergraph_GetRandomPointOnGround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
