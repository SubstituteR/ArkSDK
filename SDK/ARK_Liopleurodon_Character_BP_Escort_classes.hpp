#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C
// 0x0028 (0x2280 - 0x2258)
class ALiopleurodon_Character_BP_Escort_C : public ALiopleurodon_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Liopleurodon_NonMagic_C* DinoCharacterStatus_BP_Liopleurodon_NonMagic_C1;          // 0x2258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              K2Node_Event_Damage;                                      // 0x2260(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x2268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x2270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x2278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExecuteUbergraph_Liopleurodon_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
