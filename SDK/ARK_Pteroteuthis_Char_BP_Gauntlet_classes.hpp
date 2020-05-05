#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C
// 0x0008 (0x2280 - 0x2278)
class APteroteuthis_Char_BP_Gauntlet_C : public APteroteuthis_Char_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C");
		return ptr;
	}


	void CreateChargeManager();
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void UserConstructionScript();
	void ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
