#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern.DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern_C : public UDinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern.DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_MegaFireWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
