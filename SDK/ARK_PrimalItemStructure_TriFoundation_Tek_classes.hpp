#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TriFoundation_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Tek.PrimalItemStructure_TriFoundation_Tek_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TriFoundation_Tek_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Tek.PrimalItemStructure_TriFoundation_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriFoundation_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
