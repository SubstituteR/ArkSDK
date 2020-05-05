#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.GetNumBatteries
struct APteroteuthis_Char_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Get Charge Variable Interface
struct APteroteuthis_Char_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.IsActorInBlast
struct APteroteuthis_Char_BP_C_IsActorInBlast_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DirectionNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              degrees;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintAdjustOutputDamage
struct APteroteuthis_Char_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintCanAttack
struct APteroteuthis_Char_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldCancelDoAttack
struct APteroteuthis_Char_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerServer
struct APteroteuthis_Char_BP_C_BPTimerServer_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.OverrideRandomWanderLocation
struct APteroteuthis_Char_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldForceFlee
struct APteroteuthis_Char_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerNonDedicated
struct APteroteuthis_Char_BP_C_BPTimerNonDedicated_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPUnstasis
struct APteroteuthis_Char_BP_C_BPUnstasis_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Init
struct APteroteuthis_Char_BP_C_Init_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ReceiveBeginPlay
struct APteroteuthis_Char_BP_C_ReceiveBeginPlay_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.CreateChargeManager
struct APteroteuthis_Char_BP_C_CreateChargeManager_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.FindChargeLightTargetLocation
struct APteroteuthis_Char_BP_C_FindChargeLightTargetLocation_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.UserConstructionScript
struct APteroteuthis_Char_BP_C_UserConstructionScript_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Interface Check for Batteries and Update Multicast
struct APteroteuthis_Char_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean MulticastInterface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Float Multicast Interface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Double MulticastInterface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean Interface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventFloatInterface
struct APteroteuthis_Char_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventDoubleInterface
struct APteroteuthis_Char_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntInterface
struct APteroteuthis_Char_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntMulticastInterface
struct APteroteuthis_Char_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Set Charge Variable Interface
struct APteroteuthis_Char_BP_C_Set_Charge_Variable_Interface_Params
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

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Interface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Trigger Multicast Interface
struct APteroteuthis_Char_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent
struct APteroteuthis_Char_BP_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent_Multicast
struct APteroteuthis_Char_BP_C_ChargeVariableEvent_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.DisableChargeSoundAfterDelay
struct APteroteuthis_Char_BP_C_DisableChargeSoundAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ExecuteUbergraph_Pteroteuthis_Char_BP
struct APteroteuthis_Char_BP_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
