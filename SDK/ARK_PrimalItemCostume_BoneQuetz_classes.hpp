#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCostume_BoneQuetz_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BoneQuetz.PrimalItemCostume_BoneQuetz_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCostume_BoneQuetz_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BoneQuetz.PrimalItemCostume_BoneQuetz_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BoneQuetz(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
