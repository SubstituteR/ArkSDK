#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ObeliskStatsPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C
// 0x0030 (0x05E8 - 0x05B8)
class UObeliskStatsPanel_C : public UStatsPanelWidget_Obelisk
{
public:
	class UStructureStatWidget_C*                      ArkDinoStat;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      ArkStorageStat;                                           // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RefreshArkButton;                                         // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      StorageStat;                                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TravelToAnotherServerButton;                              // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UploadCharacterDataButton;                                // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_ObeliskStatsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
