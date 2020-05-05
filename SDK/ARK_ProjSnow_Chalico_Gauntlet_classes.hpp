#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjSnow_Chalico_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C
// 0x0000 (0x0668 - 0x0668)
class AProjSnow_Chalico_Gauntlet_C : public AProjSnow_Chalico_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSnow_Chalico_Gauntlet.ProjSnow_Chalico_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSnow_Chalico_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
