#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Carnivore_Mega_Raptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Mega_Raptor.DinoDropInventoryComponent_Carnivore_Mega_Raptor_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Carnivore_Mega_Raptor_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Mega_Raptor.DinoDropInventoryComponent_Carnivore_Mega_Raptor_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Mega_Raptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
