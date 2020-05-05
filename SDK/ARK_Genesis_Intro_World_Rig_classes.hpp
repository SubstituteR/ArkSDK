#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_Intro_World_Rig_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C
// 0x0018 (0x0478 - 0x0460)
class AGenesis_Intro_World_Rig_C : public AActor
{
public:
	class USceneComponent*                             worldSocket;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Anim_To_Play;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Genesis_Intro_World_Rig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
