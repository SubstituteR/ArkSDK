#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HUDPointsOfInterestContainerWidgetBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C
// 0x0000 (0x0540 - 0x0540)
class UHUDPointsOfInterestContainerWidgetBP_C : public UHUDPointsOfInterestContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDPointsOfInterestContainerWidgetBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
