// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossTargetBeamComponent_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.StartFiring
// ()

void UVRBossTargetBeamComponent_BP_C::StartFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.StartFiring");

	UVRBossTargetBeamComponent_BP_C_StartFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.StartCharging
// ()

void UVRBossTargetBeamComponent_BP_C::StartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.StartCharging");

	UVRBossTargetBeamComponent_BP_C_StartCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.ExecuteUbergraph_VRBossTargetBeamComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRBossTargetBeamComponent_BP_C::ExecuteUbergraph_VRBossTargetBeamComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C.ExecuteUbergraph_VRBossTargetBeamComponent_BP");

	UVRBossTargetBeamComponent_BP_C_ExecuteUbergraph_VRBossTargetBeamComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
