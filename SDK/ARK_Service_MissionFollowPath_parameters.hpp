#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Service_MissionFollowPath_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_MissionFollowPath.Service_MissionFollowPath_C.ReceiveTick
struct UService_MissionFollowPath_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_MissionFollowPath.Service_MissionFollowPath_C.ExecuteUbergraph_Service_MissionFollowPath
struct UService_MissionFollowPath_C_ExecuteUbergraph_Service_MissionFollowPath_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
