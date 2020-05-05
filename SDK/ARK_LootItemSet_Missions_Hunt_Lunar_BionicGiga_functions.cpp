// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Hunt_Lunar_BionicGiga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Hunt_Lunar_BionicGiga.LootItemSet_Missions_Hunt_Lunar_BionicGiga_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Lunar_BionicGiga
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Hunt_Lunar_BionicGiga_C::ExecuteUbergraph_LootItemSet_Missions_Hunt_Lunar_BionicGiga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Hunt_Lunar_BionicGiga.LootItemSet_Missions_Hunt_Lunar_BionicGiga_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Lunar_BionicGiga");

	ULootItemSet_Missions_Hunt_Lunar_BionicGiga_C_ExecuteUbergraph_LootItemSet_Missions_Hunt_Lunar_BionicGiga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
