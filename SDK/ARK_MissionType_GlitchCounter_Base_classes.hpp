#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GlitchCounter_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C
// 0x001D (0x09F8 - 0x09DB)
class AMissionType_GlitchCounter_Base_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x09DB(0x0005) MISSED OFFSET
	TArray<struct FName>                               GlitchTags;                                               // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CompleteGlitchesKey;                                      // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C");
		return ptr;
	}


	void OnUnlockedExplorerNote();
	void GetCompletedGlitchCount(class AShooterCharacter* Character, int* CountCompleted);
	void StaticOnReplicatedMissionDataUpdated(class APrimalBuff_MissionData** missionData);
	void StaticOnMissionDataInitialized(class APrimalBuff_MissionData** missionData);
	class FString STATIC_GetMissionDisplayName(class APlayerController** ShootCont);
	void GetNumGlitchesCompleted(class AShooterCharacter* ShooterCharacter, int* ret);
	int GetIntFromMissionType(struct FName* Tag, class AShooterCharacter** PlayerPawn);
	bool IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_GlitchCounter_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
