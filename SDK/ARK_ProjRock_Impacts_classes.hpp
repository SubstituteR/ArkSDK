#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjRock_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRock_Impacts.ProjRock_Impacts_C
// 0x0000 (0x0848 - 0x0848)
class AProjRock_Impacts_C : public AProjArrow_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock_Impacts.ProjRock_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjRock_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
