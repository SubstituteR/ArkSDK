#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet.ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet_C
// 0x0000 (0x0939 - 0x0939)
class AChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet_C : public AChupaCabra_AIController_BP_InitialBuryOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet.ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet_C");
		return ptr;
	}


	void IsActorUnderCharge(class AActor** NewTarget, bool* isUnderCharge);
	void UserConstructionScript();
	void ExecuteUbergraph_ChupaCabra_AIController_BP_InitialBuryOnly_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
