#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BPGetHUDElements
struct ABuff_DebugMissionWeapon_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.UserConstructionScript
struct ABuff_DebugMissionWeapon_C_UserConstructionScript_Params
{
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.InpActEvt_F10_K2Node_InputKeyEvent_64
struct ABuff_DebugMissionWeapon_C_InpActEvt_F10_K2Node_InputKeyEvent_64_Params
{
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickClient
struct ABuff_DebugMissionWeapon_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ReceiveBeginPlay
struct ABuff_DebugMissionWeapon_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.BuffTickServer
struct ABuff_DebugMissionWeapon_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DebugMissionWeapon.Buff_DebugMissionWeapon_C.ExecuteUbergraph_Buff_DebugMissionWeapon
struct ABuff_DebugMissionWeapon_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
