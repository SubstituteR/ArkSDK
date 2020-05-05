#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_EelBoss_AOE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackState_EelBoss_AOE_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C");
		return ptr;
	}


	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void ExecuteUbergraph_DinoAttackState_EelBoss_AOE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
