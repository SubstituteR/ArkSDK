#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_InitialBuryOnly_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly_Escort.ChupaCabra_Character_BP_InitialBuryOnly_Escort_C
// 0x0000 (0x2868 - 0x2868)
class AChupaCabra_Character_BP_InitialBuryOnly_Escort_C : public AChupaCabra_Character_BP_InitialBuryOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly_Escort.ChupaCabra_Character_BP_InitialBuryOnly_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
