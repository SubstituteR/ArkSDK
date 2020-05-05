// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGrenade_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGrenade_Gauntlet.WeapGrenade_Gauntlet_C.UserConstructionScript
// ()

void AWeapGrenade_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade_Gauntlet.WeapGrenade_Gauntlet_C.UserConstructionScript");

	AWeapGrenade_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGrenade_Gauntlet.WeapGrenade_Gauntlet_C.ExecuteUbergraph_WeapGrenade_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGrenade_Gauntlet_C::ExecuteUbergraph_WeapGrenade_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade_Gauntlet.WeapGrenade_Gauntlet_C.ExecuteUbergraph_WeapGrenade_Gauntlet");

	AWeapGrenade_Gauntlet_C_ExecuteUbergraph_WeapGrenade_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
