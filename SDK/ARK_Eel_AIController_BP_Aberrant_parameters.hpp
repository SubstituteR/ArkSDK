#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Eel_AIController_BP_Aberrant_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.BPGetTargetingDesire
struct AEel_AIController_BP_Aberrant_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.UserConstructionScript
struct AEel_AIController_BP_Aberrant_C_UserConstructionScript_Params
{
};

// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.ExecuteUbergraph_Eel_AIController_BP_Aberrant
struct AEel_AIController_BP_Aberrant_C_ExecuteUbergraph_Eel_AIController_BP_Aberrant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif