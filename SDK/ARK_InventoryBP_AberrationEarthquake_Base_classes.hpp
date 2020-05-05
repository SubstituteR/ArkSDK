#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InventoryBP_AberrationEarthquake_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryBP_AberrationEarthquake_Base.InventoryBP_AberrationEarthquake_Base_C
// 0x0000 (0x0570 - 0x0570)
class UInventoryBP_AberrationEarthquake_Base_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryBP_AberrationEarthquake_Base.InventoryBP_AberrationEarthquake_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryBP_AberrationEarthquake_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
