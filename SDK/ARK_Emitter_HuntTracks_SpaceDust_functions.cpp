// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_SpaceDust_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks_SpaceDust.Emitter_HuntTracks_SpaceDust_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_SpaceDust_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_SpaceDust.Emitter_HuntTracks_SpaceDust_C.UserConstructionScript");

	AEmitter_HuntTracks_SpaceDust_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks_SpaceDust.Emitter_HuntTracks_SpaceDust_C.ExecuteUbergraph_Emitter_HuntTracks_SpaceDust
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_SpaceDust_C::ExecuteUbergraph_Emitter_HuntTracks_SpaceDust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_SpaceDust.Emitter_HuntTracks_SpaceDust_C.ExecuteUbergraph_Emitter_HuntTracks_SpaceDust");

	AEmitter_HuntTracks_SpaceDust_C_ExecuteUbergraph_Emitter_HuntTracks_SpaceDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
