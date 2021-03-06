#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_HazardSuitHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C
// 0x0008 (0x09B8 - 0x09B0)
class UPrimalItemArmor_HazardSuitHelmet_C : public UPrimalItemArmor_BaseHelmet_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C");
		return ptr;
	}


	void BlueprintEquipped(bool* bIsFromSaveGame);
	void EquippedBlueprintTick(float* DeltaSeconds);
	void SetForceGainOxygen(bool Enabled);
	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
