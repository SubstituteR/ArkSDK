#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lightbug_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lightbug_AnimBlueprint.Lightbug_AnimBlueprint_C.BlueprintUpdateAnimation
struct ULightbug_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbug_AnimBlueprint.Lightbug_AnimBlueprint_C.ExecuteUbergraph_Lightbug_AnimBlueprint
struct ULightbug_AnimBlueprint_C_ExecuteUbergraph_Lightbug_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
