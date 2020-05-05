// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRMainBoss_Character.VRMainBoss_Character_C.PlaySoundFX
// ()
// Parameters:
// class USoundCue*               Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::PlaySoundFX(class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.PlaySoundFX");

	AVRMainBoss_Character_C_PlaySoundFX_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.SelectCurrentBeamAttackType
// (NetReliable, Event, NetResponse, NetMulticast, Public, Private, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// TEnumAsByte<EVRMainBossBeamType> SelectedAttack                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::SelectCurrentBeamAttackType(TEnumAsByte<EVRMainBossBeamType>* SelectedAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.SelectCurrentBeamAttackType");

	AVRMainBoss_Character_C_SelectCurrentBeamAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedAttack != nullptr)
		*SelectedAttack = params.SelectedAttack;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.SetShieldVisuals
// ()
// Parameters:
// float                          ShieldStrength                 (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::SetShieldVisuals(float ShieldStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.SetShieldVisuals");

	AVRMainBoss_Character_C_SetShieldVisuals_Params params;
	params.ShieldStrength = ShieldStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.CreateShieldMaterials
// ()

void AVRMainBoss_Character_C::CreateShieldMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.CreateShieldMaterials");

	AVRMainBoss_Character_C_CreateShieldMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Beam Callbacks
// ()

void AVRMainBoss_Character_C::Bind_Beam_Callbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Beam Callbacks");

	AVRMainBoss_Character_C_Bind_Beam_Callbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Anim Callbacks
// ()

void AVRMainBoss_Character_C::Bind_Anim_Callbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Bind Anim Callbacks");

	AVRMainBoss_Character_C_Bind_Anim_Callbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.OnRep_InitialDamageState
// ()

void AVRMainBoss_Character_C::OnRep_InitialDamageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.OnRep_InitialDamageState");

	AVRMainBoss_Character_C_OnRep_InitialDamageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.IsFiringAnyTargetedBeams?
// ()
// Parameters:
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::IsFiringAnyTargetedBeams_(bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.IsFiringAnyTargetedBeams?");

	AVRMainBoss_Character_C_IsFiringAnyTargetedBeams__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveAnyDamage
// (NetRequest, Native, Event, Static, NetMulticast, Public, Private, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::STATIC_ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveAnyDamage");

	AVRMainBoss_Character_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Get Attack Cooldown Time
// ()
// Parameters:
// float                          CooldownValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Get_Attack_Cooldown_Time(float* CooldownValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Get Attack Cooldown Time");

	AVRMainBoss_Character_C_Get_Attack_Cooldown_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CooldownValue != nullptr)
		*CooldownValue = params.CooldownValue;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.LookAtActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::LookAtActor(class AActor* Actor, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.LookAtActor");

	AVRMainBoss_Character_C_LookAtActor_Params params;
	params.Actor = Actor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Beams At Targets
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Server_Fire_Beams_At_Targets(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Beams At Targets");

	AVRMainBoss_Character_C_Server_Fire_Beams_At_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Rotating Beams
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Server_Fire_Rotating_Beams(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Rotating Beams");

	AVRMainBoss_Character_C_Server_Fire_Rotating_Beams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Eye Beams
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Server_Fire_Eye_Beams(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server Fire Eye Beams");

	AVRMainBoss_Character_C_Server_Fire_Eye_Beams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Pick Beam Targets
// ()
// Parameters:
// TArray<int>                    TargetIndices                  (Parm, OutParm, ZeroConstructor)

void AVRMainBoss_Character_C::Pick_Beam_Targets(TArray<int>* TargetIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Pick Beam Targets");

	AVRMainBoss_Character_C_Pick_Beam_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetIndices != nullptr)
		*TargetIndices = params.TargetIndices;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Get Is Vulnerable
// ()
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Get_Is_Vulnerable(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Get Is Vulnerable");

	AVRMainBoss_Character_C_Get_Is_Vulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.BPAdjustDamage
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRMainBoss_Character_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.BPAdjustDamage");

	AVRMainBoss_Character_C_BPAdjustDamage_Params params;
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


// Function VRMainBoss_Character.VRMainBoss_Character_C.UserConstructionScript
// ()

void AVRMainBoss_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.UserConstructionScript");

	AVRMainBoss_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__FinishedFunc
// ()

void AVRMainBoss_Character_C::EyebeamsSweepingHeadTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__FinishedFunc");

	AVRMainBoss_Character_C_EyebeamsSweepingHeadTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__UpdateFunc
// ()

void AVRMainBoss_Character_C::EyebeamsSweepingHeadTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.EyebeamsSweepingHeadTimeline__UpdateFunc");

	AVRMainBoss_Character_C_EyebeamsSweepingHeadTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__FinishedFunc
// ()

void AVRMainBoss_Character_C::RotatingBeamsTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__FinishedFunc");

	AVRMainBoss_Character_C_RotatingBeamsTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__UpdateFunc
// ()

void AVRMainBoss_Character_C::RotatingBeamsTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsTimeline__UpdateFunc");

	AVRMainBoss_Character_C_RotatingBeamsTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__FinishedFunc
// ()

void AVRMainBoss_Character_C::ShieldTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__FinishedFunc");

	AVRMainBoss_Character_C_ShieldTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__UpdateFunc
// ()

void AVRMainBoss_Character_C::ShieldTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ShieldTimeline__UpdateFunc");

	AVRMainBoss_Character_C_ShieldTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__FinishedFunc
// ()

void AVRMainBoss_Character_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__FinishedFunc");

	AVRMainBoss_Character_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__UpdateFunc
// ()

void AVRMainBoss_Character_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Timeline_0__UpdateFunc");

	AVRMainBoss_Character_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_DropShield
// ()

void AVRMainBoss_Character_C::Multicast_DropShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_DropShield");

	AVRMainBoss_Character_C_Multicast_DropShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_RaiseShield
// ()

void AVRMainBoss_Character_C::Multicast_RaiseShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_RaiseShield");

	AVRMainBoss_Character_C_Multicast_RaiseShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_DropShield
// ()

void AVRMainBoss_Character_C::Server_DropShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server_DropShield");

	AVRMainBoss_Character_C_Server_DropShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_RaiseShield
// ()

void AVRMainBoss_Character_C::Server_RaiseShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server_RaiseShield");

	AVRMainBoss_Character_C_Server_RaiseShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Set Vulnerability
// ()
// Parameters:
// bool                           IsVulnerable                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Set_Vulnerability(bool IsVulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Set Vulnerability");

	AVRMainBoss_Character_C_Set_Vulnerability_Params params;
	params.IsVulnerable = IsVulnerable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveTick");

	AVRMainBoss_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Begin Attacking
// ()

void AVRMainBoss_Character_C::Begin_Attacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Begin Attacking");

	AVRMainBoss_Character_C_Begin_Attacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireBeamAtTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Multicast_FireBeamAtTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireBeamAtTarget");

	AVRMainBoss_Character_C_Multicast_FireBeamAtTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateTracking
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::UpdateTracking(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateTracking");

	AVRMainBoss_Character_C_UpdateTracking_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireRotatingBeams
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingYaw                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Multicast_FireRotatingBeams(const struct FVector& Location, float StartingYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireRotatingBeams");

	AVRMainBoss_Character_C_Multicast_FireRotatingBeams_Params params;
	params.Location = Location;
	params.StartingYaw = StartingYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireEyeBeams
// ()

void AVRMainBoss_Character_C::Multicast_FireEyeBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_FireEyeBeams");

	AVRMainBoss_Character_C_Multicast_FireEyeBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Start Sweeping Head
// ()

void AVRMainBoss_Character_C::Start_Sweeping_Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Start Sweeping Head");

	AVRMainBoss_Character_C_Start_Sweeping_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.SetHeadTrackingState
// ()
// Parameters:
// TEnumAsByte<EVRBoss_HeadTrackingState> State                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::SetHeadTrackingState(TEnumAsByte<EVRBoss_HeadTrackingState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.SetHeadTrackingState");

	AVRMainBoss_Character_C_SetHeadTrackingState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.StartRotatingBeamTimeline
// ()

void AVRMainBoss_Character_C::StartRotatingBeamTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.StartRotatingBeamTimeline");

	AVRMainBoss_Character_C_StartRotatingBeamTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.EyeBeamsStoppedFiring
// ()

void AVRMainBoss_Character_C::EyeBeamsStoppedFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.EyeBeamsStoppedFiring");

	AVRMainBoss_Character_C_EyeBeamsStoppedFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.delayed reaction to forewarn players of incoming beam attacks
// ()
// Parameters:
// float                          attack_cooldown                (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::delayed_reaction_to_forewarn_players_of_incoming_beam_attacks(float attack_cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.delayed reaction to forewarn players of incoming beam attacks");

	AVRMainBoss_Character_C_delayed_reaction_to_forewarn_players_of_incoming_beam_attacks_Params params;
	params.attack_cooldown = attack_cooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringEyebeams_Event
// ()

void AVRMainBoss_Character_C::StartFiringEyebeams_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringEyebeams_Event");

	AVRMainBoss_Character_C_StartFiringEyebeams_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.AdvanceAttackState
// ()

void AVRMainBoss_Character_C::AdvanceAttackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.AdvanceAttackState");

	AVRMainBoss_Character_C_AdvanceAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsStoppedFiringEvent_Event
// ()

void AVRMainBoss_Character_C::RotatingBeamsStoppedFiringEvent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.RotatingBeamsStoppedFiringEvent_Event");

	AVRMainBoss_Character_C_RotatingBeamsStoppedFiringEvent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringRotatingBeams
// ()

void AVRMainBoss_Character_C::StartFiringRotatingBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringRotatingBeams");

	AVRMainBoss_Character_C_StartFiringRotatingBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.SetCurrentCooldown
// ()

void AVRMainBoss_Character_C::SetCurrentCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.SetCurrentCooldown");

	AVRMainBoss_Character_C_SetCurrentCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.AbortBeams
// ()

void AVRMainBoss_Character_C::AbortBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.AbortBeams");

	AVRMainBoss_Character_C_AbortBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveBeginPlay
// ()

void AVRMainBoss_Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ReceiveBeginPlay");

	AVRMainBoss_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugFacingDirection
// ()

void AVRMainBoss_Character_C::DebugFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.DebugFacingDirection");

	AVRMainBoss_Character_C_DebugFacingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugTargetedBeams
// ()

void AVRMainBoss_Character_C::DebugTargetedBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.DebugTargetedBeams");

	AVRMainBoss_Character_C_DebugTargetedBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.DebugRotatingBeams
// ()

void AVRMainBoss_Character_C::DebugRotatingBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.DebugRotatingBeams");

	AVRMainBoss_Character_C_DebugRotatingBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.OnDied_Event");

	AVRMainBoss_Character_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_Set VR Battle Stage
// ()
// Parameters:
// int                            Stage                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Multicast_Set_VR_Battle_Stage(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_Set VR Battle Stage");

	AVRMainBoss_Character_C_Multicast_Set_VR_Battle_Stage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBanterAnimation
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::PlayBanterAnimation(class UAnimMontage* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBanterAnimation");

	AVRMainBoss_Character_C_PlayBanterAnimation_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.TargetedBeamsStoppedFiringEvent
// ()

void AVRMainBoss_Character_C::TargetedBeamsStoppedFiringEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.TargetedBeamsStoppedFiringEvent");

	AVRMainBoss_Character_C_TargetedBeamsStoppedFiringEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.StartChargingTargetedBeams_Event
// ()

void AVRMainBoss_Character_C::StartChargingTargetedBeams_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.StartChargingTargetedBeams_Event");

	AVRMainBoss_Character_C_StartChargingTargetedBeams_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringTargetedBeams_Event
// ()

void AVRMainBoss_Character_C::StartFiringTargetedBeams_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.StartFiringTargetedBeams_Event");

	AVRMainBoss_Character_C_StartFiringTargetedBeams_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateHeadPosMPCParam
// ()

void AVRMainBoss_Character_C::UpdateHeadPosMPCParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.UpdateHeadPosMPCParam");

	AVRMainBoss_Character_C_UpdateHeadPosMPCParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Server_SetBattleStage
// ()
// Parameters:
// int                            StageIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::Server_SetBattleStage(int StageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Server_SetBattleStage");

	AVRMainBoss_Character_C_Server_SetBattleStage_Params params;
	params.StageIndex = StageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_PlayTaunt
// ()

void AVRMainBoss_Character_C::Multicast_PlayTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_PlayTaunt");

	AVRMainBoss_Character_C_Multicast_PlayTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_CancelTaunt
// ()

void AVRMainBoss_Character_C::Multicast_CancelTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.Multicast_CancelTaunt");

	AVRMainBoss_Character_C_Multicast_CancelTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.ExecuteUbergraph_VRMainBoss_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_C::ExecuteUbergraph_VRMainBoss_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.ExecuteUbergraph_VRMainBoss_Character");

	AVRMainBoss_Character_C_ExecuteUbergraph_VRMainBoss_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.CancelBossTaunt__DelegateSignature
// ()

void AVRMainBoss_Character_C::CancelBossTaunt__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.CancelBossTaunt__DelegateSignature");

	AVRMainBoss_Character_C_CancelBossTaunt__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBossTaunt__DelegateSignature
// ()

void AVRMainBoss_Character_C::PlayBossTaunt__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character.VRMainBoss_Character_C.PlayBossTaunt__DelegateSignature");

	AVRMainBoss_Character_C_PlayBossTaunt__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
