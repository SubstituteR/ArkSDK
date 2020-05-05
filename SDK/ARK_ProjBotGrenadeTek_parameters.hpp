#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotGrenadeTek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.BPAttachedRootComponent
struct AProjBotGrenadeTek_C_BPAttachedRootComponent_Params
{
};

// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.UserConstructionScript
struct AProjBotGrenadeTek_C_UserConstructionScript_Params
{
};

// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.OnExplode
struct AProjBotGrenadeTek_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.ExecuteUbergraph_ProjBotGrenadeTek
struct AProjBotGrenadeTek_C_ExecuteUbergraph_ProjBotGrenadeTek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
