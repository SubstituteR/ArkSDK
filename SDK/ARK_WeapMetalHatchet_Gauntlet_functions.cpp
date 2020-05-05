// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapMetalHatchet_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMetalHatchet_Gauntlet.WeapMetalHatchet_Gauntlet_C.UserConstructionScript
// ()

void AWeapMetalHatchet_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Gauntlet.WeapMetalHatchet_Gauntlet_C.UserConstructionScript");

	AWeapMetalHatchet_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMetalHatchet_Gauntlet.WeapMetalHatchet_Gauntlet_C.ExecuteUbergraph_WeapMetalHatchet_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMetalHatchet_Gauntlet_C::ExecuteUbergraph_WeapMetalHatchet_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Gauntlet.WeapMetalHatchet_Gauntlet_C.ExecuteUbergraph_WeapMetalHatchet_Gauntlet");

	AWeapMetalHatchet_Gauntlet_C_ExecuteUbergraph_WeapMetalHatchet_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
