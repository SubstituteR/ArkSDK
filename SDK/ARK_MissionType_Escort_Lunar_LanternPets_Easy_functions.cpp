// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Lunar_LanternPets_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Lunar_LanternPets_Easy.MissionType_Escort_Lunar_LanternPets_Easy_C.UserConstructionScript
// ()

void AMissionType_Escort_Lunar_LanternPets_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets_Easy.MissionType_Escort_Lunar_LanternPets_Easy_C.UserConstructionScript");

	AMissionType_Escort_Lunar_LanternPets_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets_Easy.MissionType_Escort_Lunar_LanternPets_Easy_C.ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_Easy_C::ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets_Easy.MissionType_Escort_Lunar_LanternPets_Easy_C.ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Easy");

	AMissionType_Escort_Lunar_LanternPets_Easy_C_ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
