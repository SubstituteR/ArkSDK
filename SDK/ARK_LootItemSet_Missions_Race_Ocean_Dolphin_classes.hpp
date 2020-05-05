#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Race_Ocean_Dolphin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_Missions_Race_Ocean_Dolphin.LootItemSet_Missions_Race_Ocean_Dolphin_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Missions_Race_Ocean_Dolphin_C : public ULootItemSet_Missions_Race_Ocean_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Missions_Race_Ocean_Dolphin.LootItemSet_Missions_Race_Ocean_Dolphin_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Missions_Race_Ocean_Dolphin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
