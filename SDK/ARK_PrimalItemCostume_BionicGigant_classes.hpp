#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCostume_BionicGigant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BionicGigant.PrimalItemCostume_BionicGigant_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCostume_BionicGigant_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BionicGigant.PrimalItemCostume_BionicGigant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BionicGigant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
