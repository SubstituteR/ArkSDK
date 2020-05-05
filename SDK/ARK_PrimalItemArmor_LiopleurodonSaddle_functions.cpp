// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_LiopleurodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_LiopleurodonSaddle.PrimalItemArmor_LiopleurodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_LiopleurodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_LiopleurodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_LiopleurodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_LiopleurodonSaddle.PrimalItemArmor_LiopleurodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_LiopleurodonSaddle");

	UPrimalItemArmor_LiopleurodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_LiopleurodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
