#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemWeaponGenericAmmolessConsumeSelf_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf.PrimalItemWeaponGenericAmmolessConsumeSelf_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemWeaponGenericAmmolessConsumeSelf_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf.PrimalItemWeaponGenericAmmolessConsumeSelf_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
