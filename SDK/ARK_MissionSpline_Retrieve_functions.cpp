// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionSpline_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionSpline_Retrieve.MissionSpline_Retrieve_C.UserConstructionScript
// ()

void AMissionSpline_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Retrieve.MissionSpline_Retrieve_C.UserConstructionScript");

	AMissionSpline_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Retrieve.MissionSpline_Retrieve_C.ExecuteUbergraph_MissionSpline_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_Retrieve_C::ExecuteUbergraph_MissionSpline_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Retrieve.MissionSpline_Retrieve_C.ExecuteUbergraph_MissionSpline_Retrieve");

	AMissionSpline_Retrieve_C_ExecuteUbergraph_MissionSpline_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
