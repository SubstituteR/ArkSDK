// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerInCyclone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPSetupForInstigator");

	ABuff_PlayerInCyclone_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.GetTangentDirection
// ()
// Parameters:
// struct FVector                 TangentDirection               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::GetTangentDirection(struct FVector* TangentDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.GetTangentDirection");

	ABuff_PlayerInCyclone_C_GetTangentDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TangentDirection != nullptr)
		*TangentDirection = params.TangentDirection;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UpdateInstigatorState
// ()

void ABuff_PlayerInCyclone_C::UpdateInstigatorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UpdateInstigatorState");

	ABuff_PlayerInCyclone_C_UpdateInstigatorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveForwardInput
// ()
// Parameters:
// float*                         CurrentInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PlayerInCyclone_C::BP_OverrideMoveForwardInput(float* CurrentInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveForwardInput");

	ABuff_PlayerInCyclone_C_BP_OverrideMoveForwardInput_Params params;
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveRightInput
// ()
// Parameters:
// float*                         CurrentInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PlayerInCyclone_C::BP_OverrideMoveRightInput(float* CurrentInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveRightInput");

	ABuff_PlayerInCyclone_C_BP_OverrideMoveRightInput_Params params;
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnMovement Input
// ()
// Parameters:
// bool                           MoveForward                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          val                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::OnMovement_Input(bool MoveForward, float val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnMovement Input");

	ABuff_PlayerInCyclone_C_OnMovement_Input_Params params;
	params.MoveForward = MoveForward;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnRep_InputCount
// ()

void ABuff_PlayerInCyclone_C::OnRep_InputCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnRep_InputCount");

	ABuff_PlayerInCyclone_C_OnRep_InputCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_PlayerInCyclone_C::BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterFlyingVelocity");

	ABuff_PlayerInCyclone_C_BP_OverrideCharacterFlyingVelocity_Params params;
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


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OverrideVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::OverrideVelocity(const struct FVector& InVelocity, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OverrideVelocity");

	ABuff_PlayerInCyclone_C_OverrideVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPDeactivated");

	ABuff_PlayerInCyclone_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPBPGetCameraShakeScalar
// ()
// Parameters:
// class UClass**                 currentShake                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PlayerInCyclone_C::BPBPGetCameraShakeScalar(class UClass** currentShake, float* currentScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPBPGetCameraShakeScalar");

	ABuff_PlayerInCyclone_C_BPBPGetCameraShakeScalar_Params params;
	params.currentShake = currentShake;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PlayerInCyclone_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPCheckPreventInput");

	ABuff_PlayerInCyclone_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickServer");

	ABuff_PlayerInCyclone_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterSwimmingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FluidFriction                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NetBuoyancy                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_PlayerInCyclone_C::BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterSwimmingVelocity");

	ABuff_PlayerInCyclone_C_BP_OverrideCharacterSwimmingVelocity_Params params;
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


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickClient");

	ABuff_PlayerInCyclone_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UserConstructionScript
// ()

void ABuff_PlayerInCyclone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UserConstructionScript");

	ABuff_PlayerInCyclone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.Multi on Input
// ()
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::Multi_on_Input(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.Multi on Input");

	ABuff_PlayerInCyclone_C_Multi_on_Input_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.ExecuteUbergraph_Buff_PlayerInCyclone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerInCyclone_C::ExecuteUbergraph_Buff_PlayerInCyclone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.ExecuteUbergraph_Buff_PlayerInCyclone");

	ABuff_PlayerInCyclone_C_ExecuteUbergraph_Buff_PlayerInCyclone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
