// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FPV_ClawHit_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPV_ClawHit_CameraShake.FPV_ClawHit_CameraShake_C.ExecuteUbergraph_FPV_ClawHit_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPV_ClawHit_CameraShake_C::ExecuteUbergraph_FPV_ClawHit_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPV_ClawHit_CameraShake.FPV_ClawHit_CameraShake_C.ExecuteUbergraph_FPV_ClawHit_CameraShake");

	UFPV_ClawHit_CameraShake_C_ExecuteUbergraph_FPV_ClawHit_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
