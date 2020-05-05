#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_Stage2_Player_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_VRBattle_Stage2_Player.Buff_VRBattle_Stage2_Player_C
// 0x0000 (0x13C0 - 0x13C0)
class ABuff_VRBattle_Stage2_Player_C : public ABuff_VRBattle_Player_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_VRBattle_Stage2_Player.Buff_VRBattle_Stage2_Player_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_VRBattle_Stage2_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
