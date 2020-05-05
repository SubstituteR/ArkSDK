// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGun_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGun_Gauntlet.WeapGun_Gauntlet_C.UserConstructionScript
// ()

void AWeapGun_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Gauntlet.WeapGun_Gauntlet_C.UserConstructionScript");

	AWeapGun_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Gauntlet.WeapGun_Gauntlet_C.ExecuteUbergraph_WeapGun_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Gauntlet_C::ExecuteUbergraph_WeapGun_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Gauntlet.WeapGun_Gauntlet_C.ExecuteUbergraph_WeapGun_Gauntlet");

	AWeapGun_Gauntlet_C_ExecuteUbergraph_WeapGun_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
