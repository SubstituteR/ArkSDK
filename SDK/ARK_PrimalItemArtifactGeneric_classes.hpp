#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArtifactGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifactGeneric.PrimalItemArtifactGeneric_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArtifactGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifactGeneric.PrimalItemArtifactGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifactGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
