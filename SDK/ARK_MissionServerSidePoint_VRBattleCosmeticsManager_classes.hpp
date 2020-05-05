#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_VRBattleCosmeticsManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C
// 0x0024 (0x04CC - 0x04A8)
class AMissionServerSidePoint_VRBattleCosmeticsManager_C : public AMissionServerSidePoint
{
public:
	class AVRBattle_MatineeActor_C*                    MatineeActor;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ACharacter*                                  BossCharacter;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMatineeActor*                               BossDeathMatinee;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABossArenaManager_VRBattle_C*                BossArenaManager;                                         // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x04CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x04CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartVRBattle();
	void EnsureBossIsVisible();
	void ExecuteUbergraph_MissionServerSidePoint_VRBattleCosmeticsManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
