#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Raptor_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bog_Raptor_Character_BP_Hunt.Bog_Raptor_Character_BP_Hunt_C
// 0x000F (0x24D8 - 0x24C9)
class ABog_Raptor_Character_BP_Hunt_C : public ABog_Raptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x24C9(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Raptor_Hunt_C* DinoCharacterStatus_BP_Raptor_Hunt_C1;                    // 0x24D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bog_Raptor_Character_BP_Hunt.Bog_Raptor_Character_BP_Hunt_C");
		return ptr;
	}


	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void UserConstructionScript();
	void ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
