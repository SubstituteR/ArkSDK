#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapBola_XmasLights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBola_XmasLights.WeapBola_XmasLights_C
// 0x0000 (0x0E78 - 0x0E78)
class AWeapBola_XmasLights_C : public AWeapBola_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBola_XmasLights.WeapBola_XmasLights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBola_XmasLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
