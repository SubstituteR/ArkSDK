#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet.ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet_C
// 0x0008 (0x2870 - 0x2868)
class AChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet_C : public AChupaCabra_Character_BP_InitialBuryOnly_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet.ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet_C");
		return ptr;
	}


	void Create_Charge_Manager();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Alpha_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
