#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_MetalTrapdoorGiant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalTrapdoorGiant.PrimalItemStructure_MetalTrapdoorGiant_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_MetalTrapdoorGiant_C : public UPrimalItemStructure_BaseTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalTrapdoorGiant.PrimalItemStructure_MetalTrapdoorGiant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalTrapdoorGiant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
