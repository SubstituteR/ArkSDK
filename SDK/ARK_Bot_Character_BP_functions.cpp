// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bot_Character_BP.Bot_Character_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABot_Character_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.BPPlayDying");

	ABot_Character_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Bot_Character_BP.Bot_Character_BP_C.BP_OnSetDeath
// ()

void ABot_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.BP_OnSetDeath");

	ABot_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bot_Character_BP.Bot_Character_BP_C.PlayRandomTauntMontageFn
// ()
// Parameters:
// float                          MontageDuration                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABot_Character_BP_C::PlayRandomTauntMontageFn(float* MontageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.PlayRandomTauntMontageFn");

	ABot_Character_BP_C_PlayRandomTauntMontageFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MontageDuration != nullptr)
		*MontageDuration = params.MontageDuration;
}


// Function Bot_Character_BP.Bot_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABot_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ABot_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Bot_Character_BP.Bot_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABot_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.ReceivePossessed");

	ABot_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bot_Character_BP.Bot_Character_BP_C.GetMeleeSocketLocation
// ()
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABot_Character_BP_C::GetMeleeSocketLocation(const struct FName& SocketName, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.GetMeleeSocketLocation");

	ABot_Character_BP_C_GetMeleeSocketLocation_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function Bot_Character_BP.Bot_Character_BP_C.UserConstructionScript
// ()

void ABot_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.UserConstructionScript");

	ABot_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bot_Character_BP.Bot_Character_BP_C.ExecuteUbergraph_Bot_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABot_Character_BP_C::ExecuteUbergraph_Bot_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_Character_BP.Bot_Character_BP_C.ExecuteUbergraph_Bot_Character_BP");

	ABot_Character_BP_C_ExecuteUbergraph_Bot_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
