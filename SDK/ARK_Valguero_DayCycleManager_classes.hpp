#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Valguero_DayCycleManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Valguero_DayCycleManager.Valguero_DayCycleManager_C
// 0x00C3 (0x0654 - 0x0591)
class AValguero_DayCycleManager_C : public ADayCycleManagerBase_C
{
public:
	bool                                               bPreventNocturnalLogic_1;                                 // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	float                                              EarthquakeStrength;                                       // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEarthQuaking;                                          // 0x0598(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	TArray<class UPrimalInventoryComponent*>           PrimalInventories;                                        // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             DroppedItemScalesMap;                                     // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         DroppedItemMeshesMap;                                     // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              DroppedItemClassesMap;                                    // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BiomeIndexInventoryTemplates;                             // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDayCycleSpeed>                      CycleSpeeds;                                              // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UpcomingWeatherType;                                      // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsNorthernLights;                                        // 0x0604(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	class UPrimalInventoryComponent*                   CallFunc_Array_Add_NewItem_RefProperty;                   // 0x0608(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x0610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0618(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x061C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_Array_Get_Item;                                  // 0x0628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x0630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_VNewObjectFromBlueprintOuter_ReturnValue;        // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalInventoryComponent*                   K2Node_DynamicCast_AsPrimalInventoryComponent;            // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x064C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x0650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Valguero_DayCycleManager.Valguero_DayCycleManager_C");
		return ptr;
	}


	void Get_Golem_MeshClass(class UClass** isScorchedEarthMesh);
	void Stop_NorthernLights();
	void Start_NorthernLights();
	void Calc_Mini_Map_Coord(const struct FVector& inVec, float* OutLattitude, float* OutLongitude);
	void GetWeatherEventWarning(int* WeatherEventWarningType);
	void Start_Earth_Quake();
	void ShooterCharacterSpawned(class AShooterCharacter** TheShooterCharacter);
	void STATIC_Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot);
	void Stop_Earth_Quake();
	void ShooterCharacterPossessed(class AShooterCharacter** TheShooterCharacter);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Valguero_DayCycleManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
