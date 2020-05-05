#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_VRBattleSpawnPortal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C
// 0x006C (0x0514 - 0x04A8)
class AMissionServerSidePoint_VRBattleSpawnPortal_C : public AMissionServerSidePoint
{
public:
	class UTextRenderComponent*                        WaveNum;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Activated;                                                // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              ActivationTime;                                           // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActivating_;                                            // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	double                                             LastActivationTime;                                       // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReadyToSpawn;                                           // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVRBattleWeightedBurst                      SpawningBattleWaveGroup;                                  // 0x04E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                WaveIndex;                                                // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                groupIndex;                                               // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumAIToSpawn;                                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_WaveIndex;                             // 0x0508(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_GroupIndex;                            // 0x050C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NumToSpawn;                            // 0x0510(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C");
		return ptr;
	}


	void UserConstructionScript();
	void Server_Activate(int WaveIndex, int groupIndex, int NumToSpawn);
	void ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal(int EntryPoint);
	void OnReadyToSpawn__DelegateSignature(class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
