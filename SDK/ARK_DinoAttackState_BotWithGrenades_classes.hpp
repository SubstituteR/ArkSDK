#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithGrenades_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_BotWithGrenades.DinoAttackState_BotWithGrenades_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_BotWithGrenades_C : public UDinoAttackStateRanged_Leading_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_BotWithGrenades.DinoAttackState_BotWithGrenades_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackState_BotWithGrenades(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
