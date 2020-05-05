// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceGolem_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceGolem_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPIsHidden");

	AIceGolem_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceGolem_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPPreventRiding");

	AIceGolem_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAddedAttachmentsForItem
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::BPAddedAttachmentsForItem(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAddedAttachmentsForItem");

	AIceGolem_Character_BP_C_BPAddedAttachmentsForItem_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPUnstasis
// ()

void AIceGolem_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPUnstasis");

	AIceGolem_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceGolem_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintOverrideWantsToRun");

	AIceGolem_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.SetupDisguise
// ()

void AIceGolem_Character_BP_C::SetupDisguise()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.SetupDisguise");

	AIceGolem_Character_BP_C_SetupDisguise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceGolem_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPAdjustDamage");

	AIceGolem_Character_BP_C_BPAdjustDamage_Params params;
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


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.IsPlayerNearFeet
// ()
// Parameters:
// bool                           Yes                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::IsPlayerNearFeet(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.IsPlayerNearFeet");

	AIceGolem_Character_BP_C_IsPlayerNearFeet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yes != nullptr)
		*Yes = params.Yes;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveDestroyed
// ()

void AIceGolem_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveDestroyed");

	AIceGolem_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.OnRep_bIsDisguised
// ()

void AIceGolem_Character_BP_C::OnRep_bIsDisguised()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.OnRep_bIsDisguised");

	AIceGolem_Character_BP_C_OnRep_bIsDisguised_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTimerServer
// ()

void AIceGolem_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTimerServer");

	AIceGolem_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.HasDirectOrder
// ()
// Parameters:
// bool                           hasOrder                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::HasDirectOrder(bool* hasOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.HasDirectOrder");

	AIceGolem_Character_BP_C_HasDirectOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasOrder != nullptr)
		*hasOrder = params.hasOrder;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceGolem_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPTryMultiUse");

	AIceGolem_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AIceGolem_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BPGetMultiUseEntries");

	AIceGolem_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ArePlayersNearby
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::ArePlayersNearby(float Distance, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ArePlayersNearby");

	AIceGolem_Character_BP_C_ArePlayersNearby_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.CanDisguise
// ()
// Parameters:
// bool                           IsAllowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::CanDisguise(bool* IsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.CanDisguise");

	AIceGolem_Character_BP_C_CanDisguise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowed != nullptr)
		*IsAllowed = params.IsAllowed;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.CheckDisguiseCondition
// ()

void AIceGolem_Character_BP_C::CheckDisguiseCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.CheckDisguiseCondition");

	AIceGolem_Character_BP_C_CheckDisguiseCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceGolem_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintCanAttack");

	AIceGolem_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.UserConstructionScript
// ()

void AIceGolem_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.UserConstructionScript");

	AIceGolem_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AIceGolem_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveBeginPlay
// ()

void AIceGolem_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ReceiveBeginPlay");

	AIceGolem_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.StartDisguise
// ()

void AIceGolem_Character_BP_C::StartDisguise()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.StartDisguise");

	AIceGolem_Character_BP_C_StartDisguise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.StopDisguise
// ()

void AIceGolem_Character_BP_C::StopDisguise()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.StopDisguise");

	AIceGolem_Character_BP_C_StopDisguise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Bury
// ()

void AIceGolem_Character_BP_C::AnimNotify_Golem_Bury()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Bury");

	AIceGolem_Character_BP_C_AnimNotify_Golem_Bury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Getup
// ()

void AIceGolem_Character_BP_C::AnimNotify_Golem_Getup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_Golem_Getup");

	AIceGolem_Character_BP_C_AnimNotify_Golem_Getup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ClearTorporHit
// ()

void AIceGolem_Character_BP_C::ClearTorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ClearTorporHit");

	AIceGolem_Character_BP_C_ClearTorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.TorporHit
// ()

void AIceGolem_Character_BP_C::TorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.TorporHit");

	AIceGolem_Character_BP_C_TorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_PlayGolemBurySound
// ()

void AIceGolem_Character_BP_C::AnimNotify_PlayGolemBurySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.AnimNotify_PlayGolemBurySound");

	AIceGolem_Character_BP_C_AnimNotify_PlayGolemBurySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ForceHideMeshes
// ()

void AIceGolem_Character_BP_C::ForceHideMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ForceHideMeshes");

	AIceGolem_Character_BP_C_ForceHideMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_Character_BP.IceGolem_Character_BP_C.ExecuteUbergraph_IceGolem_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceGolem_Character_BP_C::ExecuteUbergraph_IceGolem_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_Character_BP.IceGolem_Character_BP_C.ExecuteUbergraph_IceGolem_Character_BP");

	AIceGolem_Character_BP_C_ExecuteUbergraph_IceGolem_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
