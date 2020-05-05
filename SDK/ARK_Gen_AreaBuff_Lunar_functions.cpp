// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPServerHandleNetExecCommand");

	AGen_AreaBuff_Lunar_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckIsInShadow_Client
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 InLightVector                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InShadow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::STATIC_CheckIsInShadow_Client(const struct FVector& InLightVector, bool* InShadow, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckIsInShadow_Client");

	AGen_AreaBuff_Lunar_C_CheckIsInShadow_Client_Params params;
	params.InLightVector = InLightVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InShadow != nullptr)
		*InShadow = params.InShadow;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckClientResponse
// ()
// Parameters:
// struct FVector                 ServerLightVector              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SemiCheckedClientInShadow      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::CheckClientResponse(const struct FVector& ServerLightVector, bool* SemiCheckedClientInShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckClientResponse");

	AGen_AreaBuff_Lunar_C_CheckClientResponse_Params params;
	params.ServerLightVector = ServerLightVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SemiCheckedClientInShadow != nullptr)
		*SemiCheckedClientInShadow = params.SemiCheckedClientInShadow;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BP_OverrideTerminalVelocity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::BP_OverrideTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BP_OverrideTerminalVelocity");

	AGen_AreaBuff_Lunar_C_BP_OverrideTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsSpinAllowed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::IsSpinAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsSpinAllowed");

	AGen_AreaBuff_Lunar_C_IsSpinAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.AutomaticRotationCorrection
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::AutomaticRotationCorrection(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.AutomaticRotationCorrection");

	AGen_AreaBuff_Lunar_C_AutomaticRotationCorrection_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventCharacterLanding
// ()
// Parameters:
// struct FVector*                ImpactPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ImpactAccel                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::BPPreventCharacterLanding(struct FVector* ImpactPoint, struct FVector* ImpactAccel, struct FVector* ImpactVelocity, struct FVector* NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventCharacterLanding");

	AGen_AreaBuff_Lunar_C_BPPreventCharacterLanding_Params params;
	params.ImpactPoint = ImpactPoint;
	params.ImpactAccel = ImpactAccel;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewVelocity != nullptr)
		*NewVelocity = params.NewVelocity;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetOverrideWaterJumpVelocity
// ()
// Parameters:
// float*                         OutOfWaterZ                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::GetOverrideWaterJumpVelocity(float* OutOfWaterZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetOverrideWaterJumpVelocity");

	AGen_AreaBuff_Lunar_C_GetOverrideWaterJumpVelocity_Params params;
	params.OutOfWaterZ = OutOfWaterZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFlying
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::UpdateClientFlying(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFlying");

	AGen_AreaBuff_Lunar_C_UpdateClientFlying_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleFootsteps
// ()

void AGen_AreaBuff_Lunar_C::HandleFootsteps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleFootsteps");

	AGen_AreaBuff_Lunar_C_HandleFootsteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsWalking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::IsWalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsWalking");

	AGen_AreaBuff_Lunar_C_IsWalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMeshOffset
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::UpdatePlayerMeshOffset(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMeshOffset");

	AGen_AreaBuff_Lunar_C_UpdatePlayerMeshOffset_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetMoveAnimRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::BPGetMoveAnimRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetMoveAnimRate");

	AGen_AreaBuff_Lunar_C_BPGetMoveAnimRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetFallRotationMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::GetFallRotationMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetFallRotationMultiplier");

	AGen_AreaBuff_Lunar_C_GetFallRotationMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetBuffDescription
// ()
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription AGen_AreaBuff_Lunar_C::GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetBuffDescription");

	AGen_AreaBuff_Lunar_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPCustomAllowAddBuff");

	AGen_AreaBuff_Lunar_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetGravityZScale
// ()
// Parameters:
// float*                         currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::BPGetGravityZScale(float* currentScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetGravityZScale");

	AGen_AreaBuff_Lunar_C_BPGetGravityZScale_Params params;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampRotation
// ()
// Parameters:
// float                          AngleDegrees                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::ClampRotation(float AngleDegrees, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampRotation");

	AGen_AreaBuff_Lunar_C_ClampRotation_Params params;
	params.AngleDegrees = AngleDegrees;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetMaxRotation
// ()
// Parameters:
// float                          MaximumPitchRollAngle          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::GetMaxRotation(float* MaximumPitchRollAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetMaxRotation");

	AGen_AreaBuff_Lunar_C_GetMaxRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaximumPitchRollAngle != nullptr)
		*MaximumPitchRollAngle = params.MaximumPitchRollAngle;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.SetTekSuitState
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::SetTekSuitState(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.SetTekSuitState");

	AGen_AreaBuff_Lunar_C_SetTekSuitState_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPBPGetCameraShakeScalar
// ()
// Parameters:
// class UClass**                 currentShake                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen_AreaBuff_Lunar_C::BPBPGetCameraShakeScalar(class UClass** currentShake, float* currentScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPBPGetCameraShakeScalar");

	AGen_AreaBuff_Lunar_C_BPBPGetCameraShakeScalar_Params params;
	params.currentShake = currentShake;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampInputValue
// ()
// Parameters:
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutputValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::ClampInputValue(float MaxValue, float CurrentValue, float* OutputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampInputValue");

	AGen_AreaBuff_Lunar_C_ClampInputValue_Params params;
	params.MaxValue = MaxValue;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputValue != nullptr)
		*OutputValue = params.OutputValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleWeaponFired
// ()
// Parameters:
// class AShooterWeapon*          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::HandleWeaponFired(class AShooterWeapon* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleWeaponFired");

	AGen_AreaBuff_Lunar_C_HandleWeaponFired_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateFallingCorrection
// ()

void AGen_AreaBuff_Lunar_C::UpdateFallingCorrection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateFallingCorrection");

	AGen_AreaBuff_Lunar_C_UpdateFallingCorrection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFallingRotation
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::UpdateClientFallingRotation(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFallingRotation");

	AGen_AreaBuff_Lunar_C_UpdateClientFallingRotation_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.OverrideFallRotationSettings
// (Exec, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::OverrideFallRotationSettings(bool InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.OverrideFallRotationSettings");

	AGen_AreaBuff_Lunar_C_OverrideFallRotationSettings_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Update Player Movement Client
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::Update_Player_Movement_Client(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Update Player Movement Client");

	AGen_AreaBuff_Lunar_C_Update_Player_Movement_Client_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMovement_Server
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::UpdatePlayerMovement_Server(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMovement_Server");

	AGen_AreaBuff_Lunar_C_UpdatePlayerMovement_Server_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickClient");

	AGen_AreaBuff_Lunar_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPDeactivated");

	AGen_AreaBuff_Lunar_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPSetupForInstigator");

	AGen_AreaBuff_Lunar_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Lunar_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventAddingOtherBuff");

	AGen_AreaBuff_Lunar_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickServer");

	AGen_AreaBuff_Lunar_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Check IsIn Shadow
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLightVector                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InShadow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::STATIC_Check_IsIn_Shadow(const struct FVector& InLightVector, bool* InShadow, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Check IsIn Shadow");

	AGen_AreaBuff_Lunar_C_Check_IsIn_Shadow_Params params;
	params.InLightVector = InLightVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InShadow != nullptr)
		*InShadow = params.InShadow;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UserConstructionScript
// ()

void AGen_AreaBuff_Lunar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UserConstructionScript");

	AGen_AreaBuff_Lunar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BindPlayerEvents
// ()

void AGen_AreaBuff_Lunar_C::BindPlayerEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BindPlayerEvents");

	AGen_AreaBuff_Lunar_C_BindPlayerEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.NotifyWeaponFired_Event
// ()
// Parameters:
// class AShooterWeapon*          weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::NotifyWeaponFired_Event(class AShooterWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.NotifyWeaponFired_Event");

	AGen_AreaBuff_Lunar_C_NotifyWeaponFired_Event_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ServerWeaponFired
// ()
// Parameters:
// struct FVector                 RecoilDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          FiredWeapon                    (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::ServerWeaponFired(const struct FVector& RecoilDir, class AShooterWeapon* FiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ServerWeaponFired");

	AGen_AreaBuff_Lunar_C_ServerWeaponFired_Params params;
	params.RecoilDir = RecoilDir;
	params.FiredWeapon = FiredWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadow
// ()

void AGen_AreaBuff_Lunar_C::ClientCheckShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadow");

	AGen_AreaBuff_Lunar_C_ClientCheckShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadowResponse
// ()
// Parameters:
// bool                           ClientAssumesShadow            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::ClientCheckShadowResponse(bool ClientAssumesShadow, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadowResponse");

	AGen_AreaBuff_Lunar_C_ClientCheckShadowResponse_Params params;
	params.ClientAssumesShadow = ClientAssumesShadow;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ExecuteUbergraph_Gen_AreaBuff_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Lunar_C::ExecuteUbergraph_Gen_AreaBuff_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ExecuteUbergraph_Gen_AreaBuff_Lunar");

	AGen_AreaBuff_Lunar_C_ExecuteUbergraph_Gen_AreaBuff_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
