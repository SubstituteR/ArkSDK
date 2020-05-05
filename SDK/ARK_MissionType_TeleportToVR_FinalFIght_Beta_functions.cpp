// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_FinalFIght_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_TeleportToVR_FinalFIght_Beta.MissionType_TeleportToVR_FinalFIght_Beta_C.UserConstructionScript
// ()

void AMissionType_TeleportToVR_FinalFIght_Beta_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR_FinalFIght_Beta.MissionType_TeleportToVR_FinalFIght_Beta_C.UserConstructionScript");

	AMissionType_TeleportToVR_FinalFIght_Beta_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR_FinalFIght_Beta.MissionType_TeleportToVR_FinalFIght_Beta_C.ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_FinalFIght_Beta_C::ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR_FinalFIght_Beta.MissionType_TeleportToVR_FinalFIght_Beta_C.ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Beta");

	AMissionType_TeleportToVR_FinalFIght_Beta_C_ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
