#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leedsichthys_AIController_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leedsichthys_AIController_BP_Hunt.Leedsichthys_AIController_BP_Hunt_C
// 0x0000 (0x0918 - 0x0918)
class ALeedsichthys_AIController_BP_Hunt_C : public ALeedsichthys_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leedsichthys_AIController_BP_Hunt.Leedsichthys_AIController_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Leedsichthys_AIController_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
