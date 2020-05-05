#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Plesiosaur_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Plesiosaur_Character_BP_Hunt.Plesiosaur_Character_BP_Hunt_C
// 0x0008 (0x2120 - 0x2118)
class APlesiosaur_Character_BP_Hunt_C : public APlesiosaur_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Plesiosaur_Hunt_C* DinoCharacterStatus_BP_Plesiosaur_Hunt_C1;                // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plesiosaur_Character_BP_Hunt.Plesiosaur_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Plesiosaur_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
