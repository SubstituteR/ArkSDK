#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Rhino_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rhino_Character_BP.Rhino_Character_BP_C
// 0x000C (0x2114 - 0x2108)
class ARhino_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Rhino_C*    DinoCharacterStatus_BP_Rhino_C1;                          // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExtraSpeedAdditionalDamagePercent;                     // 0x2110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rhino_Character_BP.Rhino_Character_BP_C");
		return ptr;
	}


	void GetBestExtraRunSpeedModifier(float* Out);
	float BPGetExtraMeleeDamageModifier();
	float BPGetHUDOverrideBuffProgressBarPercent();
	void GetExtraRunSpeedModifierPercent(float* PercentVal);
	void UserConstructionScript();
	void ExecuteUbergraph_Rhino_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
