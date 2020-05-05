#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EelMinion_AIController_BP.EelMinion_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class AEelMinion_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EelMinion_AIController_BP.EelMinion_AIController_BP_C");
		return ptr;
	}


	void UpdateAttackDestOffset();
	void BPNotifyTargetSet();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EelMinion_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
