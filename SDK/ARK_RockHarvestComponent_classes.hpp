#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockHarvestComponent.RockHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class URockHarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockHarvestComponent.RockHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_RockHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
