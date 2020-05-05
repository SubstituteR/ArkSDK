#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Yutyrannus_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Snow_Yutyrannus_Character_BP_Hunt.Snow_Yutyrannus_Character_BP_Hunt_C
// 0x0008 (0x23C8 - 0x23C0)
class ASnow_Yutyrannus_Character_BP_Hunt_C : public ASnow_Yutyrannus_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Yutyrannus_Hunt_C* DinoCharacterStatus_BP_Yutyrannus_Hunt_C1;                // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Yutyrannus_Character_BP_Hunt.Snow_Yutyrannus_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Snow_Yutyrannus_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
