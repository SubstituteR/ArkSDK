// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EarthquakeEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EarthquakeEffect.EarthquakeEffect_C.Get Particle System
// ()
// Parameters:
// TEnumAsByte<EarthquakeEffectSurfaceType> Surface                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBiomeZone>        Biome                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Earthquake_Strength            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Particles                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEarthquakeEffect_C::Get_Particle_System(TEnumAsByte<EarthquakeEffectSurfaceType> Surface, TEnumAsByte<EBiomeZone> Biome, float Earthquake_Strength, bool* Success, class UParticleSystem** Particles)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.Get Particle System");

	AEarthquakeEffect_C_Get_Particle_System_Params params;
	params.Surface = Surface;
	params.Biome = Biome;
	params.Earthquake_Strength = Earthquake_Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Particles != nullptr)
		*Particles = params.Particles;
}


// Function EarthquakeEffect.EarthquakeEffect_C.NormalToSurfaceType
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EarthquakeEffectSurfaceType> Surface_Type                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEarthquakeEffect_C::NormalToSurfaceType(const struct FVector& Normal, TEnumAsByte<EarthquakeEffectSurfaceType>* Surface_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.NormalToSurfaceType");

	AEarthquakeEffect_C_NormalToSurfaceType_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Surface_Type != nullptr)
		*Surface_Type = params.Surface_Type;
}


// Function EarthquakeEffect.EarthquakeEffect_C.UserConstructionScript
// ()

void AEarthquakeEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.UserConstructionScript");

	AEarthquakeEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarthquakeEffect.EarthquakeEffect_C.ReceiveBeginPlay
// ()

void AEarthquakeEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.ReceiveBeginPlay");

	AEarthquakeEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarthquakeEffect.EarthquakeEffect_C.BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AEarthquakeEffect_C::BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature");

	AEarthquakeEffect_C_BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function EarthquakeEffect.EarthquakeEffect_C.InitSpawning
// ()
// Parameters:
// float                          MinDelay                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDelay                       (Parm, ZeroConstructor, IsPlainOldData)

void AEarthquakeEffect_C::InitSpawning(float MinDelay, float MaxDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.InitSpawning");

	AEarthquakeEffect_C_InitSpawning_Params params;
	params.MinDelay = MinDelay;
	params.MaxDelay = MaxDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarthquakeEffect.EarthquakeEffect_C.ExecuteUbergraph_EarthquakeEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEarthquakeEffect_C::ExecuteUbergraph_EarthquakeEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeEffect.EarthquakeEffect_C.ExecuteUbergraph_EarthquakeEffect");

	AEarthquakeEffect_C_ExecuteUbergraph_EarthquakeEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
