#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponElectronicBinoculars_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponElectronicBinoculars_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponElectronicBinoculars(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
