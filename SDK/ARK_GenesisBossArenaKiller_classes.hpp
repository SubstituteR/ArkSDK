#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GenesisBossArenaKiller_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GenesisBossArenaKiller.GenesisBossArenaKiller_C
// 0x0069 (0x04C9 - 0x0460)
class AGenesisBossArenaKiller_C : public ASaveGameActorTickable
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnBeginPlay;                                        // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              TeleportActorsGatherRadius;                               // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BossArenaCenterLocation;                                  // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerReturnPos;                                          // 0x047C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ReturnTeleportPosOffset;                                  // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<class UClass*>                              PreventDeletionStructureClasses;                          // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bOnlyResetIfLoadingSaveGame;                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class AVolume*                                     VictimContainerVolume;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UClass*>                              MissionTypesToCheckForActivity;                           // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWasMissionActive;                                        // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenesisBossArenaKiller.GenesisBossArenaKiller_C");
		return ptr;
	}


	void IsMissionActive(bool* OutVal);
	void ReceiveTick(float* DeltaSeconds);
	void Get_All_Actors_in_Boss_Arena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors);
	void Kill_All_Occupants();
	void Teleport_Back_to_Home();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void KillThem();
	void ExecuteUbergraph_GenesisBossArenaKiller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
