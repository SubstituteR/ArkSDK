#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_HumanPoop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_HumanPoop.PrimalItemConsumable_HumanPoop_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_HumanPoop_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_HumanPoop.PrimalItemConsumable_HumanPoop_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_HumanPoop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
