#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_AIController_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pteroteuthis_AIController_BP_Gauntlet.Pteroteuthis_AIController_BP_Gauntlet_C
// 0x0000 (0x0920 - 0x0920)
class APteroteuthis_AIController_BP_Gauntlet_C : public APteroteuthis_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pteroteuthis_AIController_BP_Gauntlet.Pteroteuthis_AIController_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Pteroteuthis_AIController_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
