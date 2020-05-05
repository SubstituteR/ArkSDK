// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Race_Volcano_Doed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Race_Volcano_Doed.LootItemSet_Missions_Race_Volcano_Doed_C.ExecuteUbergraph_LootItemSet_Missions_Race_Volcano_Doed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Race_Volcano_Doed_C::ExecuteUbergraph_LootItemSet_Missions_Race_Volcano_Doed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Race_Volcano_Doed.LootItemSet_Missions_Race_Volcano_Doed_C.ExecuteUbergraph_LootItemSet_Missions_Race_Volcano_Doed");

	ULootItemSet_Missions_Race_Volcano_Doed_C_ExecuteUbergraph_LootItemSet_Missions_Race_Volcano_Doed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
