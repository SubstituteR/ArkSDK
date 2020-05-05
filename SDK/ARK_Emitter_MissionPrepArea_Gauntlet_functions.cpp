// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_MissionPrepArea_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.UserConstructionScript
// ()

void AEmitter_MissionPrepArea_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.UserConstructionScript");

	AEmitter_MissionPrepArea_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ReceiveBeginPlay
// ()

void AEmitter_MissionPrepArea_Gauntlet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ReceiveBeginPlay");

	AEmitter_MissionPrepArea_Gauntlet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.UpdateTimingAndScalars
// ()

void AEmitter_MissionPrepArea_Gauntlet_C::UpdateTimingAndScalars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.UpdateTimingAndScalars");

	AEmitter_MissionPrepArea_Gauntlet_C_UpdateTimingAndScalars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ReceiveDestroyed
// ()

void AEmitter_MissionPrepArea_Gauntlet_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ReceiveDestroyed");

	AEmitter_MissionPrepArea_Gauntlet_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ExecuteUbergraph_Emitter_MissionPrepArea_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_MissionPrepArea_Gauntlet_C::ExecuteUbergraph_Emitter_MissionPrepArea_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea_Gauntlet.Emitter_MissionPrepArea_Gauntlet_C.ExecuteUbergraph_Emitter_MissionPrepArea_Gauntlet");

	AEmitter_MissionPrepArea_Gauntlet_C_ExecuteUbergraph_Emitter_MissionPrepArea_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
