#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C
// 0x0008 (0x2118 - 0x2110)
class ADodo_Character_BP_Aggressive_C : public ADodo_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodo_Character_BP_Aggressive.Dodo_Character_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dodo_Character_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
