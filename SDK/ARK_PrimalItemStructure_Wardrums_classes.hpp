#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Wardrums_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Wardrums.PrimalItemStructure_Wardrums_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Wardrums_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Wardrums.PrimalItemStructure_Wardrums_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Wardrums(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
