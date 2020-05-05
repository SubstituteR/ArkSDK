#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GiantTurtle_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiantTurtle_Character_BP_Escort.GiantTurtle_Character_BP_Escort_C
// 0x0018 (0x2740 - 0x2728)
class AGiantTurtle_Character_BP_Escort_C : public AGiantTurtle_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_EscortDino_C* DinoCharacterStatus_BP_EscortDino_C1;                     // 0x2728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AllowEscortBuffClasses;                                   // 0x2730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GiantTurtle_Character_BP_Escort.GiantTurtle_Character_BP_Escort_C");
		return ptr;
	}


	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	bool AllowGrappling();
	void DelayEscape();
	bool BPDisplayTamedMessage();
	void UserConstructionScript();
	void ExecuteUbergraph_GiantTurtle_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
