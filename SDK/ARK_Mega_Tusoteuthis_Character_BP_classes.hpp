#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mega_Tusoteuthis_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C
// 0x0008 (0x2658 - 0x2650)
class AMega_Tusoteuthis_Character_BP_C : public ATusoteuthis_Character_BP_C
{
public:
	class UMega_DinoCharacterStatusComponent_BP_Tuso_C* Mega_DinoCharacterStatus_BP_Tuso_C1;                      // 0x2650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mega_Tusoteuthis_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
