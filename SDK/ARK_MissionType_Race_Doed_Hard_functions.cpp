// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_Doed_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Race_Doed_Hard.MissionType_Race_Doed_Hard_C.UserConstructionScript
// ()

void AMissionType_Race_Doed_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed_Hard.MissionType_Race_Doed_Hard_C.UserConstructionScript");

	AMissionType_Race_Doed_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race_Doed_Hard.MissionType_Race_Doed_Hard_C.ExecuteUbergraph_MissionType_Race_Doed_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_Doed_Hard_C::ExecuteUbergraph_MissionType_Race_Doed_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_Doed_Hard.MissionType_Race_Doed_Hard_C.ExecuteUbergraph_MissionType_Race_Doed_Hard");

	AMissionType_Race_Doed_Hard_C_ExecuteUbergraph_MissionType_Race_Doed_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
