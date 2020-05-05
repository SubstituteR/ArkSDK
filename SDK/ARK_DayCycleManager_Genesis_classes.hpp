#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DayCycleManager_Genesis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DayCycleManager_Genesis.DayCycleManager_Genesis_C
// 0x0152 (0x06E3 - 0x0591)
class ADayCycleManager_Genesis_C : public ADayCycleManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	TArray<struct FVector>                             SnowstormIntensityVectors;                                // 0x0598(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               ArcticSnowstormActive;                                    // 0x05A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	TArray<struct FVector>                             SwampIntensityVectors;                                    // 0x05B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               SwampStormActive;                                         // 0x05C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	TArray<struct FVector>                             TempVolcanoLocations;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	float                                              SwampDirLightIntensity;                                   // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcticDirLightIntensity;                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LunarDirLightIntensity;                                   // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolcanicDirLightIntensity;                                // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OceanDirLightIntensity;                                   // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VRDirLightIntensity;                                      // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeStrength;                                       // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         DroppedItemMeshesMap;                                     // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPrimalInventoryComponent*>           PrimalInventories;                                        // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             DroppedItemScalesMap;                                     // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<double>                                     SwampStormTime;                                           // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     ArcticStormTime;                                          // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MainDayCycle;                                             // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInCave;                                                  // 0x0649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnderwater;                                              // 0x064A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x064B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdateAreaBuffPlayerStatus;                               // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              SwampBaseStormRadius;                                     // 0x0660(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcticBaseStormRadius;                                    // 0x0664(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LunarLightVector;                                         // 0x0668(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              TemperatureOutOfShadowInLunar;                            // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        SwampInfectedStorms;                                      // 0x0678(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FBPNetExecParams                            TempExec;                                                 // 0x0688(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APostProcessVolume*                          VRWorldPP;                                                // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ChanceForBogStormToBeInfected;                            // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class APostProcessVolume*                          TransferWorldPP;                                          // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x06E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ManageStormVectors_BiomeHasActiveStorm;          // 0x06E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ManageStormVectors_BiomeHasActiveStorm2;         // 0x06E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManager_Genesis.DayCycleManager_Genesis_C");
		return ptr;
	}


	void Get_Teleport_Transfer_World_PP(class APostProcessVolume** PP);
	void Get_VR_World_PP(class APostProcessVolume** PP);
	float BPAdjustTemperature(float* TemperatureIn, class ABiomeZoneVolume** BiomeZoneVolume, class APrimalCharacter** ForPrimalCharacter, struct FVector* AtLocation);
	void CompareWeatherLocation(const struct FVector& StormLocaiton, const struct FVector& LocationToCompare, float StormBaseRadius, bool* InStormRadius);
	void IsLocationInWeatherEvent(bool Location);
	bool IsRainingAtLocation(struct FVector* Location);
	void Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot);
	void ManageStormVectors(float ChanceToAddStorm, int MaxNumStorms, float BiomeXMin, float BiomeXMax, float BiomeYMin, float BiomeYMax, float StormRateOfTravel, float StormLifetime, bool ProcessSwampStorms, TArray<struct FVector>* BiomeVectorArray, TArray<double>* StormTimeArray, TArray<int>* SwampInfectedSwarms, bool* BiomeHasActiveStorm);
	void UserConstructionScript();
	void UpdateAreaBuff();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DayCycleManager_Genesis(int EntryPoint);
	void UpdateAreaBuffPlayerStatus__DelegateSignature(bool IsInCave, bool IsUnderwater);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
