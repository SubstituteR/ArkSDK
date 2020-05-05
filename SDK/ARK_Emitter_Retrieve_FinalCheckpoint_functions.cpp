// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_Retrieve_FinalCheckpoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C.UserConstructionScript
// ()

void AEmitter_Retrieve_FinalCheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C.UserConstructionScript");

	AEmitter_Retrieve_FinalCheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C.ExecuteUbergraph_Emitter_Retrieve_FinalCheckpoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_Retrieve_FinalCheckpoint_C::ExecuteUbergraph_Emitter_Retrieve_FinalCheckpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C.ExecuteUbergraph_Emitter_Retrieve_FinalCheckpoint");

	AEmitter_Retrieve_FinalCheckpoint_C_ExecuteUbergraph_Emitter_Retrieve_FinalCheckpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
