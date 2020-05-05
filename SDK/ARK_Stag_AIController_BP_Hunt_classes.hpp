#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stag_AIController_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C
// 0x0007 (0x0918 - 0x0911)
class AStag_AIController_BP_Hunt_C : public AStag_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              FemaleAttackDestinationOffset;                            // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C");
		return ptr;
	}


	void SetFemaleAttackDestinationOffset();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Stag_AIController_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
