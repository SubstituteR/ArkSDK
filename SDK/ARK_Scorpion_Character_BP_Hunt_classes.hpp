#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Scorpion_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C
// 0x0008 (0x2118 - 0x2110)
class AScorpion_Character_BP_Hunt_C : public AScorpion_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Scorpion_Hunt_C* DinoCharacterStatus_BP_Scorpion_Hunt_C1;                  // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Scorpion_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
