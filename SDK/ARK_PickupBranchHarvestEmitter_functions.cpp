// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PickupBranchHarvestEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickupBranchHarvestEmitter.PickupBranchHarvestEmitter_C.UserConstructionScript
// ()

void APickupBranchHarvestEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupBranchHarvestEmitter.PickupBranchHarvestEmitter_C.UserConstructionScript");

	APickupBranchHarvestEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupBranchHarvestEmitter.PickupBranchHarvestEmitter_C.ExecuteUbergraph_PickupBranchHarvestEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APickupBranchHarvestEmitter_C::ExecuteUbergraph_PickupBranchHarvestEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupBranchHarvestEmitter.PickupBranchHarvestEmitter_C.ExecuteUbergraph_PickupBranchHarvestEmitter");

	APickupBranchHarvestEmitter_C_ExecuteUbergraph_PickupBranchHarvestEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
