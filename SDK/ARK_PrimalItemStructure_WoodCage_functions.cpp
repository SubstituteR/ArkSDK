// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WoodCage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodCage.PrimalItemStructure_WoodCage_C.ExecuteUbergraph_PrimalItemStructure_WoodCage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodCage_C::ExecuteUbergraph_PrimalItemStructure_WoodCage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodCage.PrimalItemStructure_WoodCage_C.ExecuteUbergraph_PrimalItemStructure_WoodCage");

	UPrimalItemStructure_WoodCage_C_ExecuteUbergraph_PrimalItemStructure_WoodCage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
