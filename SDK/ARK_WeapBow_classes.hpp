#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBow.WeapBow_C
// 0x0000 (0x0E78 - 0x0E78)
class AWeapBow_C : public APrimalWeaponBow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow.WeapBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
