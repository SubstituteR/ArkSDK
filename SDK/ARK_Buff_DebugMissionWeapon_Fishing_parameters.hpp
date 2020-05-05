#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_Fishing_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.BPGetHUDElements
struct ABuff_DebugMissionWeapon_Fishing_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.UserConstructionScript
struct ABuff_DebugMissionWeapon_Fishing_C_UserConstructionScript_Params
{
};

// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing
struct ABuff_DebugMissionWeapon_Fishing_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
