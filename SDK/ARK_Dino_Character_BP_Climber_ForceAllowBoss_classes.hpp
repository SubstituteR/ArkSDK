#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dino_Character_BP_Climber_ForceAllowBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C
// 0x0000 (0x2E30 - 0x2E30)
class ADino_Character_BP_Climber_ForceAllowBoss_C : public ADino_Character_BP_Climber_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_Climber_ForceAllowBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
