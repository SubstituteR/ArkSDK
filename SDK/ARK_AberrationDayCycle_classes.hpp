#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AberrationDayCycle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AberrationDayCycle.AberrationDayCycle_C
// 0x00B7 (0x0648 - 0x0591)
class AAberrationDayCycle_C : public ADayCycleManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	TArray<struct FDayCycleSpeed>                      CycleSpeeds;                                              // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BiomeIndexInventoryTemplates;                             // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              DroppedItemClassesMap;                                    // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         DroppedItemMeshesMap;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             DroppedItemScalesMap;                                     // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPrimalInventoryComponent*>           PrimalInventories;                                        // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsEarthQuaking;                                          // 0x05F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	float                                              EarthquakeStrength;                                       // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0600(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x060C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_Array_Get_Item;                                  // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x0619(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x061A(0x0006) MISSED OFFSET
	class UPrimalInventoryComponent*                   CallFunc_Array_Add_NewItem_RefProperty;                   // 0x0620(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x0628(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_VNewObjectFromBlueprintOuter_ReturnValue;        // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalInventoryComponent*                   K2Node_DynamicCast_AsPrimalInventoryComponent;            // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x0644(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AberrationDayCycle.AberrationDayCycle_C");
		return ptr;
	}


	float BPOverrideGameStateMatineePlayRate(class AActor** forMatinee, float* InPlayRate);
	class FString GetDayNumberString(bool* bIncludeDayString);
	void GetWeatherEventWarning(int* WeatherEventWarningType);
	void CalcMiniMapCoord(const struct FVector& inVec, float* OutLattitude, float* OutLongitude);
	void HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook** GrapHookProj, struct FHitResult* HitInfo);
	void ShooterCharacterSpawned(class AShooterCharacter** TheShooterCharacter);
	void StopEarthQuake();
	void StartEarthQuake();
	void STATIC_EarthQuake_DropItemAtLocation(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot);
	void ShooterCharacterPossessed(class AShooterCharacter** TheShooterCharacter);
	void STATIC_GetCurrentDaySpeeds(float* DaySpeed, float* NightSpeed);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AberrationDayCycle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
