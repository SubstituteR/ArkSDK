// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_CrabSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_CrabSaddle.PrimalItemArmor_CrabSaddle_C.ExecuteUbergraph_PrimalItemArmor_CrabSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_CrabSaddle_C::ExecuteUbergraph_PrimalItemArmor_CrabSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_CrabSaddle.PrimalItemArmor_CrabSaddle_C.ExecuteUbergraph_PrimalItemArmor_CrabSaddle");

	UPrimalItemArmor_CrabSaddle_C_ExecuteUbergraph_PrimalItemArmor_CrabSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
