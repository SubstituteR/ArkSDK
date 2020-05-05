#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GemBioLumHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GemBioLumHarvestComponent.GemBioLumHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UGemBioLumHarvestComponent_C : public UGemFertileHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GemBioLumHarvestComponent.GemBioLumHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_GemBioLumHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
