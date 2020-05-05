#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Moth_Character_BP_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Moth_Character_BP_Gauntlet.Moth_Character_BP_Gauntlet_C.ReceiveAnyDamage
struct AMoth_Character_BP_Gauntlet_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moth_Character_BP_Gauntlet.Moth_Character_BP_Gauntlet_C.BlueprintAnimNotifyCustomEvent
struct AMoth_Character_BP_Gauntlet_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moth_Character_BP_Gauntlet.Moth_Character_BP_Gauntlet_C.UserConstructionScript
struct AMoth_Character_BP_Gauntlet_C_UserConstructionScript_Params
{
};

// Function Moth_Character_BP_Gauntlet.Moth_Character_BP_Gauntlet_C.ExecuteUbergraph_Moth_Character_BP_Gauntlet
struct AMoth_Character_BP_Gauntlet_C_ExecuteUbergraph_Moth_Character_BP_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
