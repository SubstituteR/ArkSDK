#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TreePlatform_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TreePlatform_Wood_C : public UPrimalItemStructure_BaseLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
