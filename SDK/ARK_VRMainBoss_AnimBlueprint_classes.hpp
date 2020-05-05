#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass VRMainBoss_AnimBlueprint.VRMainBoss_AnimBlueprint_C
// 0x0321 (0x0661 - 0x0340)
class UVRMainBoss_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_9335023F4B97E85DCB2F79AA71D59A85;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C542B4DD471E052279CD5193B0BC3A2E;      // 0x0368(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DF057D54108DF974360D9B693011C7E;// 0x03A0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D749307E4DFB2281A021F680D89E8BD3;// 0x03D0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5D77C89468D442D276F019C3B7173AE;// 0x0410(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D045DBA74364B69919C6ADB9C32EB729;// 0x0438(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E2CEBD7D4B18F66740FD7B95D9BBA8AD;// 0x0478(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69AAAAF443D023C08C14D2868C47886B;// 0x04D8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BA360FB540A313BCF1A7978284151A5E;      // 0x0508(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F2A076E3485F6FD47478029645249993;// 0x0540(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CA31822248CAA658929D049C3A265659;// 0x0568(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7421735D42CD4976C7482DA4EC964A65;// 0x05C8(0x0030)
	bool                                               IsInStageTransition_;                                     // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	int                                                CurrentStageIndex;                                        // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       IdleAnims;                                                // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    StartFiringEyebeams;                                      // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsVulnerable_;                                            // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartFiringRotatingBeams;                                 // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartFiringTargetedBeams;                                 // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartChargingTargetedBeams;                               // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAnimSequence*                               CallFunc_Array_Get_Item;                                  // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VRMainBoss_AnimBlueprint.VRMainBoss_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRMainBoss_AnimBlueprint_AnimGraphNode_SequencePlayer_6636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRMainBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5376();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRMainBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5375();
	void StopFiringEyeBeams();
	void AnimNotify_StartFiringEyebeams();
	void AnimNotify_StartFiringRotatingBeams();
	void AnimNotify_FireTargetedBeam();
	void BecomeInvulnerable();
	void AnimNotify_StartChargingTargetedBeams();
	void ExecuteUbergraph_VRMainBoss_AnimBlueprint(int EntryPoint);
	void StartChargingTargetedBeams__DelegateSignature();
	void StartFiringTargetedBeams__DelegateSignature();
	void StartFiringRotatingBeams__DelegateSignature();
	void StartFiringEyebeams__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
