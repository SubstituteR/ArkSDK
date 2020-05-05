// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.SpawnItemOrDino
// ()

void APrimalStructure_GiveRetrieveItem_C::SpawnItemOrDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.SpawnItemOrDino");

	APrimalStructure_GiveRetrieveItem_C_SpawnItemOrDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOverrideUILocation
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalStructure_GiveRetrieveItem_C::BPOverrideUILocation(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOverrideUILocation");

	APrimalStructure_GiveRetrieveItem_C_BPOverrideUILocation_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ReceiveDestroyed
// ()

void APrimalStructure_GiveRetrieveItem_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ReceiveDestroyed");

	APrimalStructure_GiveRetrieveItem_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPOnDemolish");

	APrimalStructure_GiveRetrieveItem_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_GiveRetrieveItem_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPTryMultiUse");

	APrimalStructure_GiveRetrieveItem_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APrimalStructure_GiveRetrieveItem_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.BPGetMultiUseEntries");

	APrimalStructure_GiveRetrieveItem_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.UserConstructionScript
// ()

void APrimalStructure_GiveRetrieveItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.UserConstructionScript");

	APrimalStructure_GiveRetrieveItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_C::ExecuteUbergraph_PrimalStructure_GiveRetrieveItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem");

	APrimalStructure_GiveRetrieveItem_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
