#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_VRMainBossBeamType_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRMainBossBeamSettings.VRMainBossBeamSettings
// 0x0008
struct FVRMainBossBeamSettings
{
	TEnumAsByte<EVRMainBossBeamType>                   BeamType_2_E78EA94546605BF43113DDAB6F88B5CC;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BeamWeight_14_F9C0E751450F73DC35E58C93C07CED42;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
