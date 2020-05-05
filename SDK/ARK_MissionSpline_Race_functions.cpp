// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionSpline_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionSpline_Race.MissionSpline_Race_C.UserConstructionScript
// ()

void AMissionSpline_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Race.MissionSpline_Race_C.UserConstructionScript");

	AMissionSpline_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Race.MissionSpline_Race_C.ExecuteUbergraph_MissionSpline_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_Race_C::ExecuteUbergraph_MissionSpline_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Race.MissionSpline_Race_C.ExecuteUbergraph_MissionSpline_Race");

	AMissionSpline_Race_C_ExecuteUbergraph_MissionSpline_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
