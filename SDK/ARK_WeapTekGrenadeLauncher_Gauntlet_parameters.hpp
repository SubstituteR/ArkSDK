#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTekGrenadeLauncher_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.BPStartEquippedNotify
struct AWeapTekGrenadeLauncher_Gauntlet_C_BPStartEquippedNotify_Params
{
};

// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.GetAmmoCountOfType
struct AWeapTekGrenadeLauncher_Gauntlet_C_GetAmmoCountOfType_Params
{
	class UClass**                                     AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvailableAmmo;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.UserConstructionScript
struct AWeapTekGrenadeLauncher_Gauntlet_C_UserConstructionScript_Params
{
};

// Function WeapTekGrenadeLauncher_Gauntlet.WeapTekGrenadeLauncher_Gauntlet_C.ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet
struct AWeapTekGrenadeLauncher_Gauntlet_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
