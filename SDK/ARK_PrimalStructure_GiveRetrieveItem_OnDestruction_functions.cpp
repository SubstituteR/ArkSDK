// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_OnDestruction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalStructure_GiveRetrieveItem_OnDestruction_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPAdjustDamage");

	APrimalStructure_GiveRetrieveItem_OnDestruction_C_BPAdjustDamage_Params params;
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


// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_OnDestruction_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPPlayDying");

	APrimalStructure_GiveRetrieveItem_OnDestruction_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.UserConstructionScript
// ()

void APrimalStructure_GiveRetrieveItem_OnDestruction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.UserConstructionScript");

	APrimalStructure_GiveRetrieveItem_OnDestruction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_OnDestruction_C::ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction");

	APrimalStructure_GiveRetrieveItem_OnDestruction_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
