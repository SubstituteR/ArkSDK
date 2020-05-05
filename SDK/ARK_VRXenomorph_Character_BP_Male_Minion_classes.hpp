#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRXenomorph_Character_BP_Male_Minion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C
// 0x000F (0x2898 - 0x2889)
class AVRXenomorph_Character_BP_Male_Minion_C : public AXenomorph_Character_BP_Male_Minion_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2889(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Reaper_VR_C* DinoCharacterStatus_BP_Reaper_VR_C1;                      // 0x2890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VRXenomorph_Character_BP_Male_Minion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
