#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Shapeshifter_AOEGroundPoundTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Shapeshifter_AOEGroundPoundTarget_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C");
		return ptr;
	}


	bool BPPreventflight();
	bool PreventJump();
	bool BPPreventRunning();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Shapeshifter_AOEGroundPoundTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
