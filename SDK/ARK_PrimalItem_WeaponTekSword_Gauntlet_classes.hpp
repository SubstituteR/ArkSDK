#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponTekSword_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekSword_Gauntlet.PrimalItem_WeaponTekSword_Gauntlet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponTekSword_Gauntlet_C : public UPrimalItem_WeaponTekSword_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekSword_Gauntlet.PrimalItem_WeaponTekSword_Gauntlet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponTekSword_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
