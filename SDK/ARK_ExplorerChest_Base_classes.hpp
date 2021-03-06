#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ExplorerChest_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_Base.ExplorerChest_Base_C
// 0x0135 (0x0595 - 0x0460)
class AExplorerChest_Base_C : public AActor
{
public:
	class USphereComponent*                            TriggerSphere;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnlocked;                                              // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	int                                                ExplorerNoteIndex;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OpenAnimation;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterPlayerController*                    CachedPC;                                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ExplorerNoteString;                                       // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x04A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x04AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x04B0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0551(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0561(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0570(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0574(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class AShooterPlayerState*                         K2Node_DynamicCast_AsShooterPlayerState;                  // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LocalIsGlobalExplorerNoteUnlocked_ReturnValue;   // 0x0581(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LocalIsPerMapExplorerNoteUnlocked_ReturnValue;   // 0x0582(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0583(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0584(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UActorComponent*                             CallFunc_GetComponentByClass_ReturnValue;                 // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0594(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Base.ExplorerChest_Base_C");
		return ptr;
	}


	int BPGetExtraSpecialBlueprintInt();
	void STATIC_DrawBasicFloatingHUD(class AHUD** ForHUD);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void PlayUnlock();
	void UserConstructionScript();
	void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void CheckForPlayerState();
	void DoUnlock();
	void ShortRefresh();
	void LongRefresh();
	void ExecuteUbergraph_ExplorerChest_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
