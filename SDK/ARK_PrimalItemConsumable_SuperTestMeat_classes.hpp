#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_SuperTestMeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_SuperTestMeat.PrimalItemConsumable_SuperTestMeat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_SuperTestMeat_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_SuperTestMeat.PrimalItemConsumable_SuperTestMeat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_SuperTestMeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
