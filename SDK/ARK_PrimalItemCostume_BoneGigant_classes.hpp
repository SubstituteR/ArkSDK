#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCostume_BoneGigant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BoneGigant.PrimalItemCostume_BoneGigant_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCostume_BoneGigant_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BoneGigant.PrimalItemCostume_BoneGigant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BoneGigant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
