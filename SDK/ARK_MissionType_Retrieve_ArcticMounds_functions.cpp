// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_ArcticMounds_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_ArcticMounds.MissionType_Retrieve_ArcticMounds_C.UserConstructionScript
// ()

void AMissionType_Retrieve_ArcticMounds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_ArcticMounds.MissionType_Retrieve_ArcticMounds_C.UserConstructionScript");

	AMissionType_Retrieve_ArcticMounds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_ArcticMounds.MissionType_Retrieve_ArcticMounds_C.ExecuteUbergraph_MissionType_Retrieve_ArcticMounds
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_ArcticMounds_C::ExecuteUbergraph_MissionType_Retrieve_ArcticMounds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_ArcticMounds.MissionType_Retrieve_ArcticMounds_C.ExecuteUbergraph_MissionType_Retrieve_ArcticMounds");

	AMissionType_Retrieve_ArcticMounds_C_ExecuteUbergraph_MissionType_Retrieve_ArcticMounds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
