#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_OwlPellet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_OwlPellet_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_OwlPellet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
