// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapCompoundBow_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow_Gauntlet.WeapCompoundBow_Gauntlet_C.UserConstructionScript
// ()

void AWeapCompoundBow_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Gauntlet.WeapCompoundBow_Gauntlet_C.UserConstructionScript");

	AWeapCompoundBow_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Gauntlet.WeapCompoundBow_Gauntlet_C.ExecuteUbergraph_WeapCompoundBow_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_Gauntlet_C::ExecuteUbergraph_WeapCompoundBow_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Gauntlet.WeapCompoundBow_Gauntlet_C.ExecuteUbergraph_WeapCompoundBow_Gauntlet");

	AWeapCompoundBow_Gauntlet_C_ExecuteUbergraph_WeapCompoundBow_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
