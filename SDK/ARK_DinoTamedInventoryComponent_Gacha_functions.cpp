// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Gacha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Gacha.DinoTamedInventoryComponent_Gacha_C.ExecuteUbergraph_DinoTamedInventoryComponent_Gacha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Gacha_C::ExecuteUbergraph_DinoTamedInventoryComponent_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Gacha.DinoTamedInventoryComponent_Gacha_C.ExecuteUbergraph_DinoTamedInventoryComponent_Gacha");

	UDinoTamedInventoryComponent_Gacha_C_ExecuteUbergraph_DinoTamedInventoryComponent_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
