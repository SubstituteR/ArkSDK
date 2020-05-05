#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithMeleeWeapon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackState_BotWithMeleeWeapon_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C");
		return ptr;
	}


	void BPGetSocketLocation(struct FName* SocketName, struct FVector* SocketLocation);
	void ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
