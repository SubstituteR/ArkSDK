#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvAttackStateFire_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvAttackStateFire_Gauntlet.WyvAttackStateFire_Gauntlet_C
// 0x0000 (0x0090 - 0x0090)
class UWyvAttackStateFire_Gauntlet_C : public UWyvAttackStateFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateFire_Gauntlet.WyvAttackStateFire_Gauntlet_C");
		return ptr;
	}


	void ExecuteUbergraph_WyvAttackStateFire_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
