// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Sky_Sphere_Gen1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.OceanBiomeSkyTexturePassthrough
// ()
// Parameters:
// class UTexture2D*              SkyThis                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              SkyNext                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          NextPOS                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_C::OceanBiomeSkyTexturePassthrough(class UTexture2D* SkyThis, class UTexture2D* SkyNext, float Time, float NextPOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.OceanBiomeSkyTexturePassthrough");

	ABP_Sky_Sphere_Gen1_C_OceanBiomeSkyTexturePassthrough_Params params;
	params.SkyThis = SkyThis;
	params.SkyNext = SkyNext;
	params.Time = Time;
	params.NextPOS = NextPOS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExtraUpdates
// ()

void ABP_Sky_Sphere_Gen1_C::ExtraUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExtraUpdates");

	ABP_Sky_Sphere_Gen1_C_ExtraUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.SetMaterials
// ()
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_C::SetMaterials(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.SetMaterials");

	ABP_Sky_Sphere_Gen1_C_SetMaterials_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ReceiveBeginPlay
// ()

void ABP_Sky_Sphere_Gen1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ReceiveBeginPlay");

	ABP_Sky_Sphere_Gen1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ColorFilter
// ()
// Parameters:
// struct FLinearColor            InputColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FilterColor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_C::ColorFilter(const struct FLinearColor& InputColor, const struct FLinearColor& FilterColor, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ColorFilter");

	ABP_Sky_Sphere_Gen1_C_ColorFilter_Params params;
	params.InputColor = InputColor;
	params.FilterColor = FilterColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Update Material
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  WeatherBlends                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Sky_Sphere_Gen1_C::Update_Material(float Time, TArray<float>* WeatherBlends)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Update Material");

	ABP_Sky_Sphere_Gen1_C_Update_Material_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherBlends != nullptr)
		*WeatherBlends = params.WeatherBlends;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UpdateSunDirection
// ()

void ABP_Sky_Sphere_Gen1_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UpdateSunDirection");

	ABP_Sky_Sphere_Gen1_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UserConstructionScript
// (Static, Public, Private, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_Sky_Sphere_Gen1_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.UserConstructionScript");

	ABP_Sky_Sphere_Gen1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.RecieveMatineeUpdated
// ()

void ABP_Sky_Sphere_Gen1_C::RecieveMatineeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.RecieveMatineeUpdated");

	ABP_Sky_Sphere_Gen1_C_RecieveMatineeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Init
// ()

void ABP_Sky_Sphere_Gen1_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.Init");

	ABP_Sky_Sphere_Gen1_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_Gen1_C::ExecuteUbergraph_BP_Sky_Sphere_Gen1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Gen1.BP_Sky_Sphere_Gen1_C.ExecuteUbergraph_BP_Sky_Sphere_Gen1");

	ABP_Sky_Sphere_Gen1_C_ExecuteUbergraph_BP_Sky_Sphere_Gen1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
