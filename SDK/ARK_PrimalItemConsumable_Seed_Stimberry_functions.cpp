// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Stimberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Stimberry.PrimalItemConsumable_Seed_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Stimberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Stimberry.PrimalItemConsumable_Seed_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry");

	UPrimalItemConsumable_Seed_Stimberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
