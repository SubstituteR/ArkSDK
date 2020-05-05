// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_Doed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Race_Doed.MissionType_Race_Doed_C.UserConstructionScript
// ()

void AMissionType_Race_Doed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed.MissionType_Race_Doed_C.UserConstructionScript");

	AMissionType_Race_Doed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race_Doed.MissionType_Race_Doed_C.ExecuteUbergraph_MissionType_Race_Doed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_Doed_C::ExecuteUbergraph_MissionType_Race_Doed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed.MissionType_Race_Doed_C.ExecuteUbergraph_MissionType_Race_Doed");

	AMissionType_Race_Doed_C_ExecuteUbergraph_MissionType_Race_Doed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
