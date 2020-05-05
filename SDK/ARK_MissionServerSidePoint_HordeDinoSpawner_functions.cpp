// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_HordeDinoSpawner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.BPCheckForErrors
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FBPMapCheckEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBPMapCheckEntry> AMissionServerSidePoint_HordeDinoSpawner_C::STATIC_BPCheckForErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.BPCheckForErrors");

	AMissionServerSidePoint_HordeDinoSpawner_C_BPCheckForErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.UserConstructionScript
// ()

void AMissionServerSidePoint_HordeDinoSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.UserConstructionScript");

	AMissionServerSidePoint_HordeDinoSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.ExecuteUbergraph_MissionServerSidePoint_HordeDinoSpawner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_HordeDinoSpawner_C::ExecuteUbergraph_MissionServerSidePoint_HordeDinoSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C.ExecuteUbergraph_MissionServerSidePoint_HordeDinoSpawner");

	AMissionServerSidePoint_HordeDinoSpawner_C_ExecuteUbergraph_MissionServerSidePoint_HordeDinoSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
