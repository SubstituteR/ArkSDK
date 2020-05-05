#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt.Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt_C
// 0x000E (0x28B8 - 0x28AA)
class AXenomorph_Character_BP_Male_InitialBuryOnly_Hunt_C : public AXenomorph_Character_BP_Male_InitialBuryOnly_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x28AA(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Xenomorph_Hunt_C* DinoCharacterStatus_BP_Xenomorph_Hunt_C1;                 // 0x28B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt.Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
