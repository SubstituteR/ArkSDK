#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Herbivore_Medium_GasBags_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Herbivore_Medium_GasBags.DinoDropInventoryComponent_Herbivore_Medium_GasBags_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Herbivore_Medium_GasBags_C : public UDinoDropInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Herbivore_Medium_GasBags.DinoDropInventoryComponent_Herbivore_Medium_GasBags_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Herbivore_Medium_GasBags(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
