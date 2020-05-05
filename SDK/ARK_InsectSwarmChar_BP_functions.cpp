// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InsectSwarmChar_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AInsectSwarmChar_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPPlayDying");

	AInsectSwarmChar_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPOverrideFloatingHUDLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AInsectSwarmChar_BP_C::BPOverrideFloatingHUDLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPOverrideFloatingHUDLocation");

	AInsectSwarmChar_BP_C_BPOverrideFloatingHUDLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.FinishedAttackingTarget
// ()

void AInsectSwarmChar_BP_C::FinishedAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.FinishedAttackingTarget");

	AInsectSwarmChar_BP_C_FinishedAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.StartAttackingTarget
// ()

void AInsectSwarmChar_BP_C::StartAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.StartAttackingTarget");

	AInsectSwarmChar_BP_C_StartAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.SpottedTarget
// ()

void AInsectSwarmChar_BP_C::SpottedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.SpottedTarget");

	AInsectSwarmChar_BP_C_SpottedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Check for Water Avoidance
// (NetResponse, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)

void AInsectSwarmChar_BP_C::Check_for_Water_Avoidance()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Check for Water Avoidance");

	AInsectSwarmChar_BP_C_Check_for_Water_Avoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Can Damage Victim in Radius
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInsectSwarmChar_BP_C::Can_Damage_Victim_in_Radius(class AActor** Victim, bool* CanDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Can Damage Victim in Radius");

	AInsectSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDamage != nullptr)
		*CanDamage = params.CanDamage;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Get Current Attack Duration
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInsectSwarmChar_BP_C::Get_Current_Attack_Duration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Get Current Attack Duration");

	AInsectSwarmChar_BP_C_Get_Current_Attack_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.DestroyTarget
// ()

void AInsectSwarmChar_BP_C::DestroyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.DestroyTarget");

	AInsectSwarmChar_BP_C_DestroyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.UserConstructionScript
// ()

void AInsectSwarmChar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.UserConstructionScript");

	AInsectSwarmChar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AInsectSwarmChar_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ReceiveTick");

	AInsectSwarmChar_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ExecuteUbergraph_InsectSwarmChar_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInsectSwarmChar_BP_C::ExecuteUbergraph_InsectSwarmChar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ExecuteUbergraph_InsectSwarmChar_BP");

	AInsectSwarmChar_BP_C_ExecuteUbergraph_InsectSwarmChar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
