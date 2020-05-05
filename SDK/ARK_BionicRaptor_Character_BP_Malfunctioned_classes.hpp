#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_Malfunctioned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C
// 0x0019 (0x24E2 - 0x24C9)
class ABionicRaptor_Character_BP_Malfunctioned_C : public ABionicRaptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x24C9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SparksParticles;                                          // 0x24D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SparksAudio;                                              // 0x24D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x24E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x24E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
