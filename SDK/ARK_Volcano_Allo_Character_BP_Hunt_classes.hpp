#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Allo_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C
// 0x0008 (0x21A8 - 0x21A0)
class AVolcano_Allo_Character_BP_Hunt_C : public AVolcano_Allo_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Allo_Hunt_C* DinoCharacterStatus_BP_Allo_Hunt_C1;                      // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Volcano_Allo_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
