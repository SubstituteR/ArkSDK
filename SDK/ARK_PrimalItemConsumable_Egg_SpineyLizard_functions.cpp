// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_SpineyLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_SpineyLizard.PrimalItemConsumable_Egg_SpineyLizard_C.ExecuteUbergraph_PrimalItemConsumable_Egg_SpineyLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_SpineyLizard_C::ExecuteUbergraph_PrimalItemConsumable_Egg_SpineyLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_SpineyLizard.PrimalItemConsumable_Egg_SpineyLizard_C.ExecuteUbergraph_PrimalItemConsumable_Egg_SpineyLizard");

	UPrimalItemConsumable_Egg_SpineyLizard_C_ExecuteUbergraph_PrimalItemConsumable_Egg_SpineyLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
