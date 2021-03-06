// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Tapejara_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider");

	ATapejara_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATapejara_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting");

	ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATapejara_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV");

	ATapejara_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATapejara_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack");

	ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATapejara_Character_BP_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation");

	ATapejara_Character_BP_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed");

	ATapejara_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATapejara_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump");

	ATapejara_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATapejara_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress");

	ATapejara_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
// ()

void ATapejara_Character_BP_C::DisableCameraInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation");

	ATapejara_Character_BP_C_DisableCameraInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
// ()

void ATapejara_Character_BP_C::OnRep_LatchingSurfaceNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal");

	ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
// ()

void ATapejara_Character_BP_C::UpdateLatchedDinoCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera");

	ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::Controller_Follow_ActorRotation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation");

	ATapejara_Character_BP_C_Controller_Follow_ActorRotation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
// (NetReliable, NetRequest, Exec, NetResponse, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void ATapejara_Character_BP_C::ReferenceLatchingObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects");

	ATapejara_Character_BP_C_ReferenceLatchingObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BackwardLatching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Somthing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Hit_Actor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::STATIC_LineTrace(class UMeshComponent* Mesh, const struct FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* Hit_Somthing, struct FVector* Location, struct FVector* Normal, class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace");

	ATapejara_Character_BP_C_LineTrace_Params params;
	params.Mesh = Mesh;
	params.SocketName = SocketName;
	params.Actor = Actor;
	params.Offset = Offset;
	params.BackwardLatching = BackwardLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit_Somthing != nullptr)
		*Hit_Somthing = params.Hit_Somthing;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Hit_Actor != nullptr)
		*Hit_Actor = params.Hit_Actor;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
// ()

void ATapejara_Character_BP_C::InterruptLatching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching");

	ATapejara_Character_BP_C_InterruptLatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::ProcessLatching(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching");

	ATapejara_Character_BP_C_ProcessLatching_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::TryLatch(const struct FVector& Offset, bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch");

	ATapejara_Character_BP_C_TryLatch_Params params;
	params.Offset = Offset;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript
// ()

void ATapejara_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript");

	ATapejara_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_158
// ()

void ATapejara_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_158()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_158");

	ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_158_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_157
// ()

void ATapejara_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_157()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_157");

	ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_157_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_156
// ()

void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_156()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_156");

	ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_156_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_155
// ()

void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_155()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_155");

	ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_155_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
// ()
// Parameters:
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::Latch(bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch");

	ATapejara_Character_BP_C_Latch_Params params;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick");

	ATapejara_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
// ()

void ATapejara_Character_BP_C::LatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation");

	ATapejara_Character_BP_C_LatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
// ()
// Parameters:
// bool                           LatchingInterrupted            (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::UnLatch(bool LatchingInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch");

	ATapejara_Character_BP_C_UnLatch_Params params;
	params.LatchingInterrupted = LatchingInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
// ()

void ATapejara_Character_BP_C::UnLatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation");

	ATapejara_Character_BP_C_UnLatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::MoveToUsingDirection(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection");

	ATapejara_Character_BP_C_MoveToUsingDirection_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
// ()

void ATapejara_Character_BP_C::UnLatchMoveAndRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate");

	ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
// ()

void ATapejara_Character_BP_C::LatchingStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent");

	ATapejara_Character_BP_C_LatchingStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
// ()

void ATapejara_Character_BP_C::LatchingEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent");

	ATapejara_Character_BP_C_LatchingEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::StopMovement(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement");

	ATapejara_Character_BP_C_StopMovement_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
// ()

void ATapejara_Character_BP_C::DisableFaceLatchingObjectRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation");

	ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");

	ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera");

	ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject");

	ATapejara_Character_BP_C_LocalFaceLatchingObject_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
// ()

void ATapejara_Character_BP_C::StartedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump");

	ATapejara_Character_BP_C_StartedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATapejara_Character_BP_C::ExecuteUbergraph_Tapejara_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP");

	ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
