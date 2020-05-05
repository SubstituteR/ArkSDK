// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_FinalFIght_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C.UserConstructionScript
// ()

void AMissionType_TeleportToVR_FinalFIght_Alpha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C.UserConstructionScript");

	AMissionType_TeleportToVR_FinalFIght_Alpha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C.ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_FinalFIght_Alpha_C::ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C.ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Alpha");

	AMissionType_TeleportToVR_FinalFIght_Alpha_C_ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
