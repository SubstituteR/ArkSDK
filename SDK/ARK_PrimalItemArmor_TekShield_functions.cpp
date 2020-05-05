// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_TekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekShield.PrimalItemArmor_TekShield_C.ExecuteUbergraph_PrimalItemArmor_TekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShield_C::ExecuteUbergraph_PrimalItemArmor_TekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShield.PrimalItemArmor_TekShield_C.ExecuteUbergraph_PrimalItemArmor_TekShield");

	UPrimalItemArmor_TekShield_C_ExecuteUbergraph_PrimalItemArmor_TekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
