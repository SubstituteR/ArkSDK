#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned.BionicRex_Character_BP_Malfunctioned_C
// 0x0016 (0x21E2 - 0x21CC)
class ABionicRex_Character_BP_Malfunctioned_C : public ABionicRex_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x21CC(0x0004) MISSED OFFSET
	class UAudioComponent*                             SparksAudio;                                              // 0x21D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SparksParticles;                                          // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x21E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x21E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned.BionicRex_Character_BP_Malfunctioned_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
