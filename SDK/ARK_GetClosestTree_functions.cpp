// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GetClosestTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GetClosestTree.GetClosestTree_C.GetClosestTree
// (NetReliable, NetRequest, Exec, Native, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowPrev                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    treeComp                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGetClosestTree_C::GetClosestTree(class AActor* OwnerActor, bool AllowPrev, int* ItemIndex, class UStaticMeshComponent** treeComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.GetClosestTree");

	UGetClosestTree_C_GetClosestTree_Params params;
	params.OwnerActor = OwnerActor;
	params.AllowPrev = AllowPrev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
	if (treeComp != nullptr)
		*treeComp = params.treeComp;
}


// Function GetClosestTree.GetClosestTree_C.GetPointOnTreeSurface
// (NetReliable, Static, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     treeComp                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 origPoint                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGetClosestTree_C::STATIC_GetPointOnTreeSurface(class UPrimitiveComponent* treeComp, const struct FVector& origPoint, int ItemIndex, class AActor* OwnerActor, struct FVector* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.GetPointOnTreeSurface");

	UGetClosestTree_C_GetPointOnTreeSurface_Params params;
	params.treeComp = treeComp;
	params.origPoint = origPoint;
	params.ItemIndex = ItemIndex;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function GetClosestTree.GetClosestTree_C.ReceiveExecute
// (NetRequest, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetClosestTree_C::STATIC_ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.ReceiveExecute");

	UGetClosestTree_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetClosestTree.GetClosestTree_C.ExecuteUbergraph_GetClosestTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetClosestTree_C::ExecuteUbergraph_GetClosestTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.ExecuteUbergraph_GetClosestTree");

	UGetClosestTree_C_ExecuteUbergraph_GetClosestTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
