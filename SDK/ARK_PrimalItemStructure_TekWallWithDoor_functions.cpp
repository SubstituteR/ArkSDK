// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TekWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekWallWithDoor.PrimalItemStructure_TekWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_TekWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_TekWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekWallWithDoor.PrimalItemStructure_TekWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_TekWallWithDoor");

	UPrimalItemStructure_TekWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_TekWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
