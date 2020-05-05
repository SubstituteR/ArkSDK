// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_MattePaintDayLightMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MattePaintDayLightMask.BP_MattePaintDayLightMask_C.UserConstructionScript
// ()

void ABP_MattePaintDayLightMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MattePaintDayLightMask.BP_MattePaintDayLightMask_C.UserConstructionScript");

	ABP_MattePaintDayLightMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MattePaintDayLightMask.BP_MattePaintDayLightMask_C.ExecuteUbergraph_BP_MattePaintDayLightMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MattePaintDayLightMask_C::ExecuteUbergraph_BP_MattePaintDayLightMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MattePaintDayLightMask.BP_MattePaintDayLightMask_C.ExecuteUbergraph_BP_MattePaintDayLightMask");

	ABP_MattePaintDayLightMask_C_ExecuteUbergraph_BP_MattePaintDayLightMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
