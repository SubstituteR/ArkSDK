// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VR_Bot_GrenadeExplosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C.UserConstructionScript
// ()

void AVR_Bot_GrenadeExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C.UserConstructionScript");

	AVR_Bot_GrenadeExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C.ExecuteUbergraph_VR_Bot_GrenadeExplosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVR_Bot_GrenadeExplosion_C::ExecuteUbergraph_VR_Bot_GrenadeExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C.ExecuteUbergraph_VR_Bot_GrenadeExplosion");

	AVR_Bot_GrenadeExplosion_C_ExecuteUbergraph_VR_Bot_GrenadeExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
