#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_BaseCliffPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_BaseCliffPlatform_C : public UPrimalItemStructure_BaseCeiling_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
