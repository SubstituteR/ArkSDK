#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithTekRifle_WithAccuracy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C
// 0x0000 (0x00C0 - 0x00C0)
class UDinoAttackState_BotWithTekRifle_WithAccuracy_C : public UPrimalAIStateBotRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C");
		return ptr;
	}


	struct FVector BPGetSocketLocation();
	void ExecuteUbergraph_DinoAttackState_BotWithTekRifle_WithAccuracy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
