#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_Minion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C
// 0x0009 (0x2889 - 0x2880)
class AXenomorph_Character_BP_Male_Minion_C : public AXenomorph_Character_BP_Male_C
{
public:
	class UDinoCharacterStatusComponent_BP_Xenomorph_C* DinoCharacterStatus_BP_Xenomorph_C1;                      // 0x2880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C");
		return ptr;
	}


	void BPTimerServer();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_Minion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
