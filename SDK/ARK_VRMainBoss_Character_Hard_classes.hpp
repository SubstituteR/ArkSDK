#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_Character_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C
// 0x0008 (0x2920 - 0x2918)
class AVRMainBoss_Character_Hard_C : public AVRMainBoss_Character_C
{
public:
	class UDinoCharacterStatusComponent_BP_VRMainBossHard_C* DinoCharacterStatus_BP_VRMainBossHard_C1;                 // 0x2918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VRMainBoss_Character_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
