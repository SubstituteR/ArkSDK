#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponFishingRod_Mission_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponFishingRod_Mission.PrimalItem_WeaponFishingRod_Mission_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponFishingRod_Mission_C : public UPrimalItem_WeaponFishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponFishingRod_Mission.PrimalItem_WeaponFishingRod_Mission_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponFishingRod_Mission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
