#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ToolTipWidgetMissionDispatcher_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetMissionDispatcher.ToolTipWidgetMissionDispatcher_C
// 0x0000 (0x02F8 - 0x02F8)
class UToolTipWidgetMissionDispatcher_C : public UMissionDispatcherToolTipWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetMissionDispatcher.ToolTipWidgetMissionDispatcher_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetMissionDispatcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
