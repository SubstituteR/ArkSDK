// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RaceMissionHelper_HoverSkiff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RaceMissionHelper_HoverSkiff_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.BPPreventAddingOtherBuff");

	ABuff_RaceMissionHelper_HoverSkiff_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.UserConstructionScript
// ()

void ABuff_RaceMissionHelper_HoverSkiff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.UserConstructionScript");

	ABuff_RaceMissionHelper_HoverSkiff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_HoverSkiff_C::ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff");

	ABuff_RaceMissionHelper_HoverSkiff_C_ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
