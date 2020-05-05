#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Female_InitialBuryOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C
// 0x000D (0x28D1 - 0x28C4)
class AXenomorph_Character_BP_Female_InitialBuryOnly_C : public AXenomorph_Character_BP_Female_C
{
public:
	bool                                               SpawnUnderground;                                         // 0x28C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnburyOnSpawnUnderground;                                 // 0x28C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnburyTargetingIgnoredByWildDinos;                        // 0x28C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x28C7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_GetDefaultXeno_Dino;                             // 0x28C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x28D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C");
		return ptr;
	}


	void KillSelf();
	void BP_OnSetDeath();
	void DiveEnd();
	void GetDefaultXeno(class APrimalDinoCharacter** Dino);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPDinoPostBeginPlay();
	void AttemptDiveOut();
	void ForceDiveEnd();
	void ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
