#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_AIController_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.BPGetTargetingDesire
struct APteroteuthis_AIController_BP_Escort_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.UserConstructionScript
struct APteroteuthis_AIController_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort
struct APteroteuthis_AIController_BP_Escort_C_ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
