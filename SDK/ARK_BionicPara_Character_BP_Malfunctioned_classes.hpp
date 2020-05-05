#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_Malfunctioned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C
// 0x0019 (0x2312 - 0x22F9)
class ABionicPara_Character_BP_Malfunctioned_C : public ABionicPara_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x22F9(0x0007) MISSED OFFSET
	class UAudioComponent*                             SparksAudio;                                              // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SparksParticles;                                          // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x2310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
