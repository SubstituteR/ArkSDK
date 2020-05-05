#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Rex_AIController_BP_Adolescent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C
// 0x0000 (0x0911 - 0x0911)
class ARex_AIController_BP_Adolescent_C : public ARex_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Rex_AIController_BP_Adolescent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
