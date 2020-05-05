// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StoneHarvestComponent_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestComponent_Ocean.StoneHarvestComponent_Ocean_C.ExecuteUbergraph_StoneHarvestComponent_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoneHarvestComponent_Ocean_C::ExecuteUbergraph_StoneHarvestComponent_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent_Ocean.StoneHarvestComponent_Ocean_C.ExecuteUbergraph_StoneHarvestComponent_Ocean");

	UStoneHarvestComponent_Ocean_C_ExecuteUbergraph_StoneHarvestComponent_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
