#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_Character_BP_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EelBoss_Character_BP_Medium.EelBoss_Character_BP_Medium_C
// 0x000A (0x22C0 - 0x22B6)
class AEelBoss_Character_BP_Medium_C : public AEelBoss_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x22B6(0x0002) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EelBoss_Medium_C* DinoCharacterStatus_BP_EelBoss_Medium_C1;                 // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EelBoss_Character_BP_Medium.EelBoss_Character_BP_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EelBoss_Character_BP_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
