// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSpear_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpear_Gauntlet.WeapSpear_Gauntlet_C.UserConstructionScript
// ()

void AWeapSpear_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Gauntlet.WeapSpear_Gauntlet_C.UserConstructionScript");

	AWeapSpear_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Gauntlet.WeapSpear_Gauntlet_C.ExecuteUbergraph_WeapSpear_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpear_Gauntlet_C::ExecuteUbergraph_WeapSpear_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Gauntlet.WeapSpear_Gauntlet_C.ExecuteUbergraph_WeapSpear_Gauntlet");

	AWeapSpear_Gauntlet_C_ExecuteUbergraph_WeapSpear_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
