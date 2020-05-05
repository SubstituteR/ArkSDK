#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Seeker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_Seeker.LootItemSet_Seeker_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Seeker_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Seeker.LootItemSet_Seeker_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Seeker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
