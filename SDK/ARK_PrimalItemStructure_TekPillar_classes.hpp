#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TekPillar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekPillar.PrimalItemStructure_TekPillar_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TekPillar_C : public UPrimalItemStructure_BasePillar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekPillar.PrimalItemStructure_TekPillar_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekPillar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
