#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_Struct_BiometricTrackingItem_classes.hpp"
#include "ARK_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_HuntPerPlayerData.Struct_HuntPerPlayerData
// 0x0058
struct FStruct_HuntPerPlayerData
{
	class AShooterCharacter*                           Player_4_D500040D4B684B22244576B361CB0228;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_BiometricTrackingItem>       BiometricTrackingData_9_2727CA3E4A8D0BB5D6137DBF849240C3; // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentIndicatorState_18_C3064DAC486B9EFA8CB6B6A959888148;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	double                                             LastSeenTargetTime_16_1EA27B6D4633577F6B870DB17B2B0FCA;   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsScanning_14_8FF7BBC3465673305ABCA49F26000C47;           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	double                                             LastRevealedTrackingTime_21_DFBD4F4149E2D716CEBB1FAABEAF9B65;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastDamagedTargetTime_24_DB6A50B540CDEDCB82BF7AA6721E453A;// 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastClosestSplineLocation_27_B26AF1014218D58E6F35679C8E3B375A;// 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    Controller_30_293CE94F4CE07BBD83AB9FA07681934D;           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
