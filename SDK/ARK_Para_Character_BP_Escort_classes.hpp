#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Para_Character_BP_Escort.Para_Character_BP_Escort_C
// 0x001F (0x2318 - 0x22F9)
class APara_Character_BP_Escort_C : public APara_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x22F9(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EscortDino_Group_C* DinoCharacterStatus_BP_EscortDino_Group_C1;               // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AllowEscortBuffClasses;                                   // 0x2308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Para_Character_BP_Escort.Para_Character_BP_Escort_C");
		return ptr;
	}


	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	bool AllowGrappling();
	void DelayEscape();
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BPDisplayTamedMessage();
	void DelayRoar();
	void UserConstructionScript();
	void ExecuteUbergraph_Para_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
