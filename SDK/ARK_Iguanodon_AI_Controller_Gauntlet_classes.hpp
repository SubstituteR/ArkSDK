#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Iguanodon_AI_Controller_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class AIguanodon_AI_Controller_Gauntlet_C : public AIguanodon_AI_Controller_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Iguanodon_AI_Controller_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
