// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks_Mammoth.Emitter_HuntTracks_Mammoth_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_Mammoth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Mammoth.Emitter_HuntTracks_Mammoth_C.UserConstructionScript");

	AEmitter_HuntTracks_Mammoth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks_Mammoth.Emitter_HuntTracks_Mammoth_C.ExecuteUbergraph_Emitter_HuntTracks_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_Mammoth_C::ExecuteUbergraph_Emitter_HuntTracks_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_Mammoth.Emitter_HuntTracks_Mammoth_C.ExecuteUbergraph_Emitter_HuntTracks_Mammoth");

	AEmitter_HuntTracks_Mammoth_C_ExecuteUbergraph_Emitter_HuntTracks_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
