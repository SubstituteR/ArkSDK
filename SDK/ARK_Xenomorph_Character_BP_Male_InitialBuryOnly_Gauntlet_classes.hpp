#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet.Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet_C
// 0x0011 (0x28BB - 0x28AA)
class AXenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet_C : public AXenomorph_Character_BP_Male_InitialBuryOnly_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x28AA(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x28B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x28B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x28B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x28BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet.Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet_C");
		return ptr;
	}


	void AnimNotify_Death();
	void CreateChargeManager();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
