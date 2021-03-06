#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapWhip_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapWhip.WeapWhip_C
// 0x0008 (0x0DA0 - 0x0D98)
class AWeapWhip_C : public AShooterWeapon_Whip
{
public:
	class USoundCue*                                   GeneralHitSounds;                                         // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapWhip.WeapWhip_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapWhip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
