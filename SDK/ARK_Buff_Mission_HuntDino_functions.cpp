// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_HuntDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_HuntDino_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.NotifyDamage");

	ABuff_Mission_HuntDino_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffOverrideFinalWanderLocation
// ()
// Parameters:
// struct FVector                 outVec                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Mission_HuntDino_C::BuffOverrideFinalWanderLocation(struct FVector* outVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffOverrideFinalWanderLocation");

	ABuff_Mission_HuntDino_C_BuffOverrideFinalWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVec != nullptr)
		*outVec = params.outVec;

	return params.ReturnValue;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.SetFleeing
// ()
// Parameters:
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_HuntDino_C::SetFleeing(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.SetFleeing");

	ABuff_Mission_HuntDino_C_SetFleeing_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.InitHuntBuff
// ()

void ABuff_Mission_HuntDino_C::InitHuntBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.InitHuntBuff");

	ABuff_Mission_HuntDino_C_InitHuntBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ReceiveBeginPlay
// ()

void ABuff_Mission_HuntDino_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ReceiveBeginPlay");

	ABuff_Mission_HuntDino_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPInstigatorPossessed
// ()
// Parameters:
// class AController**            ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_HuntDino_C::BPInstigatorPossessed(class AController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPInstigatorPossessed");

	ABuff_Mission_HuntDino_C_BPInstigatorPossessed_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPOverrideTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Mission_HuntDino_C::BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPOverrideTargetingDesire");

	ABuff_Mission_HuntDino_C_BPOverrideTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Mission_HuntDino_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffAdjustDamage");

	ABuff_Mission_HuntDino_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.UserConstructionScript
// ()

void ABuff_Mission_HuntDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.UserConstructionScript");

	ABuff_Mission_HuntDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ExecuteUbergraph_Buff_Mission_HuntDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_HuntDino_C::ExecuteUbergraph_Buff_Mission_HuntDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ExecuteUbergraph_Buff_Mission_HuntDino");

	ABuff_Mission_HuntDino_C_ExecuteUbergraph_Buff_Mission_HuntDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
