#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basilosaurus_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C
// 0x0008 (0x2148 - 0x2140)
class ABasilosaurus_Character_BP_Hunt_C : public ABasilosaurus_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Basil_Hunt_C* DinoCharacterStatus_BP_Basil_Hunt_C1;                     // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Basilosaurus_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
