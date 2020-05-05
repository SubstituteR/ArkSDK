// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossOffsetBeamComponent_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C.UpdateBeamVisuals
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, NetValidate)

void UVRBossOffsetBeamComponent_BP_C::UpdateBeamVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C.UpdateBeamVisuals");

	UVRBossOffsetBeamComponent_BP_C_UpdateBeamVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C.ExecuteUbergraph_VRBossOffsetBeamComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRBossOffsetBeamComponent_BP_C::ExecuteUbergraph_VRBossOffsetBeamComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C.ExecuteUbergraph_VRBossOffsetBeamComponent_BP");

	UVRBossOffsetBeamComponent_BP_C_ExecuteUbergraph_VRBossOffsetBeamComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
