#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRGigant_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRGigant_Character_BP.VRGigant_Character_BP_C
// 0x0018 (0x2130 - 0x2118)
class AVRGigant_Character_BP_C : public AGigant_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Gigant_VR_C* DinoCharacterStatus_BP_Gigant_VR_C1;                      // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        RFoot_PointLight1;                                        // 0x2120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        LFoot_PointLight1;                                        // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRGigant_Character_BP.VRGigant_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VRGigant_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
