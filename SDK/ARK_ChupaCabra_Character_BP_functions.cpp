// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GetNumBatteries");

	AChupaCabra_Character_BP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get Charge Variable Interface");

	AChupaCabra_Character_BP_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChupaCabra_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPIsHidden");

	AChupaCabra_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BP_OnSetDeath
// ()

void AChupaCabra_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BP_OnSetDeath");

	AChupaCabra_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnRep_isUnderground
// ()

void AChupaCabra_Character_BP_C::OnRep_isUnderground()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnRep_isUnderground");

	AChupaCabra_Character_BP_C_OnRep_isUnderground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UseCringeForTime
// ()
// Parameters:
// float*                         cringeTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::UseCringeForTime(float* cringeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UseCringeForTime");

	AChupaCabra_Character_BP_C_UseCringeForTime_Params params;
	params.cringeTime = cringeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChargeEvent
// ()

void AChupaCabra_Character_BP_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChargeEvent");

	AChupaCabra_Character_BP_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PlayCringeAnim
// ()

void AChupaCabra_Character_BP_C::PlayCringeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PlayCringeAnim");

	AChupaCabra_Character_BP_C_PlayCringeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeMontage
// ()
// Parameters:
// bool                           playingCringeAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::IsPlayingCringeMontage(bool* playingCringeAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeMontage");

	AChupaCabra_Character_BP_C_IsPlayingCringeMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playingCringeAnim != nullptr)
		*playingCringeAnim = params.playingCringeAnim;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelTempCringe
// ()

void AChupaCabra_Character_BP_C::CancelTempCringe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelTempCringe");

	AChupaCabra_Character_BP_C_CancelTempCringe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Use Cringe for TimeOld
// ()
// Parameters:
// float                          cringeTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Use_Cringe_for_TimeOld(float cringeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Use Cringe for TimeOld");

	AChupaCabra_Character_BP_C_Use_Cringe_for_TimeOld_Params params;
	params.cringeTime = cringeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeAnim
// ()
// Parameters:
// class UAnimMontage*            montagePlaying                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::IsPlayingCringeAnim(class UAnimMontage** montagePlaying, bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPlayingCringeAnim");

	AChupaCabra_Character_BP_C_IsPlayingCringeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (montagePlaying != nullptr)
		*montagePlaying = params.montagePlaying;
	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DisableAlpha
// ()

void AChupaCabra_Character_BP_C::DisableAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DisableAlpha");

	AChupaCabra_Character_BP_C_DisableAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get RadiusToJoinPack
// ()
// Parameters:
// bool*                          belongsToOldPack               (Parm, ZeroConstructor, IsPlainOldData)
// float                          firstTimeRadius                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Get_RadiusToJoinPack(bool* belongsToOldPack, float* firstTimeRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get RadiusToJoinPack");

	AChupaCabra_Character_BP_C_Get_RadiusToJoinPack_Params params;
	params.belongsToOldPack = belongsToOldPack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (firstTimeRadius != nullptr)
		*firstTimeRadius = params.firstTimeRadius;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Add Dino to Pack
// ()
// Parameters:
// class AActor**                 ActorToAdd                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Add_Dino_to_Pack(class AActor** ActorToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Add Dino to Pack");

	AChupaCabra_Character_BP_C_Add_Dino_to_Pack_Params params;
	params.ActorToAdd = ActorToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Create Charge Manager
// ()

void AChupaCabra_Character_BP_C::Create_Charge_Manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Create Charge Manager");

	AChupaCabra_Character_BP_C_Create_Charge_Manager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanPlayCringeAnim
// ()
// Parameters:
// bool                           fromInstantCharge              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canPlayAnim                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::CanPlayCringeAnim(bool fromInstantCharge, bool* canPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanPlayCringeAnim");

	AChupaCabra_Character_BP_C_CanPlayCringeAnim_Params params;
	params.fromInstantCharge = fromInstantCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canPlayAnim != nullptr)
		*canPlayAnim = params.canPlayAnim;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Charge EventOld
// ()

void AChupaCabra_Character_BP_C::On_Charge_EventOld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Charge EventOld");

	AChupaCabra_Character_BP_C_On_Charge_EventOld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StateChangeActions_ServerAndClient
// ()
// Parameters:
// bool                           underground                    (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::StateChangeActions_ServerAndClient(bool underground)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StateChangeActions_ServerAndClient");

	AChupaCabra_Character_BP_C_StateChangeActions_ServerAndClient_Params params;
	params.underground = underground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetVeinsEmissive
// ()
// Parameters:
// float                          emissiveValue                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::SetVeinsEmissive(float emissiveValue, const struct FName& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetVeinsEmissive");

	AChupaCabra_Character_BP_C_SetVeinsEmissive_Params params;
	params.emissiveValue = emissiveValue;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroySurroundingChupacabras
// ()

void AChupaCabra_Character_BP_C::DestroySurroundingChupacabras()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroySurroundingChupacabras");

	AChupaCabra_Character_BP_C_DestroySurroundingChupacabras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get MoundTransform
// (Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           useDiveInSocket                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moundLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                moundRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moundScale                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::STATIC_Get_MoundTransform(bool useDiveInSocket, const struct FName& SocketName, struct FVector* moundLocation, struct FRotator* moundRotation, struct FVector* moundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Get MoundTransform");

	AChupaCabra_Character_BP_C_Get_MoundTransform_Params params;
	params.useDiveInSocket = useDiveInSocket;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (moundLocation != nullptr)
		*moundLocation = params.moundLocation;
	if (moundRotation != nullptr)
		*moundRotation = params.moundRotation;
	if (moundScale != nullptr)
		*moundScale = params.moundScale;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPCharacterSleeped
// ()

void AChupaCabra_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPCharacterSleeped");

	AChupaCabra_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Has Relevant Target
// ()
// Parameters:
// bool                           relevant                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Has_Relevant_Target(bool* relevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Has Relevant Target");

	AChupaCabra_Character_BP_C_Has_Relevant_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (relevant != nullptr)
		*relevant = params.relevant;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveDestroyed
// ()

void AChupaCabra_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveDestroyed");

	AChupaCabra_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelSuperminionSpawnIfNeeded
// ()
// Parameters:
// float                          currentChargeAmount            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           cancelled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::CancelSuperminionSpawnIfNeeded(float currentChargeAmount, bool* cancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CancelSuperminionSpawnIfNeeded");

	AChupaCabra_Character_BP_C_CancelSuperminionSpawnIfNeeded_Params params;
	params.currentChargeAmount = currentChargeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cancelled != nullptr)
		*cancelled = params.cancelled;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateBiteAttackAnimPriorities
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::STATIC_UpdateBiteAttackAnimPriorities(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateBiteAttackAnimPriorities");

	AChupaCabra_Character_BP_C_UpdateBiteAttackAnimPriorities_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateSuperminionState
// ()

void AChupaCabra_Character_BP_C::UpdateSuperminionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateSuperminionState");

	AChupaCabra_Character_BP_C_UpdateSuperminionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Superminion Died
// ()
// Parameters:
// class APrimalDinoCharacter*    superMinion                    (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::On_Superminion_Died(class APrimalDinoCharacter* superMinion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.On Superminion Died");

	AChupaCabra_Character_BP_C_On_Superminion_Died_Params params;
	params.superMinion = superMinion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AChupaCabra_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPAdjustDamage");

	AChupaCabra_Character_BP_C_BPAdjustDamage_Params params;
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


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidSurfaceToDiveIn
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::IsValidSurfaceToDiveIn(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidSurfaceToDiveIn");

	AChupaCabra_Character_BP_C_IsValidSurfaceToDiveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn
// ()

void AChupaCabra_Character_BP_C::StopSuperminionSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn");

	AChupaCabra_Character_BP_C_StopSuperminionSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SpawnSuperminion
// ()

void AChupaCabra_Character_BP_C::SpawnSuperminion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SpawnSuperminion");

	AChupaCabra_Character_BP_C_SpawnSuperminion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnMinionSpawned
// ()
// Parameters:
// class APrimalDinoCharacter*    newMinion                      (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::OnMinionSpawned(class APrimalDinoCharacter* newMinion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnMinionSpawned");

	AChupaCabra_Character_BP_C_OnMinionSpawned_Params params;
	params.newMinion = newMinion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Start Superminion Spawn
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Can_Start_Superminion_Spawn(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Start Superminion Spawn");

	AChupaCabra_Character_BP_C_Can_Start_Superminion_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySetAlphaDino
// ()

void AChupaCabra_Character_BP_C::TrySetAlphaDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySetAlphaDino");

	AChupaCabra_Character_BP_C_TrySetAlphaDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Spawn Minion
// ()

void AChupaCabra_Character_BP_C::Spawn_Minion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Spawn Minion");

	AChupaCabra_Character_BP_C_Spawn_Minion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Spawn Super Minion
// ()
// Parameters:
// bool                           canSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Can_Spawn_Super_Minion(bool* canSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Can Spawn Super Minion");

	AChupaCabra_Character_BP_C_Can_Spawn_Super_Minion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSpawn != nullptr)
		*canSpawn = params.canSpawn;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanSpawnMinion
// ()
// Parameters:
// bool                           canSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::CanSpawnMinion(bool* canSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanSpawnMinion");

	AChupaCabra_Character_BP_C_CanSpawnMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSpawn != nullptr)
		*canSpawn = params.canSpawn;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GatherPack
// ()

void AChupaCabra_Character_BP_C::GatherPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.GatherPack");

	AChupaCabra_Character_BP_C_GatherPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChupaCabra_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPShouldForceFlee");

	AChupaCabra_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.FindNewLeaderForPack
// ()

void AChupaCabra_Character_BP_C::FindNewLeaderForPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.FindNewLeaderForPack");

	AChupaCabra_Character_BP_C_FindNewLeaderForPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPDoAttack");

	AChupaCabra_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidClassForPack
// ()
// Parameters:
// class AActor**                 joiningActor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::IsValidClassForPack(class AActor** joiningActor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsValidClassForPack");

	AChupaCabra_Character_BP_C_IsValidClassForPack_Params params;
	params.joiningActor = joiningActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPackLeader
// ()
// Parameters:
// bool                           bIsLeader                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::IsPackLeader(bool* bIsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.IsPackLeader");

	AChupaCabra_Character_BP_C_IsPackLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLeader != nullptr)
		*bIsLeader = params.bIsLeader;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveOut
// ()
// Parameters:
// bool                           FastDiveOut                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::CanDiveOut(bool FastDiveOut, bool* CanDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveOut");

	AChupaCabra_Character_BP_C_CanDiveOut_Params params;
	params.FastDiveOut = FastDiveOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDive != nullptr)
		*CanDive = params.CanDive;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateVisibilityAndCollision
// ()
// Parameters:
// bool                           isUnderground                  (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::UpdateVisibilityAndCollision(bool isUnderground)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UpdateVisibilityAndCollision");

	AChupaCabra_Character_BP_C_UpdateVisibilityAndCollision_Params params;
	params.isUnderground = isUnderground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChupaCabra_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintCanAttack");

	AChupaCabra_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveOut
// ()
// Parameters:
// bool                           shouldOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           shouldOutFast                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ShouldDiveOut(bool* shouldOut, bool* shouldOutFast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveOut");

	AChupaCabra_Character_BP_C_ShouldDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldOut != nullptr)
		*shouldOut = params.shouldOut;
	if (shouldOutFast != nullptr)
		*shouldOutFast = params.shouldOutFast;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveIn
// ()
// Parameters:
// bool                           shouldIn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ShouldDiveIn(bool* shouldIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ShouldDiveIn");

	AChupaCabra_Character_BP_C_ShouldDiveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldIn != nullptr)
		*shouldIn = params.shouldIn;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveIn
// ()
// Parameters:
// bool                           isFastDive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canDoDive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::CanDiveIn(bool isFastDive, bool* canDoDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.CanDiveIn");

	AChupaCabra_Character_BP_C_CanDiveIn_Params params;
	params.isFastDive = isFastDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canDoDive != nullptr)
		*canDoDive = params.canDoDive;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetDinoCollisionState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::SetDinoCollisionState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.SetDinoCollisionState");

	AChupaCabra_Character_BP_C_SetDinoCollisionState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTimerServer
// ()

void AChupaCabra_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTimerServer");

	AChupaCabra_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UserConstructionScript
// ()

void AChupaCabra_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.UserConstructionScript");

	AChupaCabra_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__FinishedFunc
// ()

void AChupaCabra_Character_BP_C::ChargeVeinsTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__FinishedFunc");

	AChupaCabra_Character_BP_C_ChargeVeinsTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__UpdateFunc
// ()

void AChupaCabra_Character_BP_C::ChargeVeinsTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVeinsTimeline__UpdateFunc");

	AChupaCabra_Character_BP_C_ChargeVeinsTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Interface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Trigger Multicast Interface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Interface Check for Batteries and Update Multicast
// ()

void AChupaCabra_Character_BP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Interface Check for Batteries and Update Multicast");

	AChupaCabra_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean MulticastInterface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Double MulticastInterface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Boolean Interface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventDoubleInterface");

	AChupaCabra_Character_BP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntInterface");

	AChupaCabra_Character_BP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventIntMulticastInterface");

	AChupaCabra_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveBeginPlay
// ()

void AChupaCabra_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ReceiveBeginPlay");

	AChupaCabra_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn
// ()
// Parameters:
// bool                           fastDiveIn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            forceAnimIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::DiveIn(bool fastDiveIn, int forceAnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn");

	AChupaCabra_Character_BP_C_DiveIn_Params params;
	params.fastDiveIn = fastDiveIn;
	params.forceAnimIndex = forceAnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveIn
// ()
// Parameters:
// bool                           wasFast                        (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::OnDiveIn(bool wasFast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveIn");

	AChupaCabra_Character_BP_C_OnDiveIn_Params params;
	params.wasFast = wasFast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut
// ()
// Parameters:
// bool                           FastDiveOut                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            forceAnimIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::DiveOut(bool FastDiveOut, int forceAnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut");

	AChupaCabra_Character_BP_C_DiveOut_Params params;
	params.FastDiveOut = FastDiveOut;
	params.forceAnimIndex = forceAnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveOut
// ()

void AChupaCabra_Character_BP_C::OnDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnDiveOut");

	AChupaCabra_Character_BP_C_OnDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveIn
// ()
// Parameters:
// bool                           fastDiveIn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            forceAnimIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInitialBury                  (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::TryDiveIn(bool fastDiveIn, int forceAnimIndex, bool isInitialBury)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveIn");

	AChupaCabra_Character_BP_C_TryDiveIn_Params params;
	params.fastDiveIn = fastDiveIn;
	params.forceAnimIndex = forceAnimIndex;
	params.isInitialBury = isInitialBury;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveOut
// ()
// Parameters:
// bool                           FastDiveOut                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            forceAnimIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::TryDiveOut(bool FastDiveOut, int forceAnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TryDiveOut");

	AChupaCabra_Character_BP_C_TryDiveOut_Params params;
	params.FastDiveOut = FastDiveOut;
	params.forceAnimIndex = forceAnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AChupaCabra_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPUnstasis
// ()

void AChupaCabra_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPUnstasis");

	AChupaCabra_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopChargeEffects
// ()

void AChupaCabra_Character_BP_C::StopChargeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopChargeEffects");

	AChupaCabra_Character_BP_C_StopChargeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawArrow
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::DrawArrow(const struct FVector& NewParam, const struct FVector& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawArrow");

	AChupaCabra_Character_BP_C_DrawArrow_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawSphere
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::DrawSphere(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DrawSphere");

	AChupaCabra_Character_BP_C_DrawSphere_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn_FailSafe
// ()

void AChupaCabra_Character_BP_C::DiveIn_FailSafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveIn_FailSafe");

	AChupaCabra_Character_BP_C_DiveIn_FailSafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut_FailSafe
// ()

void AChupaCabra_Character_BP_C::DiveOut_FailSafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DiveOut_FailSafe");

	AChupaCabra_Character_BP_C_DiveOut_FailSafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySpawnSuperminion
// ()

void AChupaCabra_Character_BP_C::TrySpawnSuperminion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.TrySpawnSuperminion");

	AChupaCabra_Character_BP_C_TrySpawnSuperminion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTriggerStasisEvent
// ()

void AChupaCabra_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.BPTriggerStasisEvent");

	AChupaCabra_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals_Multicast
// ()

void AChupaCabra_Character_BP_C::StartDissolveVisuals_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals_Multicast");

	AChupaCabra_Character_BP_C_StartDissolveVisuals_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopDissolveVisuals_Multicast
// ()

void AChupaCabra_Character_BP_C::StopDissolveVisuals_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopDissolveVisuals_Multicast");

	AChupaCabra_Character_BP_C_StopDissolveVisuals_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DespawnDissolveParticles
// ()

void AChupaCabra_Character_BP_C::DespawnDissolveParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DespawnDissolveParticles");

	AChupaCabra_Character_BP_C_DespawnDissolveParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChupacabraSleeped
// ()

void AChupaCabra_Character_BP_C::OnChupacabraSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnChupacabraSleeped");

	AChupaCabra_Character_BP_C_OnChupacabraSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PreDiveOut
// ()

void AChupaCabra_Character_BP_C::PreDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.PreDiveOut");

	AChupaCabra_Character_BP_C_PreDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Set Charge Variable Interface");

	AChupaCabra_Character_BP_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopCringeAnim
// ()

void AChupaCabra_Character_BP_C::StopCringeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopCringeAnim");

	AChupaCabra_Character_BP_C_StopCringeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.NetPlayDiveOutAnim
// ()
// Parameters:
// class UAnimMontage*            AnimToPlay                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::NetPlayDiveOutAnim(class UAnimMontage* AnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.NetPlayDiveOutAnim");

	AChupaCabra_Character_BP_C_NetPlayDiveOutAnim_Params params;
	params.AnimToPlay = AnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroyOnInactivity
// ()

void AChupaCabra_Character_BP_C::DestroyOnInactivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.DestroyOnInactivity");

	AChupaCabra_Character_BP_C_DestroyOnInactivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float");

	AChupaCabra_Character_BP_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEvent_Float_Multicast");

	AChupaCabra_Character_BP_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ChargeVariableEventFloatInterface");

	AChupaCabra_Character_BP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.Charge Variable Event Float Multicast Interface");

	AChupaCabra_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals
// ()

void AChupaCabra_Character_BP_C::StartDissolveVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StartDissolveVisuals");

	AChupaCabra_Character_BP_C_StartDissolveVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopTempCringe
// ()

void AChupaCabra_Character_BP_C::StopTempCringe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopTempCringe");

	AChupaCabra_Character_BP_C_StopTempCringe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn_Multicast
// ()

void AChupaCabra_Character_BP_C::StopSuperminionSpawn_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.StopSuperminionSpawn_Multicast");

	AChupaCabra_Character_BP_C_StopSuperminionSpawn_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnSuperminionAnimFinished
// ()

void AChupaCabra_Character_BP_C::OnSuperminionAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.OnSuperminionAnimFinished");

	AChupaCabra_Character_BP_C_OnSuperminionAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ExecuteUbergraph_ChupaCabra_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_C::ExecuteUbergraph_ChupaCabra_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP.ChupaCabra_Character_BP_C.ExecuteUbergraph_ChupaCabra_Character_BP");

	AChupaCabra_Character_BP_C_ExecuteUbergraph_ChupaCabra_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
