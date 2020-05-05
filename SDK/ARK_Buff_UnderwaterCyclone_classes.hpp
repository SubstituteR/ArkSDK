#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_UnderwaterCyclone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C
// 0x00C8 (0x0A00 - 0x0938)
class ABuff_UnderwaterCyclone_C : public ABuff_Base_AoE_C
{
public:
	struct FVector                                     CycloneVelocity;                                          // 0x0938(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneDamageAmountPerSecondShip;                         // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneDamageAmountPerSecondCharacter;                    // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UClass*                                      CycloneDamageTypeShip;                                    // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CycloneDamageTypeCharacter;                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneSpeedMin;                                          // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneSpeedMax;                                          // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneDamageRadius;                                      // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresRaining;                                         // 0x096C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              CycloneMinDistanceToShore;                                // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneForceRadius;                                       // 0x0974(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneForceMax;                                          // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneForceMin;                                          // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycloneForceFallOffPower;                                 // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAppliedAnyForce;                                         // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	float                                              OrigServerTickMin;                                        // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigServerTickMax;                                        // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerTickDeltaCounter;                                   // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UClass*                                      CycloneDamageEffectsShipTypes;                            // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	float                                              CycloneHeight;                                            // 0x09A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestFloat;                                                // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalForce;                                            // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TangentialForce;                                          // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CycloneBoxLocation;                                       // 0x09B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CycloneBoxExtend;                                         // 0x09C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CycloneSetupTime;                                         // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAddtioinalRadius;                                      // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	double                                             DeactivationTime;                                         // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartToEffectRadius;                                      // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	class ABuff_CycloneBox_C*                          CycloneBox;                                               // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x09F0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C");
		return ptr;
	}


	void GetPullingRadiusAtLocation(const struct FVector& Loactaion, float* Radius);
	void GetPullingSpeedAtLocation(const struct FVector& Location, float* Speed);
	void GetStateAtLocation(const struct FVector& Location, bool* InsideCyclone, bool* PullingPlayer);
	void Get_Affect_Radius_at_Location(const struct FVector& InLocation, float* Radius);
	void GetCycloneCenterLocation(struct FVector* CenterLocation);
	void BPDeactivated(class AActor** ForInstigator);
	void OnRep_CycloneForceRadius();
	void OnRep_CycloneHeight();
	void InitializeCyclone(float Height, const struct FVector& BoxLocation, const struct FVector& BoxExtend, const struct FVector& Velocity, float RadiusTop, bool OverrideRadius, class ABuff_CycloneBox_C* CycloneBox);
	void Get_Sea_ZAt_Location(const struct FVector2D& AtLocation, float* ZAtLocation);
	void Apply_Force();
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_UnderwaterCyclone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
