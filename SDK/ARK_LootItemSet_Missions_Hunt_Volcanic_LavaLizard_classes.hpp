#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Hunt_Volcanic_LavaLizard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_Missions_Hunt_Volcanic_LavaLizard.LootItemSet_Missions_Hunt_Volcanic_LavaLizard_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Missions_Hunt_Volcanic_LavaLizard_C : public ULootItemSet_Missions_Hunt_Volcanic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Missions_Hunt_Volcanic_LavaLizard.LootItemSet_Missions_Hunt_Volcanic_LavaLizard_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Missions_Hunt_Volcanic_LavaLizard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
