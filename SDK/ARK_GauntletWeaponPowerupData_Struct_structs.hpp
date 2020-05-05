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

// UserDefinedStruct GauntletWeaponPowerupData_Struct.GauntletWeaponPowerupData_Struct
// 0x0044
struct FGauntletWeaponPowerupData_Struct
{
	TArray<class UClass*>                              ItemsToSelectFrom_3_8F6F21C04C95E51EB01B5C950BF8BF9B;     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              AmmoForSelectedItems_20_7A5CFA6F4E50F5B762A59EA5A0F03D3D; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ForTriggersWithOrder_12_2BE102E345F7CF5EA07DD78EE68BCE27; // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OnWaveIndex_11_23013FC74976C45F1B28F495F11010B5;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AfterWeaponAcquiredDelayTime_15_30C5F74A4E7EC3E529752FA1FE923500;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
