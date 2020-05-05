#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_ShooterGame_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRBattleCompanionData.VRBattleCompanionData
// 0x0030
struct FVRBattleCompanionData
{
	class UAnimMontage*                                BossAnimation_9_7584D1F24E064F6C3F7075B7EFEE5AD9;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBossLine__16_EC517B6B451FB09E60DA5CB175539769;          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> SoundWaveTexturePair_23_60190B5A494B437369D7D8A8DB2A9FAA; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SoundCuePath_22_68D41DAB40407A5CB5E740973DE48102;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
