// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemMission_Bot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemMission_Bot.DroppedItemMission_Bot_C.UserConstructionScript
// ()

void ADroppedItemMission_Bot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_Bot.DroppedItemMission_Bot_C.UserConstructionScript");

	ADroppedItemMission_Bot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemMission_Bot.DroppedItemMission_Bot_C.ExecuteUbergraph_DroppedItemMission_Bot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemMission_Bot_C::ExecuteUbergraph_DroppedItemMission_Bot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemMission_Bot.DroppedItemMission_Bot_C.ExecuteUbergraph_DroppedItemMission_Bot");

	ADroppedItemMission_Bot_C_ExecuteUbergraph_DroppedItemMission_Bot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
