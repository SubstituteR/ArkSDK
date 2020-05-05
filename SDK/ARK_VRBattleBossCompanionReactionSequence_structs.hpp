#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_VRBattlePhaseEvent_classes.hpp"
#include "ARK_VRBattleCompanionData_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRBattleBossCompanionReactionSequence.VRBattleBossCompanionReactionSequence
// 0x0030
struct FVRBattleBossCompanionReactionSequence
{
	class FString                                      Name_8_046C88D74F99D72292602CB678788B89;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EVRBattlePhaseEvent>                   PhaseEvent_14_0FEB2DD44614C632F8D3BB93E64B8162;           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       PhaseName_17_20FC4AAF4D9622830F81F48F7E96C67F;            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay_20_1D9FCBE744DC64FEFEC83988BD779E67;           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVRBattleCompanionData>              Reactions_3_81891AE64848A6329E22DE932B2CC030;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
