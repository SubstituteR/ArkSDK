#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPGetHUDElements
struct ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPServerHandleNetExecCommand
struct ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BuffTickClient
struct ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.UserConstructionScript
struct ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_UserConstructionScript_Params
{
};

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated
struct ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
