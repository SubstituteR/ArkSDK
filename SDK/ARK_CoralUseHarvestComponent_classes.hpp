#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CoralUseHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CoralUseHarvestComponent.CoralUseHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UCoralUseHarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CoralUseHarvestComponent.CoralUseHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_CoralUseHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
