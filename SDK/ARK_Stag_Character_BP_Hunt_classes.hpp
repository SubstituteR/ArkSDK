#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stag_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C
// 0x0008 (0x2118 - 0x2110)
class AStag_Character_BP_Hunt_C : public AStag_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Stag_Hunt_C* DinoCharacterStatus_BP_Stag_Hunt_C1;                      // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Stag_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
