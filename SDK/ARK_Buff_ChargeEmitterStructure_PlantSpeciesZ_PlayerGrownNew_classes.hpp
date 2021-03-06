#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C
// 0x0000 (0x0BB0 - 0x0BB0)
class ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C : public ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C");
		return ptr;
	}


	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void CanEmitCharge(bool* canEmit);
	void AttachBuffToPlant();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
