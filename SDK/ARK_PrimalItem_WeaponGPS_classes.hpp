#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponGPS_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponGPS.PrimalItem_WeaponGPS_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponGPS_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponGPS.PrimalItem_WeaponGPS_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponGPS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
