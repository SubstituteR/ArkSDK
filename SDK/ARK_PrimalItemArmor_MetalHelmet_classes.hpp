#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MetalHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_MetalHelmet_C : public UPrimalItemArmor_BaseHelmet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MetalHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
