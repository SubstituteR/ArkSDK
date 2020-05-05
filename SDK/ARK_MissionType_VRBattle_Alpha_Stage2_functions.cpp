// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Alpha_Stage2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Alpha_Stage2.MissionType_VRBattle_Alpha_Stage2_C.UserConstructionScript
// ()

void AMissionType_VRBattle_Alpha_Stage2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_Stage2.MissionType_VRBattle_Alpha_Stage2_C.UserConstructionScript");

	AMissionType_VRBattle_Alpha_Stage2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Alpha_Stage2.MissionType_VRBattle_Alpha_Stage2_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Alpha_Stage2_C::ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_Stage2.MissionType_VRBattle_Alpha_Stage2_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage2");

	AMissionType_VRBattle_Alpha_Stage2_C_ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
