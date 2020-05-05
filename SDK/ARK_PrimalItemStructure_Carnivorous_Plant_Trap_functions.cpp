// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Carnivorous_Plant_Trap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Carnivorous_Plant_Trap.PrimalItemStructure_Carnivorous_Plant_Trap_C.ExecuteUbergraph_PrimalItemStructure_Carnivorous_Plant_Trap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Carnivorous_Plant_Trap_C::ExecuteUbergraph_PrimalItemStructure_Carnivorous_Plant_Trap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Carnivorous_Plant_Trap.PrimalItemStructure_Carnivorous_Plant_Trap_C.ExecuteUbergraph_PrimalItemStructure_Carnivorous_Plant_Trap");

	UPrimalItemStructure_Carnivorous_Plant_Trap_C_ExecuteUbergraph_PrimalItemStructure_Carnivorous_Plant_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
