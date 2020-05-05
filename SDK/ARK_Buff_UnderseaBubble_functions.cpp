// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_UnderseaBubble_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderseaBubble_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.BuffTickServer");

	ABuff_UnderseaBubble_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.UserConstructionScript
// ()

void ABuff_UnderseaBubble_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.UserConstructionScript");

	ABuff_UnderseaBubble_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveBeginPlay
// ()

void ABuff_UnderseaBubble_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveBeginPlay");

	ABuff_UnderseaBubble_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderseaBubble_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ReceiveActorBeginOverlap");

	ABuff_UnderseaBubble_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ExecuteUbergraph_Buff_UnderseaBubble
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderseaBubble_C::ExecuteUbergraph_Buff_UnderseaBubble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderseaBubble.Buff_UnderseaBubble_C.ExecuteUbergraph_Buff_UnderseaBubble");

	ABuff_UnderseaBubble_C_ExecuteUbergraph_Buff_UnderseaBubble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
