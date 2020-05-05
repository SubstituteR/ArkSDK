#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ptero_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C
// 0x0018 (0x2128 - 0x2110)
class APtero_Character_BP_Escort_C : public APtero_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_EscortDino_C* DinoCharacterStatus_BP_EscortDino_C1;                     // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AllowEscortBuffClasses;                                   // 0x2118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ptero_Character_BP_Escort.Ptero_Character_BP_Escort_C");
		return ptr;
	}


	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	bool AllowGrappling();
	bool BPDisplayTamedMessage();
	void UserConstructionScript();
	void ExecuteUbergraph_Ptero_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
