#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_GauntletMission_PhaseSettings.STR_GauntletMission_PhaseSettings
// 0x000C
struct FSTR_GauntletMission_PhaseSettings
{
	int                                                MaxActiveDinos_10_DC4F500244AB4F2AFECBDB819A30EBE5;       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSpawnInterval_7_F3909E784F7FB3799E1F219A2D2192F7;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxActivePortals_9_6002D4B04CDF74A59E2EF38B2E8786FC;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
