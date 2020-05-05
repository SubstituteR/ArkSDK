// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemMission_Generic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemMission_Generic.DroppedItemMission_Generic_C.UserConstructionScript
// ()

void ADroppedItemMission_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_Generic.DroppedItemMission_Generic_C.UserConstructionScript");

	ADroppedItemMission_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemMission_Generic.DroppedItemMission_Generic_C.ExecuteUbergraph_DroppedItemMission_Generic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemMission_Generic_C::ExecuteUbergraph_DroppedItemMission_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_Generic.DroppedItemMission_Generic_C.ExecuteUbergraph_DroppedItemMission_Generic");

	ADroppedItemMission_Generic_C_ExecuteUbergraph_DroppedItemMission_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
