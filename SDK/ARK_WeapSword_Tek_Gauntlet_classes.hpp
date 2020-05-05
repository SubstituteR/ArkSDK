#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSword_Tek_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C
// 0x0000 (0x0DC2 - 0x0DC2)
class AWeapSword_Tek_Gauntlet_C : public AWeapSword_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Tek_Gauntlet.WeapSword_Tek_Gauntlet_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void BPPreInitializeComponents();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapSword_Tek_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
