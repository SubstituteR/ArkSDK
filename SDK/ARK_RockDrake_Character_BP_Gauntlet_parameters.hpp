#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockDrake_Character_BP_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RockDrake_Character_BP_Gauntlet.RockDrake_Character_BP_Gauntlet_C.Can Use Camo
struct ARockDrake_Character_BP_Gauntlet_C_Can_Use_Camo_Params
{
	bool*                                              isForStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP_Gauntlet.RockDrake_Character_BP_Gauntlet_C.UserConstructionScript
struct ARockDrake_Character_BP_Gauntlet_C_UserConstructionScript_Params
{
};

// Function RockDrake_Character_BP_Gauntlet.RockDrake_Character_BP_Gauntlet_C.ExecuteUbergraph_RockDrake_Character_BP_Gauntlet
struct ARockDrake_Character_BP_Gauntlet_C_ExecuteUbergraph_RockDrake_Character_BP_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
