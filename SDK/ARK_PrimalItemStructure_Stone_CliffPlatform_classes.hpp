#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Stone_CliffPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Stone_CliffPlatform.PrimalItemStructure_Stone_CliffPlatform_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Stone_CliffPlatform_C : public UPrimalItemStructure_BaseCliffPlatform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Stone_CliffPlatform.PrimalItemStructure_Stone_CliffPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Stone_CliffPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
