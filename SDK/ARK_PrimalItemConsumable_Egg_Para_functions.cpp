// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Para.PrimalItemConsumable_Egg_Para_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Para_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Para.PrimalItemConsumable_Egg_Para_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Para");

	UPrimalItemConsumable_Egg_Para_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
