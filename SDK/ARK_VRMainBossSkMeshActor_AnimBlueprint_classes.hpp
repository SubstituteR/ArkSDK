#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBossSkMeshActor_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass VRMainBossSkMeshActor_AnimBlueprint.VRMainBossSkMeshActor_AnimBlueprint_C
// 0x01E8 (0x0528 - 0x0340)
class UVRMainBossSkMeshActor_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_85BD12C5485392693F8BE2A0CEE530E4;      // 0x0340(0x0028)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_DD2D3F0B4ECD0504FA571C8C9EFF0EC3;// 0x0368(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FFE199314F8888BC71A131A5C0816751;      // 0x03C8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_814E6A644F1C30BFC5C8B98AB4706C97;// 0x0400(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4CC3567B49E84E509599D785D72F5030;// 0x0430(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80BBDABD4AD2E17B9E4D5A815C0EFF93;// 0x0460(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8F93D8E41ED852973EF608F0ADA2A19;// 0x0490(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_05E8AC2243B520E32DE3ECAB2710C2BA;      // 0x04C0(0x0038)
	int                                                DamageStateIndex;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class AVRBattle_MatineeActor_C*                    K2Node_DynamicCast_AsVRBattle_MatineeActor_C;             // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x051C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScalarParameterValue_ReturnValue;             // 0x0520(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VRMainBossSkMeshActor_AnimBlueprint.VRMainBossSkMeshActor_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRMainBossSkMeshActor_AnimBlueprint_AnimGraphNode_BlendListByInt_42();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_ExitInitialPose();
	void ExecuteUbergraph_VRMainBossSkMeshActor_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
