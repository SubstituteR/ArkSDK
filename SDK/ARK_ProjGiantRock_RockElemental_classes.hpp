#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjGiantRock_RockElemental_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C
// 0x0000 (0x0680 - 0x0680)
class AProjGiantRock_RockElemental_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjGiantRock_RockElemental(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
