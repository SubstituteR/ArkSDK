// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DissolvePawn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.InitDeactivationTime
// ()

void ABuff_DissolvePawn_C::InitDeactivationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DissolvePawn.Buff_DissolvePawn_C.InitDeactivationTime");

	ABuff_DissolvePawn_C_InitDeactivationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DissolvePawn.Buff_DissolvePawn_C.ReceiveBeginPlay
// ()

void ABuff_DissolvePawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DissolvePawn.Buff_DissolvePawn_C.ReceiveBeginPlay");

	ABuff_DissolvePawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DissolvePawn.Buff_DissolvePawn_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DissolvePawn_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DissolvePawn.Buff_DissolvePawn_C.BuffTickClient");

	ABuff_DissolvePawn_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DissolvePawn.Buff_DissolvePawn_C.UserConstructionScript
// ()

void ABuff_DissolvePawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DissolvePawn.Buff_DissolvePawn_C.UserConstructionScript");

	ABuff_DissolvePawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DissolvePawn.Buff_DissolvePawn_C.ExecuteUbergraph_Buff_DissolvePawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DissolvePawn_C::ExecuteUbergraph_Buff_DissolvePawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DissolvePawn.Buff_DissolvePawn_C.ExecuteUbergraph_Buff_DissolvePawn");

	ABuff_DissolvePawn_C_ExecuteUbergraph_Buff_DissolvePawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
