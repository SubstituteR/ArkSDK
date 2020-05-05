// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_HuntSpawnLocation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C.UserConstructionScript
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, NetValidate)

void AMissionServerSidePoint_HuntSpawnLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C.UserConstructionScript");

	AMissionServerSidePoint_HuntSpawnLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C.ExecuteUbergraph_MissionServerSidePoint_HuntSpawnLocation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_HuntSpawnLocation_C::ExecuteUbergraph_MissionServerSidePoint_HuntSpawnLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C.ExecuteUbergraph_MissionServerSidePoint_HuntSpawnLocation");

	AMissionServerSidePoint_HuntSpawnLocation_C_ExecuteUbergraph_MissionServerSidePoint_HuntSpawnLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
