#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Gasoline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C");
		return ptr;
	}


	void CheckForGasolineData(class UPrimalItem* DestinationItem, bool* SupportsDragOn);
	void RefillGasoline(class UPrimalItem* DestinationItem);
	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem** DestinationItem);
	void ExecuteUbergraph_PrimalItemResource_Gasoline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
