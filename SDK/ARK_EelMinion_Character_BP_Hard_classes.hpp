#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EelMinion_Character_BP_Hard.EelMinion_Character_BP_Hard_C
// 0x000C (0x2198 - 0x218C)
class AEelMinion_Character_BP_Hard_C : public AEelMinion_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x218C(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EelMinion_Hard_C* DinoCharacterStatus_BP_EelMinion_Hard_C1;                 // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EelMinion_Character_BP_Hard.EelMinion_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EelMinion_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
