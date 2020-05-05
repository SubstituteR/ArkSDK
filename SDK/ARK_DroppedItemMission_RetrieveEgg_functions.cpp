// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemMission_RetrieveEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C.UserConstructionScript
// ()

void ADroppedItemMission_RetrieveEgg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C.UserConstructionScript");

	ADroppedItemMission_RetrieveEgg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C.ExecuteUbergraph_DroppedItemMission_RetrieveEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemMission_RetrieveEgg_C::ExecuteUbergraph_DroppedItemMission_RetrieveEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C.ExecuteUbergraph_DroppedItemMission_RetrieveEgg");

	ADroppedItemMission_RetrieveEgg_C_ExecuteUbergraph_DroppedItemMission_RetrieveEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
