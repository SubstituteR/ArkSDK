#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Sport_Base.MissionType_Sport_Base_C.BPOverrideMissionTimerColor
struct AMissionType_Sport_Base_C_BPOverrideMissionTimerColor_Params
{
	class AShooterPlayerController**                   ShooterContr;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TimerOverrideColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Sport_Base.MissionType_Sport_Base_C.UserConstructionScript
struct AMissionType_Sport_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_Sport_Base.MissionType_Sport_Base_C.ExecuteUbergraph_MissionType_Sport_Base
struct AMissionType_Sport_Base_C_ExecuteUbergraph_MissionType_Sport_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
