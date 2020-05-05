#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Paracer_AI_Blueprint_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class AParacer_AI_Blueprint_Gauntlet_C : public AParacer_AI_Blueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Paracer_AI_Blueprint_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
