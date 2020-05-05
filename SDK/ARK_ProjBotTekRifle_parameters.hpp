#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotTekRifle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjBotTekRifle.ProjBotTekRifle_C.BPIgnoreRadialDamageVictim
struct AProjBotTekRifle_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjBotTekRifle.ProjBotTekRifle_C.UserConstructionScript
struct AProjBotTekRifle_C_UserConstructionScript_Params
{
};

// Function ProjBotTekRifle.ProjBotTekRifle_C.ReceiveBeginPlay
struct AProjBotTekRifle_C_ReceiveBeginPlay_Params
{
};

// Function ProjBotTekRifle.ProjBotTekRifle_C.OnExplode
struct AProjBotTekRifle_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjBotTekRifle.ProjBotTekRifle_C.ExecuteUbergraph_ProjBotTekRifle
struct AProjBotTekRifle_C_ExecuteUbergraph_ProjBotTekRifle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
