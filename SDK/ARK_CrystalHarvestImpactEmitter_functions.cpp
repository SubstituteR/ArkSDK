// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CrystalHarvestImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalHarvestImpactEmitter.CrystalHarvestImpactEmitter_C.UserConstructionScript
// ()

void ACrystalHarvestImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalHarvestImpactEmitter.CrystalHarvestImpactEmitter_C.UserConstructionScript");

	ACrystalHarvestImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalHarvestImpactEmitter.CrystalHarvestImpactEmitter_C.ExecuteUbergraph_CrystalHarvestImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalHarvestImpactEmitter_C::ExecuteUbergraph_CrystalHarvestImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalHarvestImpactEmitter.CrystalHarvestImpactEmitter_C.ExecuteUbergraph_CrystalHarvestImpactEmitter");

	ACrystalHarvestImpactEmitter_C_ExecuteUbergraph_CrystalHarvestImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
