// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternGoat_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ClearTamedFollowTarget
// ()

void ALanternGoat_Character_BP_Escort_C::ClearTamedFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ClearTamedFollowTarget");

	ALanternGoat_Character_BP_Escort_C_ClearTamedFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOnTamedProcessOrder");

	ALanternGoat_Character_BP_Escort_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALanternGoat_Character_BP_Escort_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BP_ForceAllowAddBuff");

	ALanternGoat_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALanternGoat_Character_BP_Escort_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.AllowGrappling");

	ALanternGoat_Character_BP_Escort_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALanternGoat_Character_BP_Escort_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPDisplayTamedMessage");

	ALanternGoat_Character_BP_Escort_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.GetActualRadius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::GetActualRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.GetActualRadius");

	ALanternGoat_Character_BP_Escort_C_GetActualRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALanternGoat_Character_BP_Escort_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPAdjustImpulseFromDamage");

	ALanternGoat_Character_BP_Escort_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALanternGoat_Character_BP_Escort_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPGetGravityZScale");

	ALanternGoat_Character_BP_Escort_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOrderedMoveToLoc
// ()
// Parameters:
// struct FVector                 DestLoc                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::BPOrderedMoveToLoc(struct FVector* DestLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPOrderedMoveToLoc");

	ALanternGoat_Character_BP_Escort_C_BPOrderedMoveToLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestLoc != nullptr)
		*DestLoc = params.DestLoc;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.K2_OnMovementModeChanged");

	ALanternGoat_Character_BP_Escort_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.DoJetpackBurst
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStop                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::DoJetpackBurst(const struct FVector& Loc, bool IsStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.DoJetpackBurst");

	ALanternGoat_Character_BP_Escort_C_DoJetpackBurst_Params params;
	params.Loc = Loc;
	params.IsStop = IsStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.OnRep_PreventDinoShoulderMount
// ()

void ALanternGoat_Character_BP_Escort_C::OnRep_PreventDinoShoulderMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.OnRep_PreventDinoShoulderMount");

	ALanternGoat_Character_BP_Escort_C_OnRep_PreventDinoShoulderMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.UserConstructionScript
// ()

void ALanternGoat_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.UserConstructionScript");

	ALanternGoat_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPTimerServer
// ()

void ALanternGoat_Character_BP_Escort_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.BPTimerServer");

	ALanternGoat_Character_BP_Escort_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ReceiveBeginPlay
// ()

void ALanternGoat_Character_BP_Escort_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ReceiveBeginPlay");

	ALanternGoat_Character_BP_Escort_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.PlayPetAnimAfterDelay
// ()

void ALanternGoat_Character_BP_Escort_C::PlayPetAnimAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.PlayPetAnimAfterDelay");

	ALanternGoat_Character_BP_Escort_C_PlayPetAnimAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ExecuteUbergraph_LanternGoat_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_Escort_C::ExecuteUbergraph_LanternGoat_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP_Escort.LanternGoat_Character_BP_Escort_C.ExecuteUbergraph_LanternGoat_Character_BP_Escort");

	ALanternGoat_Character_BP_Escort_C_ExecuteUbergraph_LanternGoat_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
