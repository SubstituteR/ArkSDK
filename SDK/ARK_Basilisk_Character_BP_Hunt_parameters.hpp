#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basilisk_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.BPTimerServer
struct ABasilisk_Character_BP_Hunt_C_BPTimerServer_Params
{
};

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ForceDiveEnd
struct ABasilisk_Character_BP_Hunt_C_ForceDiveEnd_Params
{
};

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.DiveEnd
struct ABasilisk_Character_BP_Hunt_C_DiveEnd_Params
{
};

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.FindNearbyEggs
struct ABasilisk_Character_BP_Hunt_C_FindNearbyEggs_Params
{
	bool*                                              StartSeeking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.UserConstructionScript
struct ABasilisk_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ExecuteUbergraph_Basilisk_Character_BP_Hunt
struct ABasilisk_Character_BP_Hunt_C_ExecuteUbergraph_Basilisk_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
