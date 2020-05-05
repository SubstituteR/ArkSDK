#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C
// 0x002F (0x1AB8 - 0x1A89)
class AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C : public AMissionType_Fishing_OnlyNormalFishEndImmediately_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1A89(0x0007) MISSED OFFSET
	struct FText                                       GivenWeaponNotificationString;                            // 0x1A90(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C");
		return ptr;
	}


	void OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
