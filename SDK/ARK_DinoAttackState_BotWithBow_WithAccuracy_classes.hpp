#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithBow_WithAccuracy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_BotWithBow_WithAccuracy.DinoAttackState_BotWithBow_WithAccuracy_C
// 0x0000 (0x00C0 - 0x00C0)
class UDinoAttackState_BotWithBow_WithAccuracy_C : public UPrimalAIStateBotRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_BotWithBow_WithAccuracy.DinoAttackState_BotWithBow_WithAccuracy_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackState_BotWithBow_WithAccuracy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
