#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_AIController_BP_Aggressive_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liopleurodon_AIController_BP_Aggressive_Escort.Liopleurodon_AIController_BP_Aggressive_Escort_C
// 0x0000 (0x0911 - 0x0911)
class ALiopleurodon_AIController_BP_Aggressive_Escort_C : public ALiopleurodon_AIController_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Liopleurodon_AIController_BP_Aggressive_Escort.Liopleurodon_AIController_BP_Aggressive_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Liopleurodon_AIController_BP_Aggressive_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
