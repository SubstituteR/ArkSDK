#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpaceWhale_AIController_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C
// 0x0000 (0x0930 - 0x0930)
class ASpaceWhale_AIController_BP_Hunt_C : public ASpaceWhale_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C");
		return ptr;
	}


	void BPOnFleeEvent();
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_SpaceWhale_AIController_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
