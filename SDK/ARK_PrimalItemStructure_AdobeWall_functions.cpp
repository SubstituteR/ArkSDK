// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_AdobeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeWall.PrimalItemStructure_AdobeWall_C.ExecuteUbergraph_PrimalItemStructure_AdobeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeWall_C::ExecuteUbergraph_PrimalItemStructure_AdobeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeWall.PrimalItemStructure_AdobeWall_C.ExecuteUbergraph_PrimalItemStructure_AdobeWall");

	UPrimalItemStructure_AdobeWall_C_ExecuteUbergraph_PrimalItemStructure_AdobeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
