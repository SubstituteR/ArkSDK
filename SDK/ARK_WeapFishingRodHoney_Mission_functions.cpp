// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFishingRodHoney_Mission_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C.UserConstructionScript
// ()

void AWeapFishingRodHoney_Mission_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C.UserConstructionScript");

	AWeapFishingRodHoney_Mission_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C.ExecuteUbergraph_WeapFishingRodHoney_Mission
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRodHoney_Mission_C::ExecuteUbergraph_WeapFishingRodHoney_Mission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C.ExecuteUbergraph_WeapFishingRodHoney_Mission");

	AWeapFishingRodHoney_Mission_C_ExecuteUbergraph_WeapFishingRodHoney_Mission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
