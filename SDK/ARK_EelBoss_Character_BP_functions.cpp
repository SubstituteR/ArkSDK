// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBoss_Character_BP.EelBoss_Character_BP_C.PreventsTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEelBoss_Character_BP_C::PreventsTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.PreventsTargeting");

	AEelBoss_Character_BP_C_PreventsTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAdjustOutputDamage
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEelBoss_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAdjustOutputDamage");

	AEelBoss_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.GetDamageThresholdPerPhase
// ()
// Parameters:
// float                          Threshold                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::GetDamageThresholdPerPhase(float* Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.GetDamageThresholdPerPhase");

	AEelBoss_Character_BP_C_GetDamageThresholdPerPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Threshold != nullptr)
		*Threshold = params.Threshold;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.AllowAttackingAfterUnHide
// ()

void AEelBoss_Character_BP_C::AllowAttackingAfterUnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.AllowAttackingAfterUnHide");

	AEelBoss_Character_BP_C_AllowAttackingAfterUnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.TickSounds
// ()

void AEelBoss_Character_BP_C::TickSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.TickSounds");

	AEelBoss_Character_BP_C_TickSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPSentKilledNotification
// ()
// Parameters:
// class AShooterPlayerController** ToPC                           (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::BPSentKilledNotification(class AShooterPlayerController** ToPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPSentKilledNotification");

	AEelBoss_Character_BP_C_BPSentKilledNotification_Params params;
	params.ToPC = ToPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Is Any Enemy Within Bite Attack
// (Exec, Event, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ShouldBite                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::Is_Any_Enemy_Within_Bite_Attack(bool* ShouldBite)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.Is Any Enemy Within Bite Attack");

	AEelBoss_Character_BP_C_Is_Any_Enemy_Within_Bite_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldBite != nullptr)
		*ShouldBite = params.ShouldBite;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEelBoss_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintCanAttack");

	AEelBoss_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.FireMouth Projectiles
// ()

void AEelBoss_Character_BP_C::FireMouth_Projectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.FireMouth Projectiles");

	AEelBoss_Character_BP_C_FireMouth_Projectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartBulletHell
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AEelBoss_Character_BP_C::STATIC_StartBulletHell()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartBulletHell");

	AEelBoss_Character_BP_C_StartBulletHell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.OnRep_bIsHiding
// ()

void AEelBoss_Character_BP_C::OnRep_bIsHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.OnRep_bIsHiding");

	AEelBoss_Character_BP_C_OnRep_bIsHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AEelBoss_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEelBoss_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPAdjustDamage");

	AEelBoss_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEelBoss_Character_BP_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.BPModifyDesiredRotation");

	AEelBoss_Character_BP_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.UserConstructionScript
// ()

void AEelBoss_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.UserConstructionScript");

	AEelBoss_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__FinishedFunc
// ()

void AEelBoss_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__FinishedFunc");

	AEelBoss_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__UpdateFunc
// ()

void AEelBoss_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.Timeline_0__UpdateFunc");

	AEelBoss_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveBeginPlay
// ()

void AEelBoss_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveBeginPlay");

	AEelBoss_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.ReceiveTick");

	AEelBoss_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartGoingBackToHole
// ()

void AEelBoss_Character_BP_C::StartGoingBackToHole()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.StartGoingBackToHole");

	AEelBoss_Character_BP_C_StartGoingBackToHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ServerRequest_ResetTransform
// ()

void AEelBoss_Character_BP_C::ServerRequest_ResetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.ServerRequest_ResetTransform");

	AEelBoss_Character_BP_C_ServerRequest_ResetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.PlayYawn
// ()

void AEelBoss_Character_BP_C::PlayYawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.PlayYawn");

	AEelBoss_Character_BP_C_PlayYawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.ExecuteUbergraph_EelBoss_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_C::ExecuteUbergraph_EelBoss_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.ExecuteUbergraph_EelBoss_Character_BP");

	AEelBoss_Character_BP_C_ExecuteUbergraph_EelBoss_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP.EelBoss_Character_BP_C.Current Phase Complete and Returning Home__DelegateSignature
// ()

void AEelBoss_Character_BP_C::Current_Phase_Complete_and_Returning_Home__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP.EelBoss_Character_BP_C.Current Phase Complete and Returning Home__DelegateSignature");

	AEelBoss_Character_BP_C_Current_Phase_Complete_and_Returning_Home__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
