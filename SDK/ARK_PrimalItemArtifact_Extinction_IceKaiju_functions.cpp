// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArtifact_Extinction_IceKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_Extinction_IceKaiju.PrimalItemArtifact_Extinction_IceKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_IceKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_Extinction_IceKaiju_C::ExecuteUbergraph_PrimalItemArtifact_Extinction_IceKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_Extinction_IceKaiju.PrimalItemArtifact_Extinction_IceKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_IceKaiju");

	UPrimalItemArtifact_Extinction_IceKaiju_C_ExecuteUbergraph_PrimalItemArtifact_Extinction_IceKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
