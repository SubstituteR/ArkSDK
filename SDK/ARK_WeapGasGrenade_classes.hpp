#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGasGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGasGrenade.WeapGasGrenade_C
// 0x0000 (0x0E60 - 0x0E60)
class AWeapGasGrenade_C : public APrimalWeaponGrenade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGasGrenade.WeapGasGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGasGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
