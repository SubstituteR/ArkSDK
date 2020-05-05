#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GemElementHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GemElementHarvestComponent.GemElementHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UGemElementHarvestComponent_C : public UGemFertileHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GemElementHarvestComponent.GemElementHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_GemElementHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
