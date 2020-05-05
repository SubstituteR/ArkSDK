#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_RetrieveItem_Egg_Cherufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C
// 0x0000 (0x1CA1 - 0x1CA1)
class AMissionType_RetrieveItem_Egg_Cherufe_C : public AMissionType_Retrieve_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C");
		return ptr;
	}


	void ExtraSpecificDinoSetup(class APrimalDinoCharacter** Dino, class AMissionServerSidePoint** Spawner, bool* IsAttackerDino);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
