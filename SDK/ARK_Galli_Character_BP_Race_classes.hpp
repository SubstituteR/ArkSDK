#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Galli_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Galli_Character_BP_Race.Galli_Character_BP_Race_C
// 0x0008 (0x2118 - 0x2110)
class AGalli_Character_BP_Race_C : public AGalli_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_RaceDino_C* DinoCharacterStatus_BP_RaceDino_C1;                       // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Galli_Character_BP_Race.Galli_Character_BP_Race_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Galli_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
