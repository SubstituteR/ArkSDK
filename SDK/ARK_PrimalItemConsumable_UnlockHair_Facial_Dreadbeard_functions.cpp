// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnlockHair_Facial_Dreadbeard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_Dreadbeard.PrimalItemConsumable_UnlockHair_Facial_Dreadbeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Dreadbeard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_Dreadbeard_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Dreadbeard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_Dreadbeard.PrimalItemConsumable_UnlockHair_Facial_Dreadbeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Dreadbeard");

	UPrimalItemConsumable_UnlockHair_Facial_Dreadbeard_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Dreadbeard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
