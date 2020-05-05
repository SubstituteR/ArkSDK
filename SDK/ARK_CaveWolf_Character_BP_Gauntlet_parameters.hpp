#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CaveWolf_Character_BP_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaveWolf_Character_BP_Gauntlet.CaveWolf_Character_BP_Gauntlet_C.Can Join Pack
struct ACaveWolf_Character_BP_Gauntlet_C_Can_Join_Pack_Params
{
	bool                                               Can_Join;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP_Gauntlet.CaveWolf_Character_BP_Gauntlet_C.UserConstructionScript
struct ACaveWolf_Character_BP_Gauntlet_C_UserConstructionScript_Params
{
};

// Function CaveWolf_Character_BP_Gauntlet.CaveWolf_Character_BP_Gauntlet_C.ExecuteUbergraph_CaveWolf_Character_BP_Gauntlet
struct ACaveWolf_Character_BP_Gauntlet_C_ExecuteUbergraph_CaveWolf_Character_BP_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
