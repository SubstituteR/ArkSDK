#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Iguanodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Iguanodon_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C");
		return ptr;
	}


	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	void BPNotifyItemRemoved(class UPrimalItem** anItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
