// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapBow_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_Gauntlet.WeapBow_Gauntlet_C.UserConstructionScript
// ()

void AWeapBow_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Gauntlet.WeapBow_Gauntlet_C.UserConstructionScript");

	AWeapBow_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Gauntlet.WeapBow_Gauntlet_C.ExecuteUbergraph_WeapBow_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_Gauntlet_C::ExecuteUbergraph_WeapBow_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Gauntlet.WeapBow_Gauntlet_C.ExecuteUbergraph_WeapBow_Gauntlet");

	AWeapBow_Gauntlet_C_ExecuteUbergraph_WeapBow_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
