// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ToolTipWidgetMissionDispatcher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetMissionDispatcher.ToolTipWidgetMissionDispatcher_C.ExecuteUbergraph_ToolTipWidgetMissionDispatcher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetMissionDispatcher_C::ExecuteUbergraph_ToolTipWidgetMissionDispatcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetMissionDispatcher.ToolTipWidgetMissionDispatcher_C.ExecuteUbergraph_ToolTipWidgetMissionDispatcher");

	UToolTipWidgetMissionDispatcher_C_ExecuteUbergraph_ToolTipWidgetMissionDispatcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
