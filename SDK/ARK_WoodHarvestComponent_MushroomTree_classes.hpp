#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_MushroomTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_MushroomTree.WoodHarvestComponent_MushroomTree_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_MushroomTree_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_MushroomTree.WoodHarvestComponent_MushroomTree_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_MushroomTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
