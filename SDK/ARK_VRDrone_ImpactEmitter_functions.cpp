// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_ImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRDrone_ImpactEmitter.VRDrone_ImpactEmitter_C.UserConstructionScript
// ()

void AVRDrone_ImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_ImpactEmitter.VRDrone_ImpactEmitter_C.UserConstructionScript");

	AVRDrone_ImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_ImpactEmitter.VRDrone_ImpactEmitter_C.ExecuteUbergraph_VRDrone_ImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRDrone_ImpactEmitter_C::ExecuteUbergraph_VRDrone_ImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_ImpactEmitter.VRDrone_ImpactEmitter_C.ExecuteUbergraph_VRDrone_ImpactEmitter");

	AVRDrone_ImpactEmitter_C_ExecuteUbergraph_VRDrone_ImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
