#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Carnivore_Large_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Large_RockDrake.DinoDropInventoryComponent_Carnivore_Large_RockDrake_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Carnivore_Large_RockDrake_C : public UDinoDropInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Large_RockDrake.DinoDropInventoryComponent_Carnivore_Large_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Large_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
