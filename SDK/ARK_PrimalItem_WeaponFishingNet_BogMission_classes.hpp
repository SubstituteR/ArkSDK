#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponFishingNet_BogMission_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponFishingNet_BogMission.PrimalItem_WeaponFishingNet_BogMission_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponFishingNet_BogMission_C : public UPrimalItem_WeaponFishingNet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponFishingNet_BogMission.PrimalItem_WeaponFishingNet_BogMission_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponFishingNet_BogMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
