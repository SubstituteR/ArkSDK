#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.Can Fish Class Be Caught
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_Can_Fish_Class_Be_Caught_Params
{
	class UClass**                                     Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.GetPerPlayerWorldIndicators
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.OnThrottledServerTick
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.UserConstructionScript
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_UserConstructionScript_Params
{
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.PhaseStart
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_PhaseStart_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
