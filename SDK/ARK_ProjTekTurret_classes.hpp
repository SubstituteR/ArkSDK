#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjTekTurret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekTurret.ProjTekTurret_C
// 0x0000 (0x0658 - 0x0658)
class AProjTekTurret_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekTurret.ProjTekTurret_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
