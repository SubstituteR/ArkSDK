// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_LavaLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Hunt_LavaLizard.MissionType_Hunt_LavaLizard_C.UserConstructionScript
// ()

void AMissionType_Hunt_LavaLizard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_LavaLizard.MissionType_Hunt_LavaLizard_C.UserConstructionScript");

	AMissionType_Hunt_LavaLizard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt_LavaLizard.MissionType_Hunt_LavaLizard_C.ExecuteUbergraph_MissionType_Hunt_LavaLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_LavaLizard_C::ExecuteUbergraph_MissionType_Hunt_LavaLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_LavaLizard.MissionType_Hunt_LavaLizard_C.ExecuteUbergraph_MissionType_Hunt_LavaLizard");

	AMissionType_Hunt_LavaLizard_C_ExecuteUbergraph_MissionType_Hunt_LavaLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
