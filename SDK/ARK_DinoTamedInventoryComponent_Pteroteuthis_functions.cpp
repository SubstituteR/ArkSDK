// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Pteroteuthis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Pteroteuthis.DinoTamedInventoryComponent_Pteroteuthis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pteroteuthis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Pteroteuthis_C::ExecuteUbergraph_DinoTamedInventoryComponent_Pteroteuthis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Pteroteuthis.DinoTamedInventoryComponent_Pteroteuthis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pteroteuthis");

	UDinoTamedInventoryComponent_Pteroteuthis_C_ExecuteUbergraph_DinoTamedInventoryComponent_Pteroteuthis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
