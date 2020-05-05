// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Toad_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AToad_Character_BP_Escort_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BP_ForceAllowAddBuff");

	AToad_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AToad_Character_BP_Escort_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.AllowGrappling");

	AToad_Character_BP_Escort_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BPAdjustImpulseFromDamage
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

struct FVector AToad_Character_BP_Escort_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BPAdjustImpulseFromDamage");

	AToad_Character_BP_Escort_C_BPAdjustImpulseFromDamage_Params params;
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


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.DelayEscape
// ()

void AToad_Character_BP_Escort_C::DelayEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.DelayEscape");

	AToad_Character_BP_Escort_C_DelayEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AToad_Character_BP_Escort_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.BPDisplayTamedMessage");

	AToad_Character_BP_Escort_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.UserConstructionScript
// ()

void AToad_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.UserConstructionScript");

	AToad_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.ExecuteUbergraph_Toad_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToad_Character_BP_Escort_C::ExecuteUbergraph_Toad_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Escort.Toad_Character_BP_Escort_C.ExecuteUbergraph_Toad_Character_BP_Escort");

	AToad_Character_BP_Escort_C_ExecuteUbergraph_Toad_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
