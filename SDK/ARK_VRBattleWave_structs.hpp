#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_VRBattleWeightedBurst_classes.hpp"
#include "ARK_ShooterGame_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VRBattleWave.VRBattleWave
// 0x003B
struct FVRBattleWave
{
	float                                              FastestSpawnInterval_66_9DCF755B427FE5C9DDB24EB3BD1CECFD; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowestSpawnInterval_71_BBE6FE494C44A4604BB7B9986204936C; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartDroppingCodeKeysAtKillCount_93_163608E547E4C1630765DF836F6EDBCA;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeKeyDropChance_94_84B3FCAD478757345D97DB9A823E7DCA;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CodeKeysRequiredToPass_95_A9899E66472F02079D0789AD3F1F148A;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BurstCount_43_6A1291A24A0F111108CF09927077FEB4;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinDesiredAlive_77_D29DBC59458DCDF6AC334391E5AFC8B7;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDesiredAlive_78_4DDCA03F46C690A7A10719BEEFE8F9DA;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PauseSpawningWhenMaxDesiredAliveReached_83_554AE5F84AA07F3C21793FB964576A95;// 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MaxConcurrentAttackersPerTarget_70_68C2A14C4A843745409D12AA8F7BDDAD;// 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVRBattleWeightedBurst>              WeightedBursts_76_66F3AD0F4529D64CD2921E85BCBAE76E;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESimpleCurve>                          InitialSpawnCurve_86_E48327354DA24C4CD83AF6A1E323F452;    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          BelowMinDesiredAliveSpawnCurve_89_36F2F141441F016E83CB28A1CA67D639;// 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          AboveMinDesiredAliveSpawnCurve_92_461BFA654ED768EFDDB8DF8CB44854D3;// 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
