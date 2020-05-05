// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_RockElemental_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_RockElemental_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C.UserConstructionScript");

	AEmitter_HuntTracks_RockElemental_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C.ExecuteUbergraph_Emitter_HuntTracks_RockElemental
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_RockElemental_C::ExecuteUbergraph_Emitter_HuntTracks_RockElemental(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C.ExecuteUbergraph_Emitter_HuntTracks_RockElemental");

	AEmitter_HuntTracks_RockElemental_C_ExecuteUbergraph_Emitter_HuntTracks_RockElemental_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
