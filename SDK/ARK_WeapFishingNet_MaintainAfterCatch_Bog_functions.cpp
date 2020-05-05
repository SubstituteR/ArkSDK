// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFishingNet_MaintainAfterCatch_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingNet_MaintainAfterCatch_Bog.WeapFishingNet_MaintainAfterCatch_Bog_C.UserConstructionScript
// ()

void AWeapFishingNet_MaintainAfterCatch_Bog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet_MaintainAfterCatch_Bog.WeapFishingNet_MaintainAfterCatch_Bog_C.UserConstructionScript");

	AWeapFishingNet_MaintainAfterCatch_Bog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet_MaintainAfterCatch_Bog.WeapFishingNet_MaintainAfterCatch_Bog_C.ExecuteUbergraph_WeapFishingNet_MaintainAfterCatch_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_MaintainAfterCatch_Bog_C::ExecuteUbergraph_WeapFishingNet_MaintainAfterCatch_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet_MaintainAfterCatch_Bog.WeapFishingNet_MaintainAfterCatch_Bog_C.ExecuteUbergraph_WeapFishingNet_MaintainAfterCatch_Bog");

	AWeapFishingNet_MaintainAfterCatch_Bog_C_ExecuteUbergraph_WeapFishingNet_MaintainAfterCatch_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
