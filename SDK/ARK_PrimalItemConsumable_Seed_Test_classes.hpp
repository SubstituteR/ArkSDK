#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Test_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Test.PrimalItemConsumable_Seed_Test_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Seed_Test_C : public UPrimalItemConsumableSeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Test.PrimalItemConsumable_Seed_Test_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
