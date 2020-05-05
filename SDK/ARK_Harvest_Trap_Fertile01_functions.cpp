// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Harvest_Trap_Fertile01_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Harvest_Trap_Fertile01.Harvest_Trap_Fertile01_C.ExecuteUbergraph_Harvest_Trap_Fertile01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHarvest_Trap_Fertile01_C::ExecuteUbergraph_Harvest_Trap_Fertile01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Harvest_Trap_Fertile01.Harvest_Trap_Fertile01_C.ExecuteUbergraph_Harvest_Trap_Fertile01");

	UHarvest_Trap_Fertile01_C_ExecuteUbergraph_Harvest_Trap_Fertile01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
