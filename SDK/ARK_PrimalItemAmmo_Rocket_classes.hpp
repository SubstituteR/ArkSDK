#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemAmmo_Rocket_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_Rocket.PrimalItemAmmo_Rocket_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemAmmo_Rocket_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_Rocket.PrimalItemAmmo_Rocket_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_Rocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
