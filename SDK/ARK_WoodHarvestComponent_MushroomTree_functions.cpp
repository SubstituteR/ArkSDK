// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_MushroomTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_MushroomTree.WoodHarvestComponent_MushroomTree_C.ExecuteUbergraph_WoodHarvestComponent_MushroomTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_MushroomTree_C::ExecuteUbergraph_WoodHarvestComponent_MushroomTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_MushroomTree.WoodHarvestComponent_MushroomTree_C.ExecuteUbergraph_WoodHarvestComponent_MushroomTree");

	UWoodHarvestComponent_MushroomTree_C_ExecuteUbergraph_WoodHarvestComponent_MushroomTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
