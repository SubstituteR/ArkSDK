#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDropInventoryComponent_Fireworks_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Fireworks.DinoDropInventoryComponent_Fireworks_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Fireworks_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Fireworks.DinoDropInventoryComponent_Fireworks_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Fireworks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
