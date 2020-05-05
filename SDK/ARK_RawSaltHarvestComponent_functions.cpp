// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RawSaltHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RawSaltHarvestComponent.RawSaltHarvestComponent_C.ExecuteUbergraph_RawSaltHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URawSaltHarvestComponent_C::ExecuteUbergraph_RawSaltHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RawSaltHarvestComponent.RawSaltHarvestComponent_C.ExecuteUbergraph_RawSaltHarvestComponent");

	URawSaltHarvestComponent_C_ExecuteUbergraph_RawSaltHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
