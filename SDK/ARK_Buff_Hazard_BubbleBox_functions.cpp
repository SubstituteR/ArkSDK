// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Hazard_BubbleBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Hazard_BubbleBox_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveEndPlay");

	ABuff_Hazard_BubbleBox_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveDestroyed
// ()

void ABuff_Hazard_BubbleBox_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveDestroyed");

	ABuff_Hazard_BubbleBox_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Hazard_BubbleBox_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickClient");

	ABuff_Hazard_BubbleBox_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickServer
// (NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Hazard_BubbleBox_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.BuffTickServer");

	ABuff_Hazard_BubbleBox_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.UserConstructionScript
// ()

void ABuff_Hazard_BubbleBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.UserConstructionScript");

	ABuff_Hazard_BubbleBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveBeginPlay
// ()

void ABuff_Hazard_BubbleBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ReceiveBeginPlay");

	ABuff_Hazard_BubbleBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ExecuteUbergraph_Buff_Hazard_BubbleBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Hazard_BubbleBox_C::ExecuteUbergraph_Buff_Hazard_BubbleBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hazard_BubbleBox.Buff_Hazard_BubbleBox_C.ExecuteUbergraph_Buff_Hazard_BubbleBox");

	ABuff_Hazard_BubbleBox_C_ExecuteUbergraph_Buff_Hazard_BubbleBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
