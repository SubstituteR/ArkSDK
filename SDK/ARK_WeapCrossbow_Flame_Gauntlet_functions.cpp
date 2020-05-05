// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapCrossbow_Flame_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCrossbow_Flame_Gauntlet.WeapCrossbow_Flame_Gauntlet_C.UserConstructionScript
// ()

void AWeapCrossbow_Flame_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame_Gauntlet.WeapCrossbow_Flame_Gauntlet_C.UserConstructionScript");

	AWeapCrossbow_Flame_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Flame_Gauntlet.WeapCrossbow_Flame_Gauntlet_C.ExecuteUbergraph_WeapCrossbow_Flame_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Flame_Gauntlet_C::ExecuteUbergraph_WeapCrossbow_Flame_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame_Gauntlet.WeapCrossbow_Flame_Gauntlet_C.ExecuteUbergraph_WeapCrossbow_Flame_Gauntlet");

	AWeapCrossbow_Flame_Gauntlet_C_ExecuteUbergraph_WeapCrossbow_Flame_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
