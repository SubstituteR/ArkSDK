#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGun_Impacts_TekSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C
// 0x0000 (0x0848 - 0x0848)
class AWeapGun_Impacts_TekSword_C : public AWeapGun_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGun_Impacts_TekSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
