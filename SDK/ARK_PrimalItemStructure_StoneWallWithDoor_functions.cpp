// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_StoneWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneWallWithDoor.PrimalItemStructure_StoneWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_StoneWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_StoneWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneWallWithDoor.PrimalItemStructure_StoneWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_StoneWallWithDoor");

	UPrimalItemStructure_StoneWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_StoneWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
