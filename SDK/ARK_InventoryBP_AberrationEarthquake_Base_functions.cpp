// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InventoryBP_AberrationEarthquake_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryBP_AberrationEarthquake_Base.InventoryBP_AberrationEarthquake_Base_C.ExecuteUbergraph_InventoryBP_AberrationEarthquake_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBP_AberrationEarthquake_Base_C::ExecuteUbergraph_InventoryBP_AberrationEarthquake_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBP_AberrationEarthquake_Base.InventoryBP_AberrationEarthquake_Base_C.ExecuteUbergraph_InventoryBP_AberrationEarthquake_Base");

	UInventoryBP_AberrationEarthquake_Base_C_ExecuteUbergraph_InventoryBP_AberrationEarthquake_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
