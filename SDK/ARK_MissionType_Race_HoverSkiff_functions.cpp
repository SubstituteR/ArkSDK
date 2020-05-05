// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_HoverSkiff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.OnMissionPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_HoverSkiff_C::OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.OnMissionPhaseStarted");

	AMissionType_Race_HoverSkiff_C_OnMissionPhaseStarted_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.UserConstructionScript
// ()

void AMissionType_Race_HoverSkiff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.UserConstructionScript");

	AMissionType_Race_HoverSkiff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.ExecuteUbergraph_MissionType_Race_HoverSkiff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_HoverSkiff_C::ExecuteUbergraph_MissionType_Race_HoverSkiff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.ExecuteUbergraph_MissionType_Race_HoverSkiff");

	AMissionType_Race_HoverSkiff_C_ExecuteUbergraph_MissionType_Race_HoverSkiff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
