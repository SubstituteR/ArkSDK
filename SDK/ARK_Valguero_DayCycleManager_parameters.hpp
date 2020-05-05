#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Valguero_DayCycleManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Get Golem MeshClass
struct AValguero_DayCycleManager_C_Get_Golem_MeshClass_Params
{
	class UClass*                                      isScorchedEarthMesh;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop NorthernLights
struct AValguero_DayCycleManager_C_Stop_NorthernLights_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start NorthernLights
struct AValguero_DayCycleManager_C_Start_NorthernLights_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Calc Mini Map Coord
struct AValguero_DayCycleManager_C_Calc_Mini_Map_Coord_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLattitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutLongitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.GetWeatherEventWarning
struct AValguero_DayCycleManager_C_GetWeatherEventWarning_Params
{
	int                                                WeatherEventWarningType;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start Earth Quake
struct AValguero_DayCycleManager_C_Start_Earth_Quake_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterSpawned
struct AValguero_DayCycleManager_C_ShooterCharacterSpawned_Params
{
	class AShooterCharacter**                          TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Earth Quake Drop Item at Location
struct AValguero_DayCycleManager_C_Earth_Quake_Drop_Item_at_Location_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BiomeArea;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop Earth Quake
struct AValguero_DayCycleManager_C_Stop_Earth_Quake_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterPossessed
struct AValguero_DayCycleManager_C_ShooterCharacterPossessed_Params
{
	class AShooterCharacter**                          TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.UserConstructionScript
struct AValguero_DayCycleManager_C_UserConstructionScript_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ReceiveBeginPlay
struct AValguero_DayCycleManager_C_ReceiveBeginPlay_Params
{
};

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ExecuteUbergraph_Valguero_DayCycleManager
struct AValguero_DayCycleManager_C_ExecuteUbergraph_Valguero_DayCycleManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
