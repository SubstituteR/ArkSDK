#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Boa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Boa.PrimalItemConsumable_Egg_Boa_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Egg_Boa_C : public UPrimalItemConsumable_Egg_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Boa.PrimalItemConsumable_Egg_Boa_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Boa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
