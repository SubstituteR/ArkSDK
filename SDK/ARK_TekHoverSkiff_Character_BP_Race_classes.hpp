#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekHoverSkiff_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C
// 0x0000 (0x3558 - 0x3558)
class ATekHoverSkiff_Character_BP_Race_C : public ATekHoverSkiff_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C");
		return ptr;
	}


	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	bool BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance);
	bool BP_CanFly();
	void UserConstructionScript();
	void ExecuteUbergraph_TekHoverSkiff_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
