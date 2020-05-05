#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ptero_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C.BP_ForceAllowAddBuff
struct APtero_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C.AllowGrappling
struct APtero_Character_BP_Escort_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C.BPDisplayTamedMessage
struct APtero_Character_BP_Escort_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C.UserConstructionScript
struct APtero_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C.ExecuteUbergraph_Ptero_Character_BP_Escort
struct APtero_Character_BP_Escort_C_ExecuteUbergraph_Ptero_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
