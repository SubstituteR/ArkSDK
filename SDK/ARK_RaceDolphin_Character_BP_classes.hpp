#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RaceDolphin_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RaceDolphin_Character_BP.RaceDolphin_Character_BP_C
// 0x0008 (0x2118 - 0x2110)
class ARaceDolphin_Character_BP_C : public ADolphin_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_RaceDino_C* DinoCharacterStatus_BP_RaceDino_C1;                       // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RaceDolphin_Character_BP.RaceDolphin_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RaceDolphin_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
