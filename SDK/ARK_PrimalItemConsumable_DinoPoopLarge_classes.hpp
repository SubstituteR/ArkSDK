#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_DinoPoopLarge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_DinoPoopLarge_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_DinoPoopLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
