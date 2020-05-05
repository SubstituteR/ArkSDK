#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterestBP_MissionStart_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C
// 0x0028 (0x0848 - 0x0820)
class APointOfInterestBP_MissionStart_C : public APointOfInterest_Base_BP_C
{
public:
	class AMissionDispatcher*                          MyMissionDispatcher;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class FString                                      ActivateMissionMultiUseString;                            // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AMissionType*                                CurrentMission;                                           // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           MissionStartedByPlayer;                                   // 0x0840(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C");
		return ptr;
	}


	void StartMyMission(class APlayerController* WithPC);
	bool CanBeViewed(class AActor** ByActor);
	void STATIC_CanPlayerStartMyMission(class APlayerController* PC, bool* Result);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_PointOfInterestBP_MissionStart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
