#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_VRMainBossBeamSettings_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRMainBossAttackStateInfo.VRMainBossAttackStateInfo
// 0x0020
struct FVRMainBossAttackStateInfo
{
	float                                              MinAttackInterval_15_59A805334423C70EAC6BF1A83EBB2E2A;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttackInterval_14_8A4C4D9D435DCA3778A1A8BCDC3B903E;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPctThreshold_9_FBF6702A44071309C018FDA695BA356B;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FVRMainBossBeamSettings>             AvailableBeamTypes_35_E0757C5C42719F33D4136F8BC0E0500C;   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
