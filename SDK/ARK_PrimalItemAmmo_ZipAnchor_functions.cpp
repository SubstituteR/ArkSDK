// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemAmmo_ZipAnchor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_ZipAnchor.PrimalItemAmmo_ZipAnchor_C.ExecuteUbergraph_PrimalItemAmmo_ZipAnchor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ZipAnchor_C::ExecuteUbergraph_PrimalItemAmmo_ZipAnchor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ZipAnchor.PrimalItemAmmo_ZipAnchor_C.ExecuteUbergraph_PrimalItemAmmo_ZipAnchor");

	UPrimalItemAmmo_ZipAnchor_C_ExecuteUbergraph_PrimalItemAmmo_ZipAnchor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif