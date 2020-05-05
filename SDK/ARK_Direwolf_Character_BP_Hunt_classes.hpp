#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Direwolf_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direwolf_Character_BP_Hunt.Direwolf_Character_BP_Hunt_C
// 0x0008 (0x22D0 - 0x22C8)
class ADirewolf_Character_BP_Hunt_C : public ADirewolf_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Saber_Hunt_C* DinoCharacterStatus_BP_Saber_Hunt_C1;                     // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direwolf_Character_BP_Hunt.Direwolf_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Direwolf_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
