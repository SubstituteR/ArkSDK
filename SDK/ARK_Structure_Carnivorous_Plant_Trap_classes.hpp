#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Structure_Carnivorous_Plant_Trap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C
// 0x0050 (0x0BB0 - 0x0B60)
class AStructure_Carnivorous_Plant_Trap_C : public ABaseBearTrap_C
{
public:
	class UPlantHarvestComponent_C*                    PlantHarvest_C1;                                          // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTickRate;                                            // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamagePerDecayTick;                                       // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToEmerge;                                           // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurrowRange;                                              // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypesToTarget;                                      // 0x0B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBetweenRandomEmergeAndBurrowChecks;                   // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToBurrow;                                           // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreyNear;                                               // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0B9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Has_Been_Grown_Result;                           // 0x0B9B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0BA0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C");
		return ptr;
	}


	void ReactToNearbyPrey();
	void AreAnyPreyNear(bool* Result);
	void Has_Been_Grown(bool* Result);
	void Emerge();
	void Set_Emerged_Timer();
	void Set_Burrow_Timer();
	void While_Burrowed();
	void Burrow();
	void Has_Emerged(bool* Result);
	void Is_Burrowed(bool* Result);
	void While_Emerged();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool* IsDead, bool* IsConscious);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PeriodicDamage();
	void ExecuteUbergraph_Structure_Carnivorous_Plant_Trap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
