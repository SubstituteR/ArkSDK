#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_BP_Eel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C
// 0x0010 (0x0580 - 0x0570)
class UDinoTamedInventoryComponent_BP_Eel_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<class UClass*>                              ForceAllowUseItemClasses;                                 // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C");
		return ptr;
	}


	bool OverrideUseItem(class UPrimalItem** theItem);
	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	void ExecuteUbergraph_DinoTamedInventoryComponent_BP_Eel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
