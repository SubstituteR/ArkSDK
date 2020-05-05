#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Wood_Hand_HarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wood_Hand_HarvestComponent.Wood_Hand_HarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UWood_Hand_HarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wood_Hand_HarvestComponent.Wood_Hand_HarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_Wood_Hand_HarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
