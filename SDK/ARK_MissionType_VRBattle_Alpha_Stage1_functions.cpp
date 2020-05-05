// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Alpha_Stage1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Alpha_Stage1.MissionType_VRBattle_Alpha_Stage1_C.UserConstructionScript
// ()

void AMissionType_VRBattle_Alpha_Stage1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_Stage1.MissionType_VRBattle_Alpha_Stage1_C.UserConstructionScript");

	AMissionType_VRBattle_Alpha_Stage1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Alpha_Stage1.MissionType_VRBattle_Alpha_Stage1_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Alpha_Stage1_C::ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Alpha_Stage1.MissionType_VRBattle_Alpha_Stage1_C.ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage1");

	AMissionType_VRBattle_Alpha_Stage1_C_ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
