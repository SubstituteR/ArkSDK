// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks.Emitter_HuntTracks_C.DrawBasicFloatingHUD
// ()
// Parameters:
// class AHUD**                   ForHUD                         (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_C::DrawBasicFloatingHUD(class AHUD** ForHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks.Emitter_HuntTracks_C.DrawBasicFloatingHUD");

	AEmitter_HuntTracks_C_DrawBasicFloatingHUD_Params params;
	params.ForHUD = ForHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks.Emitter_HuntTracks_C.UserConstructionScript
// ()

void AEmitter_HuntTracks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks.Emitter_HuntTracks_C.UserConstructionScript");

	AEmitter_HuntTracks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_HuntTracks.Emitter_HuntTracks_C.ExecuteUbergraph_Emitter_HuntTracks
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_HuntTracks_C::ExecuteUbergraph_Emitter_HuntTracks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_HuntTracks.Emitter_HuntTracks_C.ExecuteUbergraph_Emitter_HuntTracks");

	AEmitter_HuntTracks_C_ExecuteUbergraph_Emitter_HuntTracks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
