#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Veggie_Citronal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Veggie_Citronal_C : public UPrimalItemConsumable_Veggie_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
