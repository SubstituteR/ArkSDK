// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Race_Bog_Kapro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Race_Bog_Kapro.LootItemSet_Missions_Race_Bog_Kapro_C.ExecuteUbergraph_LootItemSet_Missions_Race_Bog_Kapro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Race_Bog_Kapro_C::ExecuteUbergraph_LootItemSet_Missions_Race_Bog_Kapro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Race_Bog_Kapro.LootItemSet_Missions_Race_Bog_Kapro_C.ExecuteUbergraph_LootItemSet_Missions_Race_Bog_Kapro");

	ULootItemSet_Missions_Race_Bog_Kapro_C_ExecuteUbergraph_LootItemSet_Missions_Race_Bog_Kapro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
