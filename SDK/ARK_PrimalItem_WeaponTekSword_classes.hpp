#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponTekSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponTekSword_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintOwnerPosssessed(class AController** PossessedByController);
	void InitBuff();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItem_WeaponTekSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
