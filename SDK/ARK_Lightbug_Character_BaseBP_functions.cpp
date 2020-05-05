// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lightbug_Character_BaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.GetNumBatteries");

	ALightbug_Character_BaseBP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Get Charge Variable Interface");

	ALightbug_Character_BaseBP_C_Get_Charge_Variable_Interface_Params params;
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


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnMovementModeChangedNotify");

	ALightbug_Character_BaseBP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnSetFlight
// ()
// Parameters:
// bool*                          bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::BPOnSetFlight(bool* bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnSetFlight");

	ALightbug_Character_BaseBP_C_BPOnSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPDinoPostBeginPlay
// ()

void ALightbug_Character_BaseBP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPDinoPostBeginPlay");

	ALightbug_Character_BaseBP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBuff
// ()

void ALightbug_Character_BaseBP_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBuff");

	ALightbug_Character_BaseBP_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisLogic
// ()

void ALightbug_Character_BaseBP_C::UnstasisLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisLogic");

	ALightbug_Character_BaseBP_C_UnstasisLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTriggerStasisEvent
// ()

void ALightbug_Character_BaseBP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTriggerStasisEvent");

	ALightbug_Character_BaseBP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BP_OnSetDeath
// ()

void ALightbug_Character_BaseBP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BP_OnSetDeath");

	ALightbug_Character_BaseBP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPCharacterUnsleeped
// ()

void ALightbug_Character_BaseBP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPCharacterUnsleeped");

	ALightbug_Character_BaseBP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTimerNonDedicated
// ()

void ALightbug_Character_BaseBP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTimerNonDedicated");

	ALightbug_Character_BaseBP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateChargeLight
// ()

void ALightbug_Character_BaseBP_C::UpdateChargeLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateChargeLight");

	ALightbug_Character_BaseBP_C_UpdateChargeLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeManager
// ()

void ALightbug_Character_BaseBP_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeManager");

	ALightbug_Character_BaseBP_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALightbug_Character_BaseBP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTryMultiUse");

	ALightbug_Character_BaseBP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateMaterial Emissiveness
// ()

void ALightbug_Character_BaseBP_C::UpdateMaterial_Emissiveness()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateMaterial Emissiveness");

	ALightbug_Character_BaseBP_C_UpdateMaterial_Emissiveness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALightbug_Character_BaseBP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintCanAttack");

	ALightbug_Character_BaseBP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintDrawFloatingHUD");

	ALightbug_Character_BaseBP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UserConstructionScript
// ()

void ALightbug_Character_BaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UserConstructionScript");

	ALightbug_Character_BaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Interface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Trigger Multicast Interface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntInterface");

	ALightbug_Character_BaseBP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntMulticastInterface");

	ALightbug_Character_BaseBP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPUnstasis
// ()

void ALightbug_Character_BaseBP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPUnstasis");

	ALightbug_Character_BaseBP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Set Charge Variable Interface
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

void ALightbug_Character_BaseBP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Set Charge Variable Interface");

	ALightbug_Character_BaseBP_C_Set_Charge_Variable_Interface_Params params;
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


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CheckForBatteriesAndUpdate_Multicast
// ()

void ALightbug_Character_BaseBP_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CheckForBatteriesAndUpdate_Multicast");

	ALightbug_Character_BaseBP_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Interface Check for Batteries and Update Multicast
// ()

void ALightbug_Character_BaseBP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Interface Check for Batteries and Update Multicast");

	ALightbug_Character_BaseBP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ReceiveBeginPlay
// ()

void ALightbug_Character_BaseBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ReceiveBeginPlay");

	ALightbug_Character_BaseBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float_Multicast");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean Interface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventFloatInterface");

	ALightbug_Character_BaseBP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean_Multicast");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean MulticastInterface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Float Multicast Interface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Double_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double_Multicast");

	ALightbug_Character_BaseBP_C_ChargeVariableEvent_Double_Multicast_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventDoubleInterface");

	ALightbug_Character_BaseBP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Double MulticastInterface");

	ALightbug_Character_BaseBP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintAnimNotifyCustomEvent");

	ALightbug_Character_BaseBP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.OnChargeHarvested
// ()

void ALightbug_Character_BaseBP_C::OnChargeHarvested()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.OnChargeHarvested");

	ALightbug_Character_BaseBP_C_OnChargeHarvested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisInitialize_Multicast
// ()

void ALightbug_Character_BaseBP_C::UnstasisInitialize_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisInitialize_Multicast");

	ALightbug_Character_BaseBP_C_UnstasisInitialize_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeBuff
// ()

void ALightbug_Character_BaseBP_C::CreateChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeBuff");

	ALightbug_Character_BaseBP_C_CreateChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBufff_Multicast
// ()

void ALightbug_Character_BaseBP_C::DestroyChargeBufff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBufff_Multicast");

	ALightbug_Character_BaseBP_C_DestroyChargeBufff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ExecuteUbergraph_Lightbug_Character_BaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALightbug_Character_BaseBP_C::ExecuteUbergraph_Lightbug_Character_BaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ExecuteUbergraph_Lightbug_Character_BaseBP");

	ALightbug_Character_BaseBP_C_ExecuteUbergraph_Lightbug_Character_BaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
