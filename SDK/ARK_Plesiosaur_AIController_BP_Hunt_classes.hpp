#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Plesiosaur_AIController_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Plesiosaur_AIController_BP_Hunt.Plesiosaur_AIController_BP_Hunt_C
// 0x0000 (0x0911 - 0x0911)
class APlesiosaur_AIController_BP_Hunt_C : public APlesiosaur_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plesiosaur_AIController_BP_Hunt.Plesiosaur_AIController_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Plesiosaur_AIController_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
