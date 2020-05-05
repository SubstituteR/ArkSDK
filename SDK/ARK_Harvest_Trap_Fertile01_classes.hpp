#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Harvest_Trap_Fertile01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Harvest_Trap_Fertile01.Harvest_Trap_Fertile01_C
// 0x0000 (0x0240 - 0x0240)
class UHarvest_Trap_Fertile01_C : public USeedHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Harvest_Trap_Fertile01.Harvest_Trap_Fertile01_C");
		return ptr;
	}


	void ExecuteUbergraph_Harvest_Trap_Fertile01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
