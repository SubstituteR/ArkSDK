#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSets_LootCrate_lvl2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_LootCrate_lvl2.LootItemSets_LootCrate_lvl2_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_LootCrate_lvl2_C : public ULootItemSets_LootCrate_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_LootCrate_lvl2.LootItemSets_LootCrate_lvl2_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_LootCrate_lvl2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif