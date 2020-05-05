#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Tusoteuthis_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tusoteuthis_Character_BP_Hunt.Tusoteuthis_Character_BP_Hunt_C
// 0x0008 (0x2658 - 0x2650)
class ATusoteuthis_Character_BP_Hunt_C : public ATusoteuthis_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Tuso_Hunt_C* DinoCharacterStatus_BP_Tuso_Hunt_C1;                      // 0x2650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tusoteuthis_Character_BP_Hunt.Tusoteuthis_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tusoteuthis_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
