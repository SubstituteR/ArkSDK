// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionDispatcher_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C.UserConstructionScript
// ()

void AMissionDispatcher_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C.UserConstructionScript");

	AMissionDispatcher_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C.ExecuteUbergraph_MissionDispatcher_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_Gauntlet_C::ExecuteUbergraph_MissionDispatcher_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C.ExecuteUbergraph_MissionDispatcher_Gauntlet");

	AMissionDispatcher_Gauntlet_C_ExecuteUbergraph_MissionDispatcher_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
