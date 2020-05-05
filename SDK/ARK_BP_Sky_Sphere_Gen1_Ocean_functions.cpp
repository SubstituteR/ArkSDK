// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Sky_Sphere_Gen1_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.SetOceanMaterial
// ()

void ABP_Sky_Sphere_Gen1_Ocean_C::SetOceanMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.SetOceanMaterial");

	ABP_Sky_Sphere_Gen1_Ocean_C_SetOceanMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.OceanBiomeSkyTexturePassthrough
// ()
// Parameters:
// class UTexture2D**             SkyThis                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             SkyNext                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NextPOS                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_Ocean_C::OceanBiomeSkyTexturePassthrough(class UTexture2D** SkyThis, class UTexture2D** SkyNext, float* Time, float* NextPOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.OceanBiomeSkyTexturePassthrough");

	ABP_Sky_Sphere_Gen1_Ocean_C_OceanBiomeSkyTexturePassthrough_Params params;
	params.SkyThis = SkyThis;
	params.SkyNext = SkyNext;
	params.Time = Time;
	params.NextPOS = NextPOS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.UserConstructionScript
// ()

void ABP_Sky_Sphere_Gen1_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.UserConstructionScript");

	ABP_Sky_Sphere_Gen1_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ReceiveBeginPlay
// ()

void ABP_Sky_Sphere_Gen1_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ReceiveBeginPlay");

	ABP_Sky_Sphere_Gen1_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_Ocean_C::ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean");

	ABP_Sky_Sphere_Gen1_Ocean_C_ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
