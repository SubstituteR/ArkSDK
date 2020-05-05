#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CoralHitHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CoralHitHarvestComponent.CoralHitHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UCoralHitHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CoralHitHarvestComponent.CoralHitHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_CoralHitHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
