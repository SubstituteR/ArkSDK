#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemWeaponGenericGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemWeaponGenericGun_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
