// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArtifactAB_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactAB.PrimalItemArtifactAB_C.ExecuteUbergraph_PrimalItemArtifactAB
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactAB_C::ExecuteUbergraph_PrimalItemArtifactAB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactAB.PrimalItemArtifactAB_C.ExecuteUbergraph_PrimalItemArtifactAB");

	UPrimalItemArtifactAB_C_ExecuteUbergraph_PrimalItemArtifactAB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif