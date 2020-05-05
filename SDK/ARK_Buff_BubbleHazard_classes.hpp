#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BubbleHazard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BubbleHazard.Buff_BubbleHazard_C
// 0x0055 (0x0985 - 0x0930)
class ABuff_BubbleHazard_C : public ABuff_Base_C
{
public:
	class UParticleSystemComponent*                    BubbleBurst;                                              // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BubbleMesh;                                               // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mutliplyer;                                               // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentLocation;                                          // 0x0944(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitializedLocation;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              currentScale;                                             // 0x0954(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastStruggleTime;                                         // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StruggleTimes;                                            // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredStruggleTimeToGetOut;                             // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedToPop;                                             // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	float                                              DurationAfterStopUpwardMovement;                          // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDurationUnlessReachSurface;                        // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x0974(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scale;                                 // 0x0980(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x0984(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BubbleHazard.Buff_BubbleHazard_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	struct FVector BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void PopBubble();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void BuffTickClient(float* DeltaTime);
	void AttachBubble(const struct FVector& BubbleLocation);
	struct FVector BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy);
	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void InitLocation(const struct FVector& Location, float Scale);
	void ExecuteUbergraph_Buff_BubbleHazard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
