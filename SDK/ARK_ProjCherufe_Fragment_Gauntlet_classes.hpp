#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjCherufe_Fragment_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C
// 0x0000 (0x0990 - 0x0990)
class AProjCherufe_Fragment_Gauntlet_C : public AProjCherufe_Fragment_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjCherufe_Fragment_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
