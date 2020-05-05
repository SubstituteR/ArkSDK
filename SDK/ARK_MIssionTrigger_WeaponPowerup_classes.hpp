#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MIssionTrigger_WeaponPowerup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C
// 0x0008 (0x0848 - 0x0840)
class AMissionTrigger_WeaponPowerup_C : public AMissionTrigger
{
public:
	class APrimalBuff*                                 AssociatedBuffActor;                                      // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionTrigger_WeaponPowerup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
