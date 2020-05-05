// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapPike_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPike_Gauntlet.WeapPike_Gauntlet_C.UserConstructionScript
// ()

void AWeapPike_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Gauntlet.WeapPike_Gauntlet_C.UserConstructionScript");

	AWeapPike_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPike_Gauntlet.WeapPike_Gauntlet_C.ExecuteUbergraph_WeapPike_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPike_Gauntlet_C::ExecuteUbergraph_WeapPike_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Gauntlet.WeapPike_Gauntlet_C.ExecuteUbergraph_WeapPike_Gauntlet");

	AWeapPike_Gauntlet_C_ExecuteUbergraph_WeapPike_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
