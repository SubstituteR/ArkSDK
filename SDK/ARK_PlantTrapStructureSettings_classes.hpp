#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PlantTrapStructureSettings_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlantTrapStructureSettings.PlantTrapStructureSettings_C
// 0x0000 (0x0050 - 0x0050)
class UPlantTrapStructureSettings_C : public UPrimalStructureSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlantTrapStructureSettings.PlantTrapStructureSettings_C");
		return ptr;
	}


	void ExecuteUbergraph_PlantTrapStructureSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
