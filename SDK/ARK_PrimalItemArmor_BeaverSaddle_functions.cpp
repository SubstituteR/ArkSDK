// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_BeaverSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BeaverSaddle.PrimalItemArmor_BeaverSaddle_C.ExecuteUbergraph_PrimalItemArmor_BeaverSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BeaverSaddle_C::ExecuteUbergraph_PrimalItemArmor_BeaverSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BeaverSaddle.PrimalItemArmor_BeaverSaddle_C.ExecuteUbergraph_PrimalItemArmor_BeaverSaddle");

	UPrimalItemArmor_BeaverSaddle_C_ExecuteUbergraph_PrimalItemArmor_BeaverSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
