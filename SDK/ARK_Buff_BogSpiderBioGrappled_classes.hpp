#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BogSpiderBioGrappled_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C
// 0x0221 (0x0B51 - 0x0930)
class ABuff_BogSpiderBioGrappled_C : public ABuff_Base_C
{
public:
	class UParticleSystemComponent*                    EnsnaredVFX;                                              // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StruggleShake_ShakeX_EBD964F9424416EE67E46AB6B8A0177C;    // 0x0938(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StruggleShake__Direction_EBD964F9424416EE67E46AB6B8A0177C;// 0x093C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StruggleShake;                                            // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABogSpider_Character_BP_C*                   GrappledBySpider;                                         // 0x0948(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             LastStruggleTime;                                         // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedStruggleInterval;                                  // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStruggleBreakChance;                                   // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleBreakChance_Current;                              // 0x0960(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleBreakChance_Initial_Ensnare;                      // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleBreakChance_Initial_BioGrapple;                   // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnareBreakChanceIncreasePerFail_Wild;                   // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnareBreakChanceIncreasePerFail_Tamed;                  // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BioGrappleBreakChanceIncreasePerFail_Wild;                // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BioGrappleBreakChanceIncreasePerFail_Tamed;               // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnsnared;                                                // 0x097C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	float                                              CompountEyeIntensity;                                     // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	struct FHUDElement                                 HudElement_StrugglePercent;                               // 0x0988(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_Warning;                                       // 0x0A50(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrStruggleHudShakeX;                                    // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleHudShakeMaxDelta;                                 // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EscapedClientBuffClass;                                   // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BloodSuckedBuffIcon;                                      // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryStruggle_success;                             // 0x0B31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnsnare;                              // 0x0B33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABogSpider_Character_BP_C*                   K2Node_DynamicCast_AsBogSpider_Character_BP_C;            // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0B49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0B4A(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalDino_ReturnValue;                        // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void ReleaseBioGrapple();
	void BuffTickServer(float* DeltaTime);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void ToggleEnsnareVFX();
	void BuffTickClient(float* DeltaTime);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void BPHandleOnStartAltFire(bool* bFromGamepad);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void OnEnsnared();
	void OnBioGrappled();
	void SyncGrapplingBogSpider(class ABogSpider_Character_BP_C* SpiderRef);
	void TryStruggle(bool* Success);
	void UserConstructionScript();
	void StruggleShake__FinishedFunc();
	void StruggleShake__UpdateFunc();
	void Server_TryStruggle();
	void Multi_OnBioGrappleEvent(bool bEnsnare);
	void ReceiveBeginPlay();
	void DoHudShake();
	void Client_DidStruggle();
	void ExecuteUbergraph_Buff_BogSpiderBioGrappled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
