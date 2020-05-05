#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Saber_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Snow_Saber_Character_BP_Hunt.Snow_Saber_Character_BP_Hunt_C
// 0x0008 (0x2138 - 0x2130)
class ASnow_Saber_Character_BP_Hunt_C : public ASnow_Saber_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Saber_Hunt_C* DinoCharacterStatus_BP_Saber_Hunt_C1;                     // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Saber_Character_BP_Hunt.Snow_Saber_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Snow_Saber_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
