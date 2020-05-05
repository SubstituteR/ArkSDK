// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossLaserBeamComponent_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C.UpdateBeamVisuals
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, NetValidate)

void UVRBossLaserBeamComponent_BP_C::UpdateBeamVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C.UpdateBeamVisuals");

	UVRBossLaserBeamComponent_BP_C_UpdateBeamVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C.ExecuteUbergraph_VRBossLaserBeamComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRBossLaserBeamComponent_BP_C::ExecuteUbergraph_VRBossLaserBeamComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C.ExecuteUbergraph_VRBossLaserBeamComponent_BP");

	UVRBossLaserBeamComponent_BP_C_ExecuteUbergraph_VRBossLaserBeamComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
