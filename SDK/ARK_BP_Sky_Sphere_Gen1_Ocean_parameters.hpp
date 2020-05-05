#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Sky_Sphere_Gen1_Ocean_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.SetOceanMaterial
struct ABP_Sky_Sphere_Gen1_Ocean_C_SetOceanMaterial_Params
{
};

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.OceanBiomeSkyTexturePassthrough
struct ABP_Sky_Sphere_Gen1_Ocean_C_OceanBiomeSkyTexturePassthrough_Params
{
	class UTexture2D**                                 SkyThis;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 SkyNext;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NextPOS;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.UserConstructionScript
struct ABP_Sky_Sphere_Gen1_Ocean_C_UserConstructionScript_Params
{
};

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ReceiveBeginPlay
struct ABP_Sky_Sphere_Gen1_Ocean_C_ReceiveBeginPlay_Params
{
};

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean
struct ABP_Sky_Sphere_Gen1_Ocean_C_ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
