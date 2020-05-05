// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerShockedByEelBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ShockShake
// ()

void ABuff_PlayerShockedByEelBoss_C::ShockShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ShockShake");

	ABuff_PlayerShockedByEelBoss_C_ShockShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerShockedByEelBoss_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.BuffTickClient");

	ABuff_PlayerShockedByEelBoss_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.UserConstructionScript
// ()

void ABuff_PlayerShockedByEelBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.UserConstructionScript");

	ABuff_PlayerShockedByEelBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ReceiveBeginPlay
// ()

void ABuff_PlayerShockedByEelBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ReceiveBeginPlay");

	ABuff_PlayerShockedByEelBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ExecuteUbergraph_Buff_PlayerShockedByEelBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerShockedByEelBoss_C::ExecuteUbergraph_Buff_PlayerShockedByEelBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ExecuteUbergraph_Buff_PlayerShockedByEelBoss");

	ABuff_PlayerShockedByEelBoss_C_ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
