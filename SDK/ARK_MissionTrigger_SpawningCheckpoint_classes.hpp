#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_SpawningCheckpoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C
// 0x008E (0x08CE - 0x0840)
class AMissionTrigger_SpawningCheckpoint_C : public AMissionTrigger
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugServerSidePoints;                                    // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x084C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	TArray<class AMissionServerSidePoint*>             ServerSidePointsToTrigger;                                // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      DinoSpawnCountMultiplier;                                 // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinDinosToSpawn;                                          // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDinosToSpawn;                                          // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CustomCompanionData;                                      // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               OverrideCompanionReaction;                                // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0899(0x0007) MISSED OFFSET
	class USoundBase*                                  ActivationSound;                                          // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  DeactivationSound;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseParticles;                                             // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class UParticleSystem*                             OverrideParticleTemplate;                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideParticleScale;                                    // 0x08C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveSpecific;                                           // 0x08CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveNonSpecific;                                        // 0x08CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_SpawningCheckpoint.MissionTrigger_SpawningCheckpoint_C");
		return ptr;
	}


	void SetActiveCheckpoint(bool Active);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionTrigger_SpawningCheckpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
