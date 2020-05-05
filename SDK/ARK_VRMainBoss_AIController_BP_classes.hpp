#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C
// 0x0060 (0x0971 - 0x0911)
class AVRMainBoss_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	struct FName                                       VulnerabilityKeyName;                                     // 0x0914(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CanFireBeamKeyName;                                       // 0x091C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CooldownKeyName;                                          // 0x0924(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	class AVRMainBoss_Character_C*                     BossCharRef;                                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceOverrideAttackType_;                                 // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVRMainBossBeamType>                   ForcedAttackType;                                         // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x093A(0x0006) MISSED OFFSET
	class APawn*                                       K2Node_Event_PossessedPawn;                               // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AVRMainBoss_Character_C*                     K2Node_DynamicCast_AsVRMainBoss_Character_C;              // 0x0948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsVulnerable_;                         // 0x0951(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0952(0x0006) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Value;                                 // 0x0960(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0961(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0962(0x0006) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue2;                      // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0970(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C");
		return ptr;
	}


	void GetEyebeamTarget(class AActor** BeamTarget);
	void Get_Is_Vulnerable_(bool* IsVulnerable);
	void GetPercentageOfAggroEntriesInFOV(float* Percentage);
	void SelectBeamAttack(TEnumAsByte<EVRMainBossBeamType>* BeamType);
	void StartBeamCooldown();
	void Fire_Beam_at_a_Target(bool* Succeeded_);
	void Fire_Rotating_Beams(bool* Succeeded_);
	void Fire_Eye_Beams(bool* Succeeded_);
	void Get_Current_Attack_Cooldown(float* Cooldown);
	void Is_Firing_Eye_Beams_(bool* NewParam);
	void Is_Firing_Rotating_Beams_(bool* NewParam);
	void UserConstructionScript();
	void SetVulnerability(bool IsVulnerable_);
	void SetCanFireBeam(bool Value);
	void ReceiveBeginPlay();
	void OnPossess(class APawn** PossessedPawn);
	void ExecuteUbergraph_VRMainBoss_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
