#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjClusterGrenadeFragment_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjClusterGrenadeFragment_Gauntlet.ProjClusterGrenadeFragment_Gauntlet_C
// 0x0000 (0x06CF - 0x06CF)
class AProjClusterGrenadeFragment_Gauntlet_C : public AProjClusterGrenadeFragment_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjClusterGrenadeFragment_Gauntlet.ProjClusterGrenadeFragment_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjClusterGrenadeFragment_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
