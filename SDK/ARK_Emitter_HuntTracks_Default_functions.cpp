// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_Default_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C.UserConstructionScript");

	AEmitter_HuntTracks_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C.ExecuteUbergraph_Emitter_HuntTracks_Default
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_Default_C::ExecuteUbergraph_Emitter_HuntTracks_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C.ExecuteUbergraph_Emitter_HuntTracks_Default");

	AEmitter_HuntTracks_Default_C_ExecuteUbergraph_Emitter_HuntTracks_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
