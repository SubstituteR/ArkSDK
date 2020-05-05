#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjSpear_Flame_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.OnExplode
struct AProjSpear_Flame_Gauntlet_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.UserConstructionScript
struct AProjSpear_Flame_Gauntlet_C_UserConstructionScript_Params
{
};

// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.ExecuteUbergraph_ProjSpear_Flame_Gauntlet
struct AProjSpear_Flame_Gauntlet_C_ExecuteUbergraph_ProjSpear_Flame_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
