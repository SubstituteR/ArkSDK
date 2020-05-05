#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_AIController_BP_Retrieve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.BPGetTargetingDesire
struct APurlovia_AIController_BP_Retrieve_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.UserConstructionScript
struct APurlovia_AIController_BP_Retrieve_C_UserConstructionScript_Params
{
};

// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.ExecuteUbergraph_Purlovia_AIController_BP_Retrieve
struct APurlovia_AIController_BP_Retrieve_C_ExecuteUbergraph_Purlovia_AIController_BP_Retrieve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
