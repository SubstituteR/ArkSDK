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

// UserDefinedStruct Struct_DelayedCheckpointData.Struct_DelayedCheckpointData
// 0x0020
struct FStruct_DelayedCheckpointData
{
	class AShooterPlayerController*                    Controller_3_53EA7E064AFD128360D293BE0D8EE082;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NextCheckpointIndex_10_3AB104A74332B71ACB05FDBA5197A1D1;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AMissionTrigger_Retrieve_Checkpoint_C*       Checkpoint_13_693CEA074585407A5B9425AF791241B9;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTimeUntilNextCheckpoint_20_A05F3D7940C3689559872F97B0935253;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTimeUntilDinoSpawn_22_E5F636F345DFCDB644FB9FA1E3703BB4;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
