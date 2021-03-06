#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Piranha_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Piranha_Character_BP.Piranha_Character_BP_C
// 0x0008 (0x2110 - 0x2108)
class APiranha_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Piranha_C*  DinoCharacterStatus_BP_Piranha_C1;                        // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_Character_BP.Piranha_Character_BP_C");
		return ptr;
	}


	void BPTimerServer();
	void UserConstructionScript();
	void ExecuteUbergraph_Piranha_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
