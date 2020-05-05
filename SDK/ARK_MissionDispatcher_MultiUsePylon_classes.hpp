#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionDispatcher_MultiUsePylon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C
// 0x00BA (0x0EEA - 0x0E30)
class AMissionDispatcher_MultiUsePylon_C : public AMissionDispatcher
{
public:
	class UAudioComponent*                             IdleAudio;                                                // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Sidewing3;                                                // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Sidewng2;                                                 // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Sidewing1;                                                // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IconEndBeam;                                              // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FUI_Screen3;                                              // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FUI_Screen2;                                              // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FUI_Screen1;                                              // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Console3;                                                 // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Console2;                                                 // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Console1;                                                 // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MissionTypeIndex;                                         // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E8C(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     MissionTypeFUIParticles;                                  // 0x0E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     EndBeamParticles;                                         // 0x0EA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             IdleSound;                                                // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRampIndex;                                         // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MeshMID;                                                  // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ActiveColor;                                              // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                InactiveColor;                                            // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_active;                                // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C");
		return ptr;
	}


	void BPDeactivateMissionActors();
	void BPActivateMissionActors();
	void SetColorParams(bool Active);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void ReceiveBeginPlay();
	void BPOnMissionStarted(class AMissionType** NewMission, class AShooterCharacter** StartingCharacter);
	void BPOnRunningMissionDeactivated(class AMissionType** Mission);
	void UserConstructionScript();
	void Initialize();
	void MultiSetColorParams(bool Active);
	void ExecuteUbergraph_MissionDispatcher_MultiUsePylon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
