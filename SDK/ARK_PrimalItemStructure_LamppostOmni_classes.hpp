#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_LamppostOmni_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_LamppostOmni_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_LamppostOmni(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
