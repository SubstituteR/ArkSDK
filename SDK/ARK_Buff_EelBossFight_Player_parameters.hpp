#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_EelBossFight_Player_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.BPGetHUDElements
struct ABuff_EelBossFight_Player_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.UserConstructionScript
struct ABuff_EelBossFight_Player_C_UserConstructionScript_Params
{
};

// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.ExecuteUbergraph_Buff_EelBossFight_Player
struct ABuff_EelBossFight_Player_C_ExecuteUbergraph_Buff_EelBossFight_Player_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
