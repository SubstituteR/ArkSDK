#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPPostInitializeComponents
struct AEelMinion_Character_BP_C_BPPostInitializeComponents_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPTimerServer
struct AEelMinion_Character_BP_C_BPTimerServer_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BP_OnSetDeath
struct AEelMinion_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.TickSounds
struct AEelMinion_Character_BP_C_TickSounds_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.StartTailProjectiles
struct AEelMinion_Character_BP_C_StartTailProjectiles_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AEelMinion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.TurnOffAoe
struct AEelMinion_Character_BP_C_TurnOffAoe_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.OnRep_IsDoingAoe
struct AEelMinion_Character_BP_C_OnRep_IsDoingAoe_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintCanAttack
struct AEelMinion_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.UserConstructionScript
struct AEelMinion_Character_BP_C_UserConstructionScript_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__FinishedFunc
struct AEelMinion_Character_BP_C_Timeline_AOEAttack__FinishedFunc_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__UpdateFunc
struct AEelMinion_Character_BP_C_Timeline_AOEAttack__UpdateFunc_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Start_AOEAttack
struct AEelMinion_Character_BP_C_Start_AOEAttack_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.ReceiveBeginPlay
struct AEelMinion_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.ExecuteUbergraph_EelMinion_Character_BP
struct AEelMinion_Character_BP_C_ExecuteUbergraph_EelMinion_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
