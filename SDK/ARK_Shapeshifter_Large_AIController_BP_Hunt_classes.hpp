#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_AIController_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C
// 0x0000 (0x0950 - 0x0950)
class AShapeshifter_Large_AIController_BP_Hunt_C : public AShapeshifter_Large_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
