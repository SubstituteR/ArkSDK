// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_EelBossFight_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_EelBossFight_Easy.MissionType_EelBossFight_Easy_C.UserConstructionScript
// ()

void AMissionType_EelBossFight_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight_Easy.MissionType_EelBossFight_Easy_C.UserConstructionScript");

	AMissionType_EelBossFight_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight_Easy.MissionType_EelBossFight_Easy_C.ExecuteUbergraph_MissionType_EelBossFight_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_Easy_C::ExecuteUbergraph_MissionType_EelBossFight_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight_Easy.MissionType_EelBossFight_Easy_C.ExecuteUbergraph_MissionType_EelBossFight_Easy");

	AMissionType_EelBossFight_Easy_C_ExecuteUbergraph_MissionType_EelBossFight_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
