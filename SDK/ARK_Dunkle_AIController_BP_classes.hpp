#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dunkle_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dunkle_AIController_BP.Dunkle_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class ADunkle_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dunkle_AIController_BP.Dunkle_AIController_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dunkle_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
