#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Doed_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Doed_Character_BP_Race.Doed_Character_BP_Race_C
// 0x0008 (0x2128 - 0x2120)
class ADoed_Character_BP_Race_C : public ADoed_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_RaceDino_C* DinoCharacterStatus_BP_RaceDino_C1;                       // 0x2120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Doed_Character_BP_Race.Doed_Character_BP_Race_C");
		return ptr;
	}


	void BPTimerServer();
	struct FVector BPChargingModifyInputAcceleration(struct FVector* inputAcceleration);
	void UserConstructionScript();
	void ExecuteUbergraph_Doed_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
