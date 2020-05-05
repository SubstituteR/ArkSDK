#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Golem_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.UserConstructionScript
struct AVolcano_Golem_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.BlueprintAnimNotifyCustomEvent
struct AVolcano_Golem_Character_BP_Hunt_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ReceiveBeginPlay
struct AVolcano_Golem_Character_BP_Hunt_C_ReceiveBeginPlay_Params
{
};

// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt
struct AVolcano_Golem_Character_BP_Hunt_C_ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
