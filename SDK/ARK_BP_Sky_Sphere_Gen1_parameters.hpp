#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Sky_Sphere_Gen1_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.OceanBiomeSkyTexturePassthrough
struct ABP_Sky_Sphere_Gen1_C_OceanBiomeSkyTexturePassthrough_Params
{
	class UTexture2D*                                  SkyThis;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SkyNext;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NextPOS;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExtraUpdates
struct ABP_Sky_Sphere_Gen1_C_ExtraUpdates_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.SetMaterials
struct ABP_Sky_Sphere_Gen1_C_SetMaterials_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ReceiveBeginPlay
struct ABP_Sky_Sphere_Gen1_C_ReceiveBeginPlay_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ColorFilter
struct ABP_Sky_Sphere_Gen1_C_ColorFilter_Params
{
	struct FLinearColor                                InputColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilterColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Update Material
struct ABP_Sky_Sphere_Gen1_C_Update_Material_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      WeatherBlends;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UpdateSunDirection
struct ABP_Sky_Sphere_Gen1_C_UpdateSunDirection_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UserConstructionScript
struct ABP_Sky_Sphere_Gen1_C_UserConstructionScript_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.RecieveMatineeUpdated
struct ABP_Sky_Sphere_Gen1_C_RecieveMatineeUpdated_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Init
struct ABP_Sky_Sphere_Gen1_C_Init_Params
{
};

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1
struct ABP_Sky_Sphere_Gen1_C_ExecuteUbergraph_BP_Sky_Sphere_Gen1_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
