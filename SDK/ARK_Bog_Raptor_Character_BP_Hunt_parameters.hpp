#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Raptor_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bog_Raptor_Character_BP_Hunt.Bog_Raptor_Character_BP_Hunt_C.BlueprintAnimNotifyCustomEvent
struct ABog_Raptor_Character_BP_Hunt_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bog_Raptor_Character_BP_Hunt.Bog_Raptor_Character_BP_Hunt_C.UserConstructionScript
struct ABog_Raptor_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Bog_Raptor_Character_BP_Hunt.Bog_Raptor_Character_BP_Hunt_C.ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt
struct ABog_Raptor_Character_BP_Hunt_C_ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
