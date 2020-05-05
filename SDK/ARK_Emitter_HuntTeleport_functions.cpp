// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTeleport_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTeleport.Emitter_HuntTeleport_C.UserConstructionScript
// ()

void AEmitter_HuntTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTeleport.Emitter_HuntTeleport_C.UserConstructionScript");

	AEmitter_HuntTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTeleport.Emitter_HuntTeleport_C.ExecuteUbergraph_Emitter_HuntTeleport
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTeleport_C::ExecuteUbergraph_Emitter_HuntTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTeleport.Emitter_HuntTeleport_C.ExecuteUbergraph_Emitter_HuntTeleport");

	AEmitter_HuntTeleport_C_ExecuteUbergraph_Emitter_HuntTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
