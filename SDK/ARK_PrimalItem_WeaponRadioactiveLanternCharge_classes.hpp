#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponRadioactiveLanternCharge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponRadioactiveLanternCharge.PrimalItem_WeaponRadioactiveLanternCharge_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponRadioactiveLanternCharge_C : public UPrimalItemWeapon_StoresCharge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponRadioactiveLanternCharge.PrimalItem_WeaponRadioactiveLanternCharge_C");
		return ptr;
	}


	class FString BPGetCustomInventoryWidgetText();
	void ExecuteUbergraph_PrimalItem_WeaponRadioactiveLanternCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
