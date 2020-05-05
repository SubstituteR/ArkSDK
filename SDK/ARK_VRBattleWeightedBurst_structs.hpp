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

// UserDefinedStruct VRBattleWeightedBurst.VRBattleWeightedBurst
// 0x0018
struct FVRBattleWeightedBurst
{
	float                                              RandomWeight_7_EAA4FA8E4D66A77888E774909C571DDA;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UVRBattleGroupDataAsset*>             VRBattleGroupsToSpawn_14_493A59C34859C5FF92D2CDB5D4C9C2FB;// 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
