// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Ramp_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Ramp_Stone.PrimalItemStructure_Ramp_Stone_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Ramp_Stone_C::ExecuteUbergraph_PrimalItemStructure_Ramp_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Ramp_Stone.PrimalItemStructure_Ramp_Stone_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Stone");

	UPrimalItemStructure_Ramp_Stone_C_ExecuteUbergraph_PrimalItemStructure_Ramp_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
