#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BattleTartare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BattleTartare.Buff_BattleTartare_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_BattleTartare_C : public ABuff_Base_Stew_DamageBuff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BattleTartare.Buff_BattleTartare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BattleTartare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
