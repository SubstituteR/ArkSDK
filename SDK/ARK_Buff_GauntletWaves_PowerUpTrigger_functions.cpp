// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GauntletWaves_PowerUpTrigger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UpdateWeaponMeshParticle
// (Event, Static, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterWeapon*          weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::STATIC_UpdateWeaponMeshParticle(class AShooterWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UpdateWeaponMeshParticle");

	ABuff_GauntletWaves_PowerUpTrigger_C_UpdateWeaponMeshParticle_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UserConstructionScript
// ()

void ABuff_GauntletWaves_PowerUpTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.UserConstructionScript");

	ABuff_GauntletWaves_PowerUpTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ReceiveBeginPlay
// ()

void ABuff_GauntletWaves_PowerUpTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ReceiveBeginPlay");

	ABuff_GauntletWaves_PowerUpTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SetActiveState
// ()
// Parameters:
// bool                           NewActiveState                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewWeaponToGive                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewAmmoToGive                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAmmoAmount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::SetActiveState(bool NewActiveState, class UClass* NewWeaponToGive, class UClass* NewAmmoToGive, int NewAmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SetActiveState");

	ABuff_GauntletWaves_PowerUpTrigger_C_SetActiveState_Params params;
	params.NewActiveState = NewActiveState;
	params.NewWeaponToGive = NewWeaponToGive;
	params.NewAmmoToGive = NewAmmoToGive;
	params.NewAmmoAmount = NewAmmoAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.Multi_SetActiveState
// ()
// Parameters:
// class UClass*                  NewWeaponToSet                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewAmmoToGive                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAmmoAmount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::Multi_SetActiveState(class UClass* NewWeaponToSet, class UClass* NewAmmoToGive, int NewAmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.Multi_SetActiveState");

	ABuff_GauntletWaves_PowerUpTrigger_C_Multi_SetActiveState_Params params;
	params.NewWeaponToSet = NewWeaponToSet;
	params.NewAmmoToGive = NewAmmoToGive;
	params.NewAmmoAmount = NewAmmoAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.PrepareReactivation
// ()
// Parameters:
// float                          DelayTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewWeaponToGive                (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewReactivationTime            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewAmmoToGive                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAmmoAmount                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::PrepareReactivation(float DelayTime, class UClass* NewWeaponToGive, float NewReactivationTime, class UClass* NewAmmoToGive, int NewAmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.PrepareReactivation");

	ABuff_GauntletWaves_PowerUpTrigger_C_PrepareReactivation_Params params;
	params.DelayTime = DelayTime;
	params.NewWeaponToGive = NewWeaponToGive;
	params.NewReactivationTime = NewReactivationTime;
	params.NewAmmoToGive = NewAmmoToGive;
	params.NewAmmoAmount = NewAmmoAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ClearActivateTimer
// ()

void ABuff_GauntletWaves_PowerUpTrigger_C::ClearActivateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ClearActivateTimer");

	ABuff_GauntletWaves_PowerUpTrigger_C_ClearActivateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.DelayedActivation
// ()

void ABuff_GauntletWaves_PowerUpTrigger_C::DelayedActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.DelayedActivation");

	ABuff_GauntletWaves_PowerUpTrigger_C_DelayedActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickClient");

	ABuff_GauntletWaves_PowerUpTrigger_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.BuffTickServer");

	ABuff_GauntletWaves_PowerUpTrigger_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SpawnPickupCollectedVFX
// ()

void ABuff_GauntletWaves_PowerUpTrigger_C::SpawnPickupCollectedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.SpawnPickupCollectedVFX");

	ABuff_GauntletWaves_PowerUpTrigger_C_SpawnPickupCollectedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_PowerUpTrigger_C::ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_PowerUpTrigger.Buff_GauntletWaves_PowerUpTrigger_C.ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger");

	ABuff_GauntletWaves_PowerUpTrigger_C_ExecuteUbergraph_Buff_GauntletWaves_PowerUpTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
