#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvAttackStateFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvAttackStateFire.WyvAttackStateFire_C
// 0x0000 (0x0090 - 0x0090)
class UWyvAttackStateFire_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateFire.WyvAttackStateFire_C");
		return ptr;
	}


	void ExecuteUbergraph_WyvAttackStateFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
