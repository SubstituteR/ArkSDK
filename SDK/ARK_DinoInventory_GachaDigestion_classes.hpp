#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoInventory_GachaDigestion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoInventory_GachaDigestion.DinoInventory_GachaDigestion_C
// 0x0000 (0x0570 - 0x0570)
class UDinoInventory_GachaDigestion_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventory_GachaDigestion.DinoInventory_GachaDigestion_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoInventory_GachaDigestion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
