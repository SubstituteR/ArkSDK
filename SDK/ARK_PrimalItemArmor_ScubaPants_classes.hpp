#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_ScubaPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ScubaPants.PrimalItemArmor_ScubaPants_C
// 0x0000 (0x09D8 - 0x09D8)
class UPrimalItemArmor_ScubaPants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ScubaPants.PrimalItemArmor_ScubaPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ScubaPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
