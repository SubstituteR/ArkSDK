// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_LightBug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_LightBug.DinoTamedInventoryComponent_LightBug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LightBug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_LightBug_C::ExecuteUbergraph_DinoTamedInventoryComponent_LightBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LightBug.DinoTamedInventoryComponent_LightBug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LightBug");

	UDinoTamedInventoryComponent_LightBug_C_ExecuteUbergraph_DinoTamedInventoryComponent_LightBug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
