// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRDrone_TrailEmitter.VRDrone_TrailEmitter_C.UserConstructionScript
// ()

void AVRDrone_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_TrailEmitter.VRDrone_TrailEmitter_C.UserConstructionScript");

	AVRDrone_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_TrailEmitter.VRDrone_TrailEmitter_C.ExecuteUbergraph_VRDrone_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRDrone_TrailEmitter_C::ExecuteUbergraph_VRDrone_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_TrailEmitter.VRDrone_TrailEmitter_C.ExecuteUbergraph_VRDrone_TrailEmitter");

	AVRDrone_TrailEmitter_C_ExecuteUbergraph_VRDrone_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
