#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumableSoap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableSoap.PrimalItemConsumableSoap_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumableSoap_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableSoap.PrimalItemConsumableSoap_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableSoap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
