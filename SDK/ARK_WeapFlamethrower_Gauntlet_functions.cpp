// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFlamethrower_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlamethrower_Gauntlet.WeapFlamethrower_Gauntlet_C.UserConstructionScript
// ()

void AWeapFlamethrower_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_Gauntlet.WeapFlamethrower_Gauntlet_C.UserConstructionScript");

	AWeapFlamethrower_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower_Gauntlet.WeapFlamethrower_Gauntlet_C.ExecuteUbergraph_WeapFlamethrower_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlamethrower_Gauntlet_C::ExecuteUbergraph_WeapFlamethrower_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_Gauntlet.WeapFlamethrower_Gauntlet_C.ExecuteUbergraph_WeapFlamethrower_Gauntlet");

	AWeapFlamethrower_Gauntlet_C_ExecuteUbergraph_WeapFlamethrower_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
