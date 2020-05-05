#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Salmon_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPCanNotifyTeamAggroAI
struct ASalmon_Character_BP_Escort_C_BPCanNotifyTeamAggroAI_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.UserConstructionScript
struct ASalmon_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPDinoPostBeginPlay
struct ASalmon_Character_BP_Escort_C_BPDinoPostBeginPlay_Params
{
};

// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.ExecuteUbergraph_Salmon_Character_BP_Escort
struct ASalmon_Character_BP_Escort_C_ExecuteUbergraph_Salmon_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
