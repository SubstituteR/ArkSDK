#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjCherufe_Rock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjCherufe_Rock.ProjCherufe_Rock_C
// 0x0000 (0x0658 - 0x0658)
class AProjCherufe_Rock_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjCherufe_Rock.ProjCherufe_Rock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjCherufe_Rock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
