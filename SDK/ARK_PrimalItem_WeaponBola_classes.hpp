#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponBola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBola.PrimalItem_WeaponBola_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponBola_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBola.PrimalItem_WeaponBola_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
