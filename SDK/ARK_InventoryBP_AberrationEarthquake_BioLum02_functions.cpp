// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InventoryBP_AberrationEarthquake_BioLum02_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryBP_AberrationEarthquake_BioLum02.InventoryBP_AberrationEarthquake_BioLum02_C.ExecuteUbergraph_InventoryBP_AberrationEarthquake_BioLum02
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBP_AberrationEarthquake_BioLum02_C::ExecuteUbergraph_InventoryBP_AberrationEarthquake_BioLum02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBP_AberrationEarthquake_BioLum02.InventoryBP_AberrationEarthquake_BioLum02_C.ExecuteUbergraph_InventoryBP_AberrationEarthquake_BioLum02");

	UInventoryBP_AberrationEarthquake_BioLum02_C_ExecuteUbergraph_InventoryBP_AberrationEarthquake_BioLum02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
