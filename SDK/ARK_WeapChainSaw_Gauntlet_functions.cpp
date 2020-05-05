// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapChainSaw_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapChainSaw_Gauntlet.WeapChainSaw_Gauntlet_C.UserConstructionScript
// ()

void AWeapChainSaw_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw_Gauntlet.WeapChainSaw_Gauntlet_C.UserConstructionScript");

	AWeapChainSaw_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw_Gauntlet.WeapChainSaw_Gauntlet_C.ExecuteUbergraph_WeapChainSaw_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_Gauntlet_C::ExecuteUbergraph_WeapChainSaw_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw_Gauntlet.WeapChainSaw_Gauntlet_C.ExecuteUbergraph_WeapChainSaw_Gauntlet");

	AWeapChainSaw_Gauntlet_C_ExecuteUbergraph_WeapChainSaw_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
