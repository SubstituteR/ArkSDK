#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RaceSnow_Saber_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RaceSnow_Saber_Character_BP.RaceSnow_Saber_Character_BP_C
// 0x0008 (0x2138 - 0x2130)
class ARaceSnow_Saber_Character_BP_C : public ASnow_Saber_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_RaceDino_C* DinoCharacterStatus_BP_RaceDino_C1;                       // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RaceSnow_Saber_Character_BP.RaceSnow_Saber_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RaceSnow_Saber_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
