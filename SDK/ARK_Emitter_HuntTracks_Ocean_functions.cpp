// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks_Ocean.Emitter_HuntTracks_Ocean_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Ocean.Emitter_HuntTracks_Ocean_C.UserConstructionScript");

	AEmitter_HuntTracks_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks_Ocean.Emitter_HuntTracks_Ocean_C.ExecuteUbergraph_Emitter_HuntTracks_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_Ocean_C::ExecuteUbergraph_Emitter_HuntTracks_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Ocean.Emitter_HuntTracks_Ocean_C.ExecuteUbergraph_Emitter_HuntTracks_Ocean");

	AEmitter_HuntTracks_Ocean_C_ExecuteUbergraph_Emitter_HuntTracks_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
