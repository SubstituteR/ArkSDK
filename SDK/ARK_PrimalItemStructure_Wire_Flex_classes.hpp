#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Wire_Flex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Wire_Flex.PrimalItemStructure_Wire_Flex_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Wire_Flex_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Wire_Flex.PrimalItemStructure_Wire_Flex_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Wire_Flex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
