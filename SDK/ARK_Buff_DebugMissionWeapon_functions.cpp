// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_DebugMissionWeapon_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BPGetHUDElements");

	ABuff_DebugMissionWeapon_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.UserConstructionScript
// ()

void ABuff_DebugMissionWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.UserConstructionScript");

	ABuff_DebugMissionWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.InpActEvt_F10_K2Node_InputKeyEvent_64
// ()

void ABuff_DebugMissionWeapon_C::InpActEvt_F10_K2Node_InputKeyEvent_64()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.InpActEvt_F10_K2Node_InputKeyEvent_64");

	ABuff_DebugMissionWeapon_C_InpActEvt_F10_K2Node_InputKeyEvent_64_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickClient");

	ABuff_DebugMissionWeapon_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ReceiveBeginPlay
// ()

void ABuff_DebugMissionWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ReceiveBeginPlay");

	ABuff_DebugMissionWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickServer");

	ABuff_DebugMissionWeapon_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ExecuteUbergraph_Buff_DebugMissionWeapon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_C::ExecuteUbergraph_Buff_DebugMissionWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ExecuteUbergraph_Buff_DebugMissionWeapon");

	ABuff_DebugMissionWeapon_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
