#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OilHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OilHarvestComponent.OilHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UOilHarvestComponent_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OilHarvestComponent.OilHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_OilHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
