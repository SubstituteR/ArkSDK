#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_Respawn_Intro_World_Rig_Child_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C
// 0x0000 (0x0478 - 0x0478)
class AGenesis_Respawn_Intro_World_Rig_Child_C : public AGenesis_Intro_World_Rig_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Genesis_Respawn_Intro_World_Rig_Child(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
