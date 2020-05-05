// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_LunarReaper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_DinoDrop_LunarReaper.MissionType_Retrieve_DinoDrop_LunarReaper_C.UserConstructionScript
// ()

void AMissionType_Retrieve_DinoDrop_LunarReaper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_LunarReaper.MissionType_Retrieve_DinoDrop_LunarReaper_C.UserConstructionScript");

	AMissionType_Retrieve_DinoDrop_LunarReaper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop_LunarReaper.MissionType_Retrieve_DinoDrop_LunarReaper_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_LunarReaper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_LunarReaper_C::ExecuteUbergraph_MissionType_Retrieve_DinoDrop_LunarReaper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_LunarReaper.MissionType_Retrieve_DinoDrop_LunarReaper_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_LunarReaper");

	AMissionType_Retrieve_DinoDrop_LunarReaper_C_ExecuteUbergraph_MissionType_Retrieve_DinoDrop_LunarReaper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
