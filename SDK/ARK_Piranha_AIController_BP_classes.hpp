#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Piranha_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Piranha_AIController_BP.Piranha_AIController_BP_C
// 0x000B (0x091C - 0x0911)
class APiranha_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              TamedSarcoDetectionRadius;                                // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedSarcoFleeTime;                                       // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_AIController_BP.Piranha_AIController_BP_C");
		return ptr;
	}


	void MaybeFleeTamedSarco();
	void ChangedAITarget();
	void UserConstructionScript();
	void ExecuteUbergraph_Piranha_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
