#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Carnivore_Mega_Mosa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Mega_Mosa.DinoDropInventoryComponent_Carnivore_Mega_Mosa_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Carnivore_Mega_Mosa_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Mega_Mosa.DinoDropInventoryComponent_Carnivore_Mega_Mosa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Mega_Mosa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
