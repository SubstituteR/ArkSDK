#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_IcedCanteenRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_IcedCanteenRefill_C : public UPrimalItemConsumable_IcedCanteen_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
