// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ThrownAwayFromCyclone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.StopBySomething
// ()

void ABuff_ThrownAwayFromCyclone_C::StopBySomething()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.StopBySomething");

	ABuff_ThrownAwayFromCyclone_C_StopBySomething_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterSwimmingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FluidFriction                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NetBuoyancy                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_ThrownAwayFromCyclone_C::BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterSwimmingVelocity");

	ABuff_ThrownAwayFromCyclone_C_BP_OverrideCharacterSwimmingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (FluidFriction != nullptr)
		*FluidFriction = params.FluidFriction;
	if (NetBuoyancy != nullptr)
		*NetBuoyancy = params.NetBuoyancy;

	return params.ReturnValue;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_ThrownAwayFromCyclone_C::BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterFlyingVelocity");

	ABuff_ThrownAwayFromCyclone_C_BP_OverrideCharacterFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideMoveForwardInput
// ()
// Parameters:
// float*                         CurrentInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_ThrownAwayFromCyclone_C::BP_OverrideMoveForwardInput(float* CurrentInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideMoveForwardInput");

	ABuff_ThrownAwayFromCyclone_C_BP_OverrideMoveForwardInput_Params params;
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ThrownAwayFromCyclone_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BuffTickServer");

	ABuff_ThrownAwayFromCyclone_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.UserConstructionScript
// ()

void ABuff_ThrownAwayFromCyclone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.UserConstructionScript");

	ABuff_ThrownAwayFromCyclone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.ExecuteUbergraph_Buff_ThrownAwayFromCyclone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ThrownAwayFromCyclone_C::ExecuteUbergraph_Buff_ThrownAwayFromCyclone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.ExecuteUbergraph_Buff_ThrownAwayFromCyclone");

	ABuff_ThrownAwayFromCyclone_C_ExecuteUbergraph_Buff_ThrownAwayFromCyclone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
