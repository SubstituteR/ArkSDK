#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dunkle_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dunkle_Character_BP.Dunkle_Character_BP_C
// 0x0008 (0x2110 - 0x2108)
class ADunkle_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Dunkle_C*   DinoCharacterStatus_BP_Dunkle_C1;                         // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dunkle_Character_BP.Dunkle_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dunkle_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
