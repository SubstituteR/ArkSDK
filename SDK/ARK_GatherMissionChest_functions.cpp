// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GatherMissionChest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GatherMissionChest.GatherMissionChest_C.Is Player On Mission
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsOnMission                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGatherMissionChest_C::Is_Player_On_Mission(class AShooterPlayerController* PC, bool* bIsOnMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.Is Player On Mission");

	AGatherMissionChest_C_Is_Player_On_Mission_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsOnMission != nullptr)
		*bIsOnMission = params.bIsOnMission;
}


// Function GatherMissionChest.GatherMissionChest_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGatherMissionChest_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.BPClientDoMultiUse");

	AGatherMissionChest_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.BPGetMultiUseEntries
// (NetReliable, Exec, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AGatherMissionChest_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.BPGetMultiUseEntries");

	AGatherMissionChest_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function GatherMissionChest.GatherMissionChest_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGatherMissionChest_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.BPTryMultiUse");

	AGatherMissionChest_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GatherMissionChest.GatherMissionChest_C.Initialize
// ()
// Parameters:
// class UClass*                  MissionTypeClass               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionBuff                    (Parm, ZeroConstructor, IsPlainOldData)

void AGatherMissionChest_C::Initialize(class UClass* MissionTypeClass, class UClass* MissionBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.Initialize");

	AGatherMissionChest_C_Initialize_Params params;
	params.MissionTypeClass = MissionTypeClass;
	params.MissionBuff = MissionBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.UserConstructionScript
// ()

void AGatherMissionChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.UserConstructionScript");

	AGatherMissionChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.GoDown__FinishedFunc
// ()

void AGatherMissionChest_C::GoDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.GoDown__FinishedFunc");

	AGatherMissionChest_C_GoDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.GoDown__UpdateFunc
// ()

void AGatherMissionChest_C::GoDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.GoDown__UpdateFunc");

	AGatherMissionChest_C_GoDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.Timeline_0__FinishedFunc
// ()

void AGatherMissionChest_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.Timeline_0__FinishedFunc");

	AGatherMissionChest_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.Timeline_0__UpdateFunc
// ()

void AGatherMissionChest_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.Timeline_0__UpdateFunc");

	AGatherMissionChest_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.ReceiveBeginPlay
// ()

void AGatherMissionChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.ReceiveBeginPlay");

	AGatherMissionChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.StartToDestroy
// ()

void AGatherMissionChest_C::StartToDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.StartToDestroy");

	AGatherMissionChest_C_StartToDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.ServerStartToRise
// ()

void AGatherMissionChest_C::ServerStartToRise()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.ServerStartToRise");

	AGatherMissionChest_C_ServerStartToRise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.ServerSetSphereRadius
// ()
// Parameters:
// float                          NewSphereRadius                (Parm, ZeroConstructor, IsPlainOldData)

void AGatherMissionChest_C::ServerSetSphereRadius(float NewSphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.ServerSetSphereRadius");

	AGatherMissionChest_C_ServerSetSphereRadius_Params params;
	params.NewSphereRadius = NewSphereRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.StartToDestroyEvent
// ()

void AGatherMissionChest_C::StartToDestroyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.StartToDestroyEvent");

	AGatherMissionChest_C_StartToDestroyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.StartToRise
// ()

void AGatherMissionChest_C::StartToRise()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.StartToRise");

	AGatherMissionChest_C_StartToRise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.CheckForPlayersNearBy
// ()

void AGatherMissionChest_C::CheckForPlayersNearBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.CheckForPlayersNearBy");

	AGatherMissionChest_C_CheckForPlayersNearBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatherMissionChest.GatherMissionChest_C.ExecuteUbergraph_GatherMissionChest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGatherMissionChest_C::ExecuteUbergraph_GatherMissionChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatherMissionChest.GatherMissionChest_C.ExecuteUbergraph_GatherMissionChest");

	AGatherMissionChest_C_ExecuteUbergraph_GatherMissionChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
