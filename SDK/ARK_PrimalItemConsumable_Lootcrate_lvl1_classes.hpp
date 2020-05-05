#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Lootcrate_lvl1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Lootcrate_lvl1.PrimalItemConsumable_Lootcrate_lvl1_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Lootcrate_lvl1_C : public UPrimalItemConsumable_Lootcrate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Lootcrate_lvl1.PrimalItemConsumable_Lootcrate_lvl1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
