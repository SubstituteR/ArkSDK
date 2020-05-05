#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_VRBattleWave_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRBattlePhase.VRBattlePhase
// 0x0010
struct FVRBattlePhase
{
	TArray<struct FVRBattleWave>                       Waves_17_51173F5547C1AD1770AE4494A166DD2D;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
