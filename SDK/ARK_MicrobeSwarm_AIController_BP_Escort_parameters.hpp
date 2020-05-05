#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarm_AIController_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.UserConstructionScript
struct AMicrobeSwarm_AIController_BP_Escort_C_UserConstructionScript_Params
{
};

// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ReceiveTick
struct AMicrobeSwarm_AIController_BP_Escort_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarm_AIController_BP_Escort.MicrobeSwarm_AIController_BP_Escort_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort
struct AMicrobeSwarm_AIController_BP_Escort_C_ExecuteUbergraph_MicrobeSwarm_AIController_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
