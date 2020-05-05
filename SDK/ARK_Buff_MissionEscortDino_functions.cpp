// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MissionEscortDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_MissionEscortDino_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffAdjustDamage");

	ABuff_MissionEscortDino_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPClientDoMultiUse");

	ABuff_MissionEscortDino_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MissionEscortDino_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPTryMultiUse");

	ABuff_MissionEscortDino_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPGetMultiUseEntries
// (NetRequest, Native, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_MissionEscortDino_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BPGetMultiUseEntries");

	ABuff_MissionEscortDino_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.UserConstructionScript
// ()

void ABuff_MissionEscortDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.UserConstructionScript");

	ABuff_MissionEscortDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.BuffTickServer");

	ABuff_MissionEscortDino_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchToGoal
// ()

void ABuff_MissionEscortDino_C::DelayedAddLaunchToGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchToGoal");

	ABuff_MissionEscortDino_C_DelayedAddLaunchToGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.LaunchCharWithVFX
// ()
// Parameters:
// struct FRotator                LaunchDirection                (Parm, ZeroConstructor, IsPlainOldData)
// float                          LaunchMagnitude                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_C::LaunchCharWithVFX(const struct FRotator& LaunchDirection, float LaunchMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.LaunchCharWithVFX");

	ABuff_MissionEscortDino_C_LaunchCharWithVFX_Params params;
	params.LaunchDirection = LaunchDirection;
	params.LaunchMagnitude = LaunchMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveBeginPlay
// ()

void ABuff_MissionEscortDino_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveBeginPlay");

	ABuff_MissionEscortDino_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchForward
// ()

void ABuff_MissionEscortDino_C::DelayedAddLaunchForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchForward");

	ABuff_MissionEscortDino_C_DelayedAddLaunchForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchBackward
// ()

void ABuff_MissionEscortDino_C::DelayedAddLaunchBackward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.DelayedAddLaunchBackward");

	ABuff_MissionEscortDino_C_DelayedAddLaunchBackward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.MultiSpawnOrRemoveFX
// ()
// Parameters:
// bool                           bIsForSpawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_C::MultiSpawnOrRemoveFX(bool bIsForSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.MultiSpawnOrRemoveFX");

	ABuff_MissionEscortDino_C_MultiSpawnOrRemoveFX_Params params;
	params.bIsForSpawn = bIsForSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveDestroyed
// ()

void ABuff_MissionEscortDino_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ReceiveDestroyed");

	ABuff_MissionEscortDino_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ExecuteUbergraph_Buff_MissionEscortDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_C::ExecuteUbergraph_Buff_MissionEscortDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino.Buff_MissionEscortDino_C.ExecuteUbergraph_Buff_MissionEscortDino");

	ABuff_MissionEscortDino_C_ExecuteUbergraph_Buff_MissionEscortDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
