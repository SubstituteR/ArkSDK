#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionRequirementEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionRequirementEntry.MissionRequirementEntry_C
// 0x0010 (0x0278 - 0x0268)
class UMissionRequirementEntry_C : public UMissionRequirementEntryWidget
{
public:
	class UImage*                                      RequirementNegativeIcon;                                  // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      RequirementPositiveIcon;                                  // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionRequirementEntry.MissionRequirementEntry_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionRequirementEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
