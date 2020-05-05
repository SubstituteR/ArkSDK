#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Turtle_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BP_ForceAllowAddBuff
struct ATurtle_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.AllowGrappling
struct ATurtle_Character_BP_Escort_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.DelayEscape
struct ATurtle_Character_BP_Escort_C_DelayEscape_Params
{
};

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BPDisplayTamedMessage
struct ATurtle_Character_BP_Escort_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.UserConstructionScript
struct ATurtle_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.ExecuteUbergraph_Turtle_Character_BP_Escort
struct ATurtle_Character_BP_Escort_C_ExecuteUbergraph_Turtle_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
