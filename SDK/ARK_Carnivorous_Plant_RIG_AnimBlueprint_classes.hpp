#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Carnivorous_Plant_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Carnivorous_Plant_RIG_AnimBlueprint.Carnivorous_Plant_RIG_AnimBlueprint_C
// 0x0480 (0x07C0 - 0x0340)
class UCarnivorous_Plant_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_61F0305C4F1B8D19C68F8990F7115E6B;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_921FE977416ACAA12131FAA76FCD6DC1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF39D4C54900A8FF3DC11E943604D113;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FF072794E14D35079D9BB859932C512;// 0x03B0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E5902C5467007E7815DC9A2013C6DE1;// 0x03C8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CD26FC747C25D34E62114AD140B0203;// 0x03E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A9A8A29245F67BC4B7FF14BFED2B13D1;// 0x0410(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3630FEFD4139613E185F278299B6839A;// 0x0438(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9665807948E2173A15EAA4993A350C1F;// 0x0468(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_295334D645A5832B9D8F9FBBAD2F5591;// 0x0490(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E0F2C1847811909A407DEB0BBA12F1A;// 0x04C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B813EE5C485A656D7FB613AEA160C9B7;// 0x04E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_28C9058D462D6CB24448269C7EF7DB84;// 0x0518(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7CF1C83459D88A99F8670862B72E72C;// 0x0540(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29BD4456459E84BBE4EC9EA468F04E50;// 0x0570(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_81C181AF4C5659ACD33999A57A574FBD;// 0x0598(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BA5C7AA840B8F941C1C5769A6C8DF84E;// 0x0600(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C91E15AF42F8E262636E6AADDE18A1AB;// 0x06B0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8232E0714C41C965635E688A61962671;// 0x06D8(0x0028)
	bool                                               ClosedTrap;                                               // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPrepared;                                               // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	float                                              TrapRotationAlpha;                                        // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TrapRotation;                                             // 0x0708(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureBearTrap*                    K2Node_DynamicCast_AsPrimalStructureBearTrap;             // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x072C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTrapPrepared_ReturnValue;                      // 0x0739(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x073A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x073B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x073C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x074C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0758(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x0764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x0768(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x076C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x077C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x0788(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x0794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0798(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x079C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x07A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x07AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x07B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x07B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x07B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x07BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Carnivorous_Plant_RIG_AnimBlueprint.Carnivorous_Plant_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2250();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2249();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2248();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2247();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_870();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Carnivorous_Plant_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
