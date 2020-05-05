// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Cherufe_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Cherufe_Retrieve.PrimalItemConsumable_Egg_Cherufe_Retrieve_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Cherufe_Retrieve_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Cherufe_Retrieve.PrimalItemConsumable_Egg_Cherufe_Retrieve_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe_Retrieve");

	UPrimalItemConsumable_Egg_Cherufe_Retrieve_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
