#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basilisk_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C
// 0x0008 (0x27B8 - 0x27B0)
class ABasilisk_Character_BP_Hunt_C : public ABasilisk_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Basilisk_Hunt_C* DinoCharacterStatus_BP_Basilisk_Hunt_C1;                  // 0x27B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C");
		return ptr;
	}


	void BPTimerServer();
	void ForceDiveEnd();
	void DiveEnd();
	void FindNearbyEggs(bool* StartSeeking);
	void UserConstructionScript();
	void ExecuteUbergraph_Basilisk_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
