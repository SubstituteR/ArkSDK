#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjCatapultBoulder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjCatapultBoulder.ProjCatapultBoulder_C
// 0x0000 (0x0680 - 0x0680)
class AProjCatapultBoulder_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjCatapultBoulder.ProjCatapultBoulder_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjCatapultBoulder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
