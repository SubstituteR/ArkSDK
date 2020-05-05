#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_InitialBuryOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C
// 0x0000 (0x2868 - 0x2868)
class AChupaCabra_Character_BP_InitialBuryOnly_C : public AChupaCabra_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C");
		return ptr;
	}


	void Has_Relevant_Target(bool* relevant);
	void OnDiveOut();
	void CanSpawnMinion(bool* canSpawn);
	void UserConstructionScript();
	void ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
