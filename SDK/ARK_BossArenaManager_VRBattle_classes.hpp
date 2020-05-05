#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BossArenaManager_VRBattle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossArenaManager_VRBattle.BossArenaManager_VRBattle_C
// 0x0022 (0x04E2 - 0x04C0)
class ABossArenaManager_VRBattle_C : public AGenesisBossArenaManager_C
{
public:
	struct FVector                                     LastTeleportFromLocation;                                 // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x04CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class FString                                      CallFunc_BuildString_Vector_ReturnValue;                  // 0x04D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsStandalone_ReturnValue;                        // 0x04E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x04E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_VRBattle.BossArenaManager_VRBattle_C");
		return ptr;
	}


	void IsAVRBattleMissionActive_(bool* FoundAVRMission);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BossArenaManager_VRBattle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
