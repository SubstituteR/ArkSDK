#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MekBackpack_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C
// 0x0004 (0x09BC - 0x09B8)
class UPrimalItemArmor_MekBackpack_Base_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	float                                              DurabilityPercentLossOnUnequip;                           // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
