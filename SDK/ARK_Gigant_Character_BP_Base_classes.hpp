#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gigant_Character_BP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gigant_Character_BP_Base.Gigant_Character_BP_Base_C
// 0x0008 (0x2110 - 0x2108)
class AGigant_Character_BP_Base_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Gigant_C*   DinoCharacterStatus_BP_Gigant_C1;                         // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gigant_Character_BP_Base.Gigant_Character_BP_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gigant_Character_BP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
