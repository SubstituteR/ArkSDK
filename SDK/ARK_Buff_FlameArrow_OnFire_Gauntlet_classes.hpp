#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_FlameArrow_OnFire_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FlameArrow_OnFire_Gauntlet.Buff_FlameArrow_OnFire_Gauntlet_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_FlameArrow_OnFire_Gauntlet_C : public ABuff_FlameThrower_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FlameArrow_OnFire_Gauntlet.Buff_FlameArrow_OnFire_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FlameArrow_OnFire_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
