#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InventoryBP_AberrationEarthquake_Fertile01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryBP_AberrationEarthquake_Fertile01.InventoryBP_AberrationEarthquake_Fertile01_C
// 0x0000 (0x0570 - 0x0570)
class UInventoryBP_AberrationEarthquake_Fertile01_C : public UInventoryBP_AberrationEarthquake_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryBP_AberrationEarthquake_Fertile01.InventoryBP_AberrationEarthquake_Fertile01_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryBP_AberrationEarthquake_Fertile01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
