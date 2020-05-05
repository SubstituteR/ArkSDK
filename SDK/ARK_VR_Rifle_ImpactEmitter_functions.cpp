// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VR_Rifle_ImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VR_Rifle_ImpactEmitter.VR_Rifle_ImpactEmitter_C.UserConstructionScript
// ()

void AVR_Rifle_ImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VR_Rifle_ImpactEmitter.VR_Rifle_ImpactEmitter_C.UserConstructionScript");

	AVR_Rifle_ImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VR_Rifle_ImpactEmitter.VR_Rifle_ImpactEmitter_C.ExecuteUbergraph_VR_Rifle_ImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVR_Rifle_ImpactEmitter_C::ExecuteUbergraph_VR_Rifle_ImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VR_Rifle_ImpactEmitter.VR_Rifle_ImpactEmitter_C.ExecuteUbergraph_VR_Rifle_ImpactEmitter");

	AVR_Rifle_ImpactEmitter_C_ExecuteUbergraph_VR_Rifle_ImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
