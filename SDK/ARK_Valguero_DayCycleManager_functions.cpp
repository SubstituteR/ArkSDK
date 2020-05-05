// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Valguero_DayCycleManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Get Golem MeshClass
// ()
// Parameters:
// class UClass*                  isScorchedEarthMesh            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::Get_Golem_MeshClass(class UClass** isScorchedEarthMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Get Golem MeshClass");

	AValguero_DayCycleManager_C_Get_Golem_MeshClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isScorchedEarthMesh != nullptr)
		*isScorchedEarthMesh = params.isScorchedEarthMesh;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop NorthernLights
// ()

void AValguero_DayCycleManager_C::Stop_NorthernLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop NorthernLights");

	AValguero_DayCycleManager_C_Stop_NorthernLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start NorthernLights
// ()

void AValguero_DayCycleManager_C::Start_NorthernLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start NorthernLights");

	AValguero_DayCycleManager_C_Start_NorthernLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Calc Mini Map Coord
// ()
// Parameters:
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLattitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutLongitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::Calc_Mini_Map_Coord(const struct FVector& inVec, float* OutLattitude, float* OutLongitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Calc Mini Map Coord");

	AValguero_DayCycleManager_C_Calc_Mini_Map_Coord_Params params;
	params.inVec = inVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLattitude != nullptr)
		*OutLattitude = params.OutLattitude;
	if (OutLongitude != nullptr)
		*OutLongitude = params.OutLongitude;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.GetWeatherEventWarning
// ()
// Parameters:
// int                            WeatherEventWarningType        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::GetWeatherEventWarning(int* WeatherEventWarningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.GetWeatherEventWarning");

	AValguero_DayCycleManager_C_GetWeatherEventWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherEventWarningType != nullptr)
		*WeatherEventWarningType = params.WeatherEventWarningType;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start Earth Quake
// ()

void AValguero_DayCycleManager_C::Start_Earth_Quake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Start Earth Quake");

	AValguero_DayCycleManager_C_Start_Earth_Quake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterSpawned
// ()
// Parameters:
// class AShooterCharacter**      TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::ShooterCharacterSpawned(class AShooterCharacter** TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterSpawned");

	AValguero_DayCycleManager_C_ShooterCharacterSpawned_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Earth Quake Drop Item at Location
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BiomeArea                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRot                          (Parm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::STATIC_Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Earth Quake Drop Item at Location");

	AValguero_DayCycleManager_C_Earth_Quake_Drop_Item_at_Location_Params params;
	params.AtLoc = AtLoc;
	params.BiomeArea = BiomeArea;
	params.AtRot = AtRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop Earth Quake
// ()

void AValguero_DayCycleManager_C::Stop_Earth_Quake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.Stop Earth Quake");

	AValguero_DayCycleManager_C_Stop_Earth_Quake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterPossessed
// ()
// Parameters:
// class AShooterCharacter**      TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::ShooterCharacterPossessed(class AShooterCharacter** TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ShooterCharacterPossessed");

	AValguero_DayCycleManager_C_ShooterCharacterPossessed_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.UserConstructionScript
// ()

void AValguero_DayCycleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.UserConstructionScript");

	AValguero_DayCycleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ReceiveBeginPlay
// ()

void AValguero_DayCycleManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ReceiveBeginPlay");

	AValguero_DayCycleManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ExecuteUbergraph_Valguero_DayCycleManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AValguero_DayCycleManager_C::ExecuteUbergraph_Valguero_DayCycleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Valguero_DayCycleManager.Valguero_DayCycleManager_C.ExecuteUbergraph_Valguero_DayCycleManager");

	AValguero_DayCycleManager_C_ExecuteUbergraph_Valguero_DayCycleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
