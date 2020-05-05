// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_GauntletWaves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_GauntletWaves_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickServer");

	ABuff_Mission_GauntletWaves_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPAdjustDamage_Ex
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpulseDir                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Mission_GauntletWaves_C::BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPAdjustDamage_Ex");

	ABuff_Mission_GauntletWaves_C_BPAdjustDamage_Ex_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.InDamageCauser = InDamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (ImpulseDir != nullptr)
		*ImpulseDir = params.ImpulseDir;

	return params.ReturnValue;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_Mission_GauntletWaves_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BPGetHUDElements");

	ABuff_Mission_GauntletWaves_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UserConstructionScript
// ()

void ABuff_Mission_GauntletWaves_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UserConstructionScript");

	ABuff_Mission_GauntletWaves_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.InpActEvt_F10_K2Node_InputKeyEvent_66
// ()

void ABuff_Mission_GauntletWaves_C::InpActEvt_F10_K2Node_InputKeyEvent_66()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.InpActEvt_F10_K2Node_InputKeyEvent_66");

	ABuff_Mission_GauntletWaves_C_InpActEvt_F10_K2Node_InputKeyEvent_66_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_GauntletWaves_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.BuffTickClient");

	ABuff_Mission_GauntletWaves_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ReceiveBeginPlay
// ()

void ABuff_Mission_GauntletWaves_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ReceiveBeginPlay");

	ABuff_Mission_GauntletWaves_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UpdateMissionDinos
// ()

void ABuff_Mission_GauntletWaves_C::UpdateMissionDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.UpdateMissionDinos");

	ABuff_Mission_GauntletWaves_C_UpdateMissionDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ExecuteUbergraph_Buff_Mission_GauntletWaves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_GauntletWaves_C::ExecuteUbergraph_Buff_Mission_GauntletWaves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_GauntletWaves.Buff_Mission_GauntletWaves_C.ExecuteUbergraph_Buff_Mission_GauntletWaves");

	ABuff_Mission_GauntletWaves_C_ExecuteUbergraph_Buff_Mission_GauntletWaves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
