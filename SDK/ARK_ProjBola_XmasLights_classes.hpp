#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBola_XmasLights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBola_XmasLights.ProjBola_XmasLights_C
// 0x0000 (0x06E8 - 0x06E8)
class AProjBola_XmasLights_C : public AProjBola_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBola_XmasLights.ProjBola_XmasLights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjBola_XmasLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
