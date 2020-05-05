// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_TargetLocation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_TargetLocation.MissionServerSidePoint_TargetLocation_C.UserConstructionScript
// (NetRequest, Exec, NetResponse, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, NetValidate)

void AMissionServerSidePoint_TargetLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_TargetLocation.MissionServerSidePoint_TargetLocation_C.UserConstructionScript");

	AMissionServerSidePoint_TargetLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_TargetLocation.MissionServerSidePoint_TargetLocation_C.ExecuteUbergraph_MissionServerSidePoint_TargetLocation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_TargetLocation_C::ExecuteUbergraph_MissionServerSidePoint_TargetLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_TargetLocation.MissionServerSidePoint_TargetLocation_C.ExecuteUbergraph_MissionServerSidePoint_TargetLocation");

	AMissionServerSidePoint_TargetLocation_C_ExecuteUbergraph_MissionServerSidePoint_TargetLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
