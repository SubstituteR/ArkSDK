#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternBird_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternBird_Character_BP.LanternBird_Character_BP_C
// 0x0008 (0x2440 - 0x2438)
class ALanternBird_Character_BP_C : public ALanternPet_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_LanternBird_C* DinoCharacterStatus_BP_LanternBird_C1;                    // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternBird_Character_BP.LanternBird_Character_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ForceFlyAfterDelay();
	void ExecuteUbergraph_LanternBird_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
