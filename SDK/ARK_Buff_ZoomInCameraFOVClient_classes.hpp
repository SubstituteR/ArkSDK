#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ZoomInCameraFOVClient_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ZoomInCameraFOVClient.Buff_ZoomInCameraFOVClient_C
// 0x002C (0x095C - 0x0930)
class ABuff_ZoomInCameraFOVClient_C : public ABuff_Base_C
{
public:
	float                                              Timeline_0_NewTrack_0_4983E65A45327308A2A3B898F1FB4D21;   // 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4983E65A45327308A2A3B898F1FB4D21;   // 0x0934(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV_multiplier;                                           // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class UClass*                                      Fixed_Glitch_Shake;                                       // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0950(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ZoomInCameraFOVClient.Buff_ZoomInCameraFOVClient_C");
		return ptr;
	}


	void auto_deactivate();
	void BPResetBuffStart();
	void ReceiveBeginPlay();
	float BP_ModifyCharacterFOV(float* inFOV);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Start_FOV_multiplier_timeline();
	void fov_back_to_normal();
	void ExecuteUbergraph_Buff_ZoomInCameraFOVClient(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
