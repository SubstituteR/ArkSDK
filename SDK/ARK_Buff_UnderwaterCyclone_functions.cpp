// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_UnderwaterCyclone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingRadiusAtLocation
// ()
// Parameters:
// struct FVector                 Loactaion                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::GetPullingRadiusAtLocation(const struct FVector& Loactaion, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingRadiusAtLocation");

	ABuff_UnderwaterCyclone_C_GetPullingRadiusAtLocation_Params params;
	params.Loactaion = Loactaion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingSpeedAtLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::GetPullingSpeedAtLocation(const struct FVector& Location, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingSpeedAtLocation");

	ABuff_UnderwaterCyclone_C_GetPullingSpeedAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetStateAtLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InsideCyclone                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PullingPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::GetStateAtLocation(const struct FVector& Location, bool* InsideCyclone, bool* PullingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetStateAtLocation");

	ABuff_UnderwaterCyclone_C_GetStateAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InsideCyclone != nullptr)
		*InsideCyclone = params.InsideCyclone;
	if (PullingPlayer != nullptr)
		*PullingPlayer = params.PullingPlayer;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Affect Radius at Location
// ()
// Parameters:
// struct FVector                 InLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::Get_Affect_Radius_at_Location(const struct FVector& InLocation, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Affect Radius at Location");

	ABuff_UnderwaterCyclone_C_Get_Affect_Radius_at_Location_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetCycloneCenterLocation
// ()
// Parameters:
// struct FVector                 CenterLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::GetCycloneCenterLocation(struct FVector* CenterLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetCycloneCenterLocation");

	ABuff_UnderwaterCyclone_C_GetCycloneCenterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CenterLocation != nullptr)
		*CenterLocation = params.CenterLocation;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BPDeactivated");

	ABuff_UnderwaterCyclone_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneForceRadius
// ()

void ABuff_UnderwaterCyclone_C::OnRep_CycloneForceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneForceRadius");

	ABuff_UnderwaterCyclone_C_OnRep_CycloneForceRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneHeight
// ()

void ABuff_UnderwaterCyclone_C::OnRep_CycloneHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneHeight");

	ABuff_UnderwaterCyclone_C_OnRep_CycloneHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.InitializeCyclone
// ()
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtend                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RadiusTop                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrideRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// class ABuff_CycloneBox_C*      CycloneBox                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::InitializeCyclone(float Height, const struct FVector& BoxLocation, const struct FVector& BoxExtend, const struct FVector& Velocity, float RadiusTop, bool OverrideRadius, class ABuff_CycloneBox_C* CycloneBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.InitializeCyclone");

	ABuff_UnderwaterCyclone_C_InitializeCyclone_Params params;
	params.Height = Height;
	params.BoxLocation = BoxLocation;
	params.BoxExtend = BoxExtend;
	params.Velocity = Velocity;
	params.RadiusTop = RadiusTop;
	params.OverrideRadius = OverrideRadius;
	params.CycloneBox = CycloneBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Sea ZAt Location
// ()
// Parameters:
// struct FVector2D               AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZAtLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::Get_Sea_ZAt_Location(const struct FVector2D& AtLocation, float* ZAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Sea ZAt Location");

	ABuff_UnderwaterCyclone_C_Get_Sea_ZAt_Location_Params params;
	params.AtLocation = AtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZAtLocation != nullptr)
		*ZAtLocation = params.ZAtLocation;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Apply Force
// ()

void ABuff_UnderwaterCyclone_C::Apply_Force()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Apply Force");

	ABuff_UnderwaterCyclone_C_Apply_Force_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickClient");

	ABuff_UnderwaterCyclone_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickServer");

	ABuff_UnderwaterCyclone_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ReceiveBeginPlay
// ()

void ABuff_UnderwaterCyclone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ReceiveBeginPlay");

	ABuff_UnderwaterCyclone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.UserConstructionScript
// ()

void ABuff_UnderwaterCyclone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.UserConstructionScript");

	ABuff_UnderwaterCyclone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ExecuteUbergraph_Buff_UnderwaterCyclone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_UnderwaterCyclone_C::ExecuteUbergraph_Buff_UnderwaterCyclone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ExecuteUbergraph_Buff_UnderwaterCyclone");

	ABuff_UnderwaterCyclone_C_ExecuteUbergraph_Buff_UnderwaterCyclone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
