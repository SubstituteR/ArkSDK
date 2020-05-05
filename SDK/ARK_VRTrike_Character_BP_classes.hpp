#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRTrike_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRTrike_Character_BP.VRTrike_Character_BP_C
// 0x002D (0x2850 - 0x2823)
class AVRTrike_Character_BP_C : public ATrike_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x2823(0x0005) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Trike_VR_C* DinoCharacterStatus_BP_Trike_VR_C1;                       // 0x2828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        RBack_Light;                                              // 0x2830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        LBack_Light;                                              // 0x2838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        RFront_Light;                                             // 0x2840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        LFront_Light;                                             // 0x2848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRTrike_Character_BP.VRTrike_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VRTrike_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
