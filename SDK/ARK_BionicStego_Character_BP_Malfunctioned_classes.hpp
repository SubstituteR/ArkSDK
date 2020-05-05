#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicStego_Character_BP_Malfunctioned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned.BionicStego_Character_BP_Malfunctioned_C
// 0x0012 (0x2122 - 0x2110)
class ABionicStego_Character_BP_Malfunctioned_C : public ABionicStego_Character_BP_C
{
public:
	class UAudioComponent*                             SparksAudio;                                              // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SparksParticles;                                          // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x2120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2121(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned.BionicStego_Character_BP_Malfunctioned_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
