#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapRocketLauncher_Firework_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C
// 0x0000 (0x0DF8 - 0x0DF8)
class AWeapRocketLauncher_Firework_C : public AWeapRocketLauncher_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRocketLauncher_Firework(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
