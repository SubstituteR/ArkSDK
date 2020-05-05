#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_RetrieveItem_Egg_Cherufe_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_RetrieveItem_Egg_Cherufe_Hard.MissionType_RetrieveItem_Egg_Cherufe_Hard_C
// 0x0000 (0x1CA1 - 0x1CA1)
class AMissionType_RetrieveItem_Egg_Cherufe_Hard_C : public AMissionType_RetrieveItem_Egg_Cherufe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_RetrieveItem_Egg_Cherufe_Hard.MissionType_RetrieveItem_Egg_Cherufe_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
