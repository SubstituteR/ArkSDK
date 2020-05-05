#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekGrenadeLauncher_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C
// 0x0000 (0x11C5 - 0x11C5)
class AWeapTekGrenadeLauncher_Gauntlet_C : public AWeapTekGrenadeLauncher_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C");
		return ptr;
	}


	void BPStartEquippedNotify();
	void GetAmmoCountOfType(class UClass** AmmoType, int* AvailableAmmo);
	void UserConstructionScript();
	void ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
