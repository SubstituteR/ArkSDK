// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ReceiveBeginPlay
// ()

void APteroteuthis_Char_BP_Escort_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ReceiveBeginPlay");

	APteroteuthis_Char_BP_Escort_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.SetNavLoc
// ()

void APteroteuthis_Char_BP_Escort_C::SetNavLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.SetNavLoc");

	APteroteuthis_Char_BP_Escort_C_SetNavLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Escort_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.OverrideRandomWanderLocation");

	APteroteuthis_Char_BP_Escort_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPTimerServer
// ()

void APteroteuthis_Char_BP_Escort_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPTimerServer");

	APteroteuthis_Char_BP_Escort_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APteroteuthis_Char_BP_Escort_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAdjustDamage");

	APteroteuthis_Char_BP_Escort_C_BPAdjustDamage_Params params;
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


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_Escort_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanRiderAttack");

	APteroteuthis_Char_BP_Escort_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_Escort_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanAttack");

	APteroteuthis_Char_BP_Escort_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Escort_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidClearCarriedCharacter");

	APteroteuthis_Char_BP_Escort_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Escort_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidSetCarriedCharacter");

	APteroteuthis_Char_BP_Escort_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_Escort_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAllowCarryCharacter");

	APteroteuthis_Char_BP_Escort_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.UserConstructionScript
// ()

void APteroteuthis_Char_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.UserConstructionScript");

	APteroteuthis_Char_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Escort_C::ExecuteUbergraph_Pteroteuthis_Char_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Escort");

	APteroteuthis_Char_BP_Escort_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
