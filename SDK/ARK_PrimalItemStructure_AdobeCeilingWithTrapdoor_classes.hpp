#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_AdobeCeilingWithTrapdoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeCeilingWithTrapdoor.PrimalItemStructure_AdobeCeilingWithTrapdoor_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_AdobeCeilingWithTrapdoor_C : public UPrimalItemStructure_BaseCeilingWithTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeCeilingWithTrapdoor.PrimalItemStructure_AdobeCeilingWithTrapdoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithTrapdoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
