// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_Doed_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Race_Doed_Easy.MissionType_Race_Doed_Easy_C.UserConstructionScript
// ()

void AMissionType_Race_Doed_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed_Easy.MissionType_Race_Doed_Easy_C.UserConstructionScript");

	AMissionType_Race_Doed_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race_Doed_Easy.MissionType_Race_Doed_Easy_C.ExecuteUbergraph_MissionType_Race_Doed_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_Doed_Easy_C::ExecuteUbergraph_MissionType_Race_Doed_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed_Easy.MissionType_Race_Doed_Easy_C.ExecuteUbergraph_MissionType_Race_Doed_Easy");

	AMissionType_Race_Doed_Easy_C_ExecuteUbergraph_MissionType_Race_Doed_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
