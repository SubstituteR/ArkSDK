#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum VRBattlePhaseEnum.VRBattlePhaseEnum
enum class EVRBattlePhaseEnum : uint8_t
{
	VRBattlePhaseEnum__NewEnumerator0 = 0,
	VRBattlePhaseEnum__NewEnumerator1 = 1,
	VRBattlePhaseEnum__NewEnumerator2 = 2,
	VRBattlePhaseEnum__NewEnumerator4 = 3,
	VRBattlePhaseEnum__NewEnumerator6 = 4,
	VRBattlePhaseEnum__NewEnumerator7 = 5,
	VRBattlePhaseEnum__VRBattlePhaseEnum_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
