#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttackStateRanged_Fireball_Cherufe_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C
// 0x0000 (0x00B0 - 0x00B0)
class UAttackStateRanged_Fireball_Cherufe_Gauntlet_C : public UAttackStateRanged_Fireball_Cherufe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C");
		return ptr;
	}


	void STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
