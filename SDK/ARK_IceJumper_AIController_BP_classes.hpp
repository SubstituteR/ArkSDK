#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceJumper_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceJumper_AIController_BP.IceJumper_AIController_BP_C
// 0x00FF (0x0A10 - 0x0911)
class AIceJumper_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              DefaultStamina;                                           // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumMovementAbilitiesSinceGroundOrIceBreath;               // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	double                                             MeleeStartTime;                                           // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOverFiveSeconds;                                    // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	double                                             LastFleeFromBurstDamageTime;                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLOSFromBelow;                                          // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLOS;                                                   // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLOSRight;                                              // 0x093A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLOSLeft;                                               // 0x093B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               retVal;                                                   // 0x093C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	double                                             LastTimeFallingVelocityGreaterThanThreshold;              // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBabySnowballTime;                                     // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           BabyImprintCharacter;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BabyFollowParentDistance;                                 // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   CallFunc_IceJumper_Result;                                // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0969(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EIceJumperAbilities_Enum>              CallFunc_Trigger_RandomWeighted_Ability_TriggeredAbility; // 0x096A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EIceJumperShortDashTypes_Enum>         CallFunc_Trigger_RandomWeighted_Ability_SecondaryAbility; // 0x096B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x096C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInAir_Result;                                  // 0x096D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x096E(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   CallFunc_IceJumper_Result2;                               // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceJumper_Character_BP_C*                   CallFunc_IceJumper_Result3;                               // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue;                 // 0x0988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue;             // 0x098C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x0994(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceJumper_Character_BP_C*                   CallFunc_IceJumper_Result4;                               // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x09A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x09A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x09B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   CallFunc_IceJumper_Result5;                               // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x09D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x09E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x09E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x09F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x09FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsImprintPlayer_ReturnValue;                     // 0x09FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x09FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0A00(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_AIController_BP.IceJumper_AIController_BP_C");
		return ptr;
	}


	void GetBabyFleeLocation(struct FVector* Result);
	void IsStuckInAir(bool* Result);
	class AActor* BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut);
	void DoLOS(const struct FVector& ViewLocationOffset, bool* retVal);
	void Update_LOSChecks();
	void Get_Percent_Stamina(float* ret);
	bool STATIC_IsFallingToGroundBelowTarget();
	float STATIC_BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void GetPrimalTarget(class APrimalCharacter** Result);
	bool Target_Is_PreventingFrozen();
	bool Target_Is_Freezing();
	void Is_LowStamina(bool* Result);
	void OnTakeDamage(float Damage);
	void TookLotsOfDamage(bool* Result);
	bool TargetIsFrozen();
	void GetMeleeWeight(float* Result);
	void STATIC_UpdateMelee();
	void melee();
	void UpdateIceBreath();
	void OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode);
	void STATIC_OnAbilityChanged(TEnumAsByte<EIceJumperAbilities_Enum> NewAbility, TEnumAsByte<EIceJumperAbilities_Enum> PrevAbility, TEnumAsByte<EIceJumperShortDashTypes_Enum> SecondaryAbility);
	void STATIC_Trigger_RandomWeighted_Ability(TEnumAsByte<EIceJumperAbilities_Enum>* TriggeredAbility, TEnumAsByte<EIceJumperShortDashTypes_Enum>* SecondaryAbility);
	void Get_ShortForward_Dash_Weight(float* Result);
	void GetSide_DashWeight(bool Left, float* Result);
	void Get_JumpWeight(float* Result);
	void IsTarget_Tamed_or_Survivor(bool* Result);
	void Get_Forward_DashWeight(float* Result);
	void IsInAir(bool* Result);
	void Get_Ice_BreathWeight(float* Result);
	void IceBreath();
	void ForwardDash();
	void IceJumper(class AIceJumper_Character_BP_C** Result);
	void SideDash(TEnumAsByte<EIceJumperShortDashTypes_Enum> Type);
	void ReceiveBeginPlay();
	void Jump();
	void ChangedAITarget();
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void TryNextAbility();
	void TickStaminaRegen();
	void ResetDamageCounter();
	void FindImprintPlayer();
	void ExecuteUbergraph_IceJumper_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
