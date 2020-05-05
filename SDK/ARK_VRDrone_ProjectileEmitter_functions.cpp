// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_ProjectileEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C.UserConstructionScript
// ()

void AVRDrone_ProjectileEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C.UserConstructionScript");

	AVRDrone_ProjectileEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C.ExecuteUbergraph_VRDrone_ProjectileEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRDrone_ProjectileEmitter_C::ExecuteUbergraph_VRDrone_ProjectileEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C.ExecuteUbergraph_VRDrone_ProjectileEmitter");

	AVRDrone_ProjectileEmitter_C_ExecuteUbergraph_VRDrone_ProjectileEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
