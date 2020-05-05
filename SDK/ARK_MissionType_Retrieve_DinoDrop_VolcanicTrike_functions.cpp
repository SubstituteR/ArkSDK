// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_VolcanicTrike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C.UserConstructionScript
// ()

void AMissionType_Retrieve_DinoDrop_VolcanicTrike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C.UserConstructionScript");

	AMissionType_Retrieve_DinoDrop_VolcanicTrike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_VolcanicTrike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_VolcanicTrike_C::ExecuteUbergraph_MissionType_Retrieve_DinoDrop_VolcanicTrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_VolcanicTrike");

	AMissionType_Retrieve_DinoDrop_VolcanicTrike_C_ExecuteUbergraph_MissionType_Retrieve_DinoDrop_VolcanicTrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
