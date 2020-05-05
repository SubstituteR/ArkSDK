#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lightbug_Character_BaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.GetNumBatteries
struct ALightbug_Character_BaseBP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Get Charge Variable Interface
struct ALightbug_Character_BaseBP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnMovementModeChangedNotify
struct ALightbug_Character_BaseBP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPOnSetFlight
struct ALightbug_Character_BaseBP_C_BPOnSetFlight_Params
{
	bool*                                              bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPDinoPostBeginPlay
struct ALightbug_Character_BaseBP_C_BPDinoPostBeginPlay_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBuff
struct ALightbug_Character_BaseBP_C_DestroyChargeBuff_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisLogic
struct ALightbug_Character_BaseBP_C_UnstasisLogic_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTriggerStasisEvent
struct ALightbug_Character_BaseBP_C_BPTriggerStasisEvent_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BP_OnSetDeath
struct ALightbug_Character_BaseBP_C_BP_OnSetDeath_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPCharacterUnsleeped
struct ALightbug_Character_BaseBP_C_BPCharacterUnsleeped_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTimerNonDedicated
struct ALightbug_Character_BaseBP_C_BPTimerNonDedicated_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateChargeLight
struct ALightbug_Character_BaseBP_C_UpdateChargeLight_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeManager
struct ALightbug_Character_BaseBP_C_CreateChargeManager_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPTryMultiUse
struct ALightbug_Character_BaseBP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UpdateMaterial Emissiveness
struct ALightbug_Character_BaseBP_C_UpdateMaterial_Emissiveness_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintCanAttack
struct ALightbug_Character_BaseBP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintDrawFloatingHUD
struct ALightbug_Character_BaseBP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UserConstructionScript
struct ALightbug_Character_BaseBP_C_UserConstructionScript_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Interface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Trigger Multicast Interface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntInterface
struct ALightbug_Character_BaseBP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventIntMulticastInterface
struct ALightbug_Character_BaseBP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BPUnstasis
struct ALightbug_Character_BaseBP_C_BPUnstasis_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Set Charge Variable Interface
struct ALightbug_Character_BaseBP_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CheckForBatteriesAndUpdate_Multicast
struct ALightbug_Character_BaseBP_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Interface Check for Batteries and Update Multicast
struct ALightbug_Character_BaseBP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ReceiveBeginPlay
struct ALightbug_Character_BaseBP_C_ReceiveBeginPlay_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Float_Multicast
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean Interface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventFloatInterface
struct ALightbug_Character_BaseBP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Boolean_Multicast
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Boolean MulticastInterface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Float Multicast Interface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEvent_Double_Multicast
struct ALightbug_Character_BaseBP_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ChargeVariableEventDoubleInterface
struct ALightbug_Character_BaseBP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.Charge Variable Event Double MulticastInterface
struct ALightbug_Character_BaseBP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.BlueprintAnimNotifyCustomEvent
struct ALightbug_Character_BaseBP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.OnChargeHarvested
struct ALightbug_Character_BaseBP_C_OnChargeHarvested_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.UnstasisInitialize_Multicast
struct ALightbug_Character_BaseBP_C_UnstasisInitialize_Multicast_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.CreateChargeBuff
struct ALightbug_Character_BaseBP_C_CreateChargeBuff_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.DestroyChargeBufff_Multicast
struct ALightbug_Character_BaseBP_C_DestroyChargeBufff_Multicast_Params
{
};

// Function Lightbug_Character_BaseBP.Lightbug_Character_BaseBP_C.ExecuteUbergraph_Lightbug_Character_BaseBP
struct ALightbug_Character_BaseBP_C_ExecuteUbergraph_Lightbug_Character_BaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
