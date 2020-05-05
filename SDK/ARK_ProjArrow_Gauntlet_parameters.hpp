#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArrow_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArrow_Gauntlet.ProjArrow_Gauntlet_C.OnExplode
struct AProjArrow_Gauntlet_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjArrow_Gauntlet.ProjArrow_Gauntlet_C.UserConstructionScript
struct AProjArrow_Gauntlet_C_UserConstructionScript_Params
{
};

// Function ProjArrow_Gauntlet.ProjArrow_Gauntlet_C.ExecuteUbergraph_ProjArrow_Gauntlet
struct AProjArrow_Gauntlet_C_ExecuteUbergraph_ProjArrow_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
