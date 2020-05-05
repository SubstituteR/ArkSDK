// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MissionEscortDino_AllowCarry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.BPCanBeCarried
// ()
// Parameters:
// class APrimalCharacter**       ByCarrier                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MissionEscortDino_AllowCarry_C::BPCanBeCarried(class APrimalCharacter** ByCarrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.BPCanBeCarried");

	ABuff_MissionEscortDino_AllowCarry_C_BPCanBeCarried_Params params;
	params.ByCarrier = ByCarrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.UserConstructionScript
// ()

void ABuff_MissionEscortDino_AllowCarry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.UserConstructionScript");

	ABuff_MissionEscortDino_AllowCarry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionEscortDino_AllowCarry_C::ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry");

	ABuff_MissionEscortDino_AllowCarry_C_ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
