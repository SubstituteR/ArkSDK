#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WoodSign_Wall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodSign_Wall.PrimalItemStructure_WoodSign_Wall_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_WoodSign_Wall_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodSign_Wall.PrimalItemStructure_WoodSign_Wall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodSign_Wall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
