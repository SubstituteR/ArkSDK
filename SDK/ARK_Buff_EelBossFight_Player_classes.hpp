#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_EelBossFight_Player_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EelBossFight_Player.Buff_EelBossFight_Player_C
// 0x0268 (0x0B98 - 0x0930)
class ABuff_EelBossFight_Player_C : public APrimalBuff
{
public:
	struct FHUDElement                                 HUD_BossHealth_ProgressBar;                               // 0x0930(0x00C8) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              BossRemainingHealth;                                      // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BossMaxHealth;                                            // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBossInvulnerable;                                       // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	struct FHUDElement                                 HUD_BossHealth_OuterFrame;                                // 0x0A08(0x00C8) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FHUDElement                                 HUD_BossName;                                             // 0x0AD0(0x00C8) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EelBossFight_Player.Buff_EelBossFight_Player_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EelBossFight_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
