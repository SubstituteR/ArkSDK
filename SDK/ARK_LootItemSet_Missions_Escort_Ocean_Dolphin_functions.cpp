// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Escort_Ocean_Dolphin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Escort_Ocean_Dolphin.LootItemSet_Missions_Escort_Ocean_Dolphin_C.ExecuteUbergraph_LootItemSet_Missions_Escort_Ocean_Dolphin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Escort_Ocean_Dolphin_C::ExecuteUbergraph_LootItemSet_Missions_Escort_Ocean_Dolphin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Escort_Ocean_Dolphin.LootItemSet_Missions_Escort_Ocean_Dolphin_C.ExecuteUbergraph_LootItemSet_Missions_Escort_Ocean_Dolphin");

	ULootItemSet_Missions_Escort_Ocean_Dolphin_C_ExecuteUbergraph_LootItemSet_Missions_Escort_Ocean_Dolphin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
