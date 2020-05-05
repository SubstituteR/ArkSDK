#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicTrike_Character_BP_Malfunctioned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicTrike_Character_BP_Malfunctioned.BionicTrike_Character_BP_Malfunctioned_C
// 0x0017 (0x283A - 0x2823)
class ABionicTrike_Character_BP_Malfunctioned_C : public ABionicTrike_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x2823(0x0005) MISSED OFFSET
	class UAudioComponent*                             SparksAudio;                                              // 0x2828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SparksParticles;                                          // 0x2830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x2838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2839(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicTrike_Character_BP_Malfunctioned.BionicTrike_Character_BP_Malfunctioned_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
