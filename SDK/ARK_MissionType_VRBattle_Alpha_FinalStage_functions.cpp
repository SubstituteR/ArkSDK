// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Alpha_FinalStage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Alpha_FinalStage.MissionType_VRBattle_Alpha_FinalStage_C.UserConstructionScript
// ()

void AMissionType_VRBattle_Alpha_FinalStage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_FinalStage.MissionType_VRBattle_Alpha_FinalStage_C.UserConstructionScript");

	AMissionType_VRBattle_Alpha_FinalStage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Alpha_FinalStage.MissionType_VRBattle_Alpha_FinalStage_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_FinalStage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Alpha_FinalStage_C::ExecuteUbergraph_MissionType_VRBattle_Alpha_FinalStage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_FinalStage.MissionType_VRBattle_Alpha_FinalStage_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_FinalStage");

	AMissionType_VRBattle_Alpha_FinalStage_C_ExecuteUbergraph_MissionType_VRBattle_Alpha_FinalStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
