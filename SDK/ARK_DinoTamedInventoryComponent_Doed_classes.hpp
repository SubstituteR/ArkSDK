#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Doed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Doed_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C");
		return ptr;
	}


	float BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Doed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
