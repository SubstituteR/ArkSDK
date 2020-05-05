// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.EvaluateArenaForPlayersAndStructs
// ()

void AMissionType_GauntletWaves_Base_C::EvaluateArenaForPlayersAndStructs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.EvaluateArenaForPlayersAndStructs");

	AMissionType_GauntletWaves_Base_C_EvaluateArenaForPlayersAndStructs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SortGauntletDamageData
// (Exec, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AMissionType_GauntletWaves_Base_C::SortGauntletDamageData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SortGauntletDamageData");

	AMissionType_GauntletWaves_Base_C_SortGauntletDamageData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Get Gauntlet Damage Data For Player
// (Native, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FGauntletWaves_PlayerControllerDamageStruct> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGauntletWaves_PlayerControllerDamageStruct Array_Element                  (Parm, OutParm)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundPlayer                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::Get_Gauntlet_Damage_Data_For_Player(class AShooterPlayerController* PlayerController, TArray<struct FGauntletWaves_PlayerControllerDamageStruct>* Array, struct FGauntletWaves_PlayerControllerDamageStruct* Array_Element, int* Array_Index, bool* bFoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Get Gauntlet Damage Data For Player");

	AMissionType_GauntletWaves_Base_C_Get_Gauntlet_Damage_Data_For_Player_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
	if (bFoundPlayer != nullptr)
		*bFoundPlayer = params.bFoundPlayer;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.AddGauntletLeaderboardRow
// (NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// double                         NetworkTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StringValue                    (Parm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::AddGauntletLeaderboardRow(class AShooterPlayerController* Controller, double NetworkTime, const class FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.AddGauntletLeaderboardRow");

	AMissionType_GauntletWaves_Base_C_AddGauntletLeaderboardRow_Params params;
	params.Controller = Controller;
	params.NetworkTime = NetworkTime;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Clear Improperly Destroyed Mission Dinos
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_GauntletWaves_Base_C::Clear_Improperly_Destroyed_Mission_Dinos(TArray<class APrimalDinoCharacter*>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Clear Improperly Destroyed Mission Dinos");

	AMissionType_GauntletWaves_Base_C_Clear_Improperly_Destroyed_Mission_Dinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMostCommonSetup
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FDinoSetup>      InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    EntriesSpawnNumLimits          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDinoSetup              OutputPin                      (Parm, OutParm)

void AMissionType_GauntletWaves_Base_C::GetMostCommonSetup(TArray<struct FDinoSetup>* InputPin, TArray<int>* EntriesSpawnNumLimits, struct FDinoSetup* OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMostCommonSetup");

	AMissionType_GauntletWaves_Base_C_GetMostCommonSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
	if (EntriesSpawnNumLimits != nullptr)
		*EntriesSpawnNumLimits = params.EntriesSpawnNumLimits;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.formatted time
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissionType_GauntletWaves_Base_C::formatted_time()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.formatted time");

	AMissionType_GauntletWaves_Base_C_formatted_time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GivePlayerPowerUpWeapons
// ()
// Parameters:
// class ABuff_GauntletWaves_PowerUpTrigger_C* PowerUpBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::GivePlayerPowerUpWeapons(class ABuff_GauntletWaves_PowerUpTrigger_C* PowerUpBuff, class AShooterCharacter* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GivePlayerPowerUpWeapons");

	AMissionType_GauntletWaves_Base_C_GivePlayerPowerUpWeapons_Params params;
	params.PowerUpBuff = PowerUpBuff;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponDataForCurrentWave
// (NetReliable, Exec, Event, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FGauntletWeaponPowerupData_Struct> CurrentPhaseWeaponDatas        (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::STATIC_GetWeaponDataForCurrentWave(TArray<struct FGauntletWeaponPowerupData_Struct>* CurrentPhaseWeaponDatas)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponDataForCurrentWave");

	AMissionType_GauntletWaves_Base_C_GetWeaponDataForCurrentWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPhaseWeaponDatas != nullptr)
		*CurrentPhaseWeaponDatas = params.CurrentPhaseWeaponDatas;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponTypeForMissionTriggerPriority
// (NetReliable, Native, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FGauntletWeaponPowerupData_Struct> WeaponsForThisPhase            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MissionTriggerOrder            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WeaponType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReactivationTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoAmount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::STATIC_GetWeaponTypeForMissionTriggerPriority(int MissionTriggerOrder, TArray<struct FGauntletWeaponPowerupData_Struct>* WeaponsForThisPhase, class UClass** WeaponType, float* ReactivationTime, class UClass** AmmoType, int* AmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetWeaponTypeForMissionTriggerPriority");

	AMissionType_GauntletWaves_Base_C_GetWeaponTypeForMissionTriggerPriority_Params params;
	params.MissionTriggerOrder = MissionTriggerOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponsForThisPhase != nullptr)
		*WeaponsForThisPhase = params.WeaponsForThisPhase;
	if (WeaponType != nullptr)
		*WeaponType = params.WeaponType;
	if (ReactivationTime != nullptr)
		*ReactivationTime = params.ReactivationTime;
	if (AmmoType != nullptr)
		*AmmoType = params.AmmoType;
	if (AmmoAmount != nullptr)
		*AmmoAmount = params.AmmoAmount;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWaveDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMissionType_GauntletWaves_Base_C::GetCurrentWaveDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWaveDuration");

	AMissionType_GauntletWaves_Base_C_GetCurrentWaveDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.TeleportActorOutsideMission
// ()
// Parameters:
// class AActor*                  ActorToTeleport                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::TeleportActorOutsideMission(class AActor* ActorToTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.TeleportActorOutsideMission");

	AMissionType_GauntletWaves_Base_C_TeleportActorOutsideMission_Params params;
	params.ActorToTeleport = ActorToTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSaddleData
// ()
// Parameters:
// class APrimalDinoCharacter*    InputDino                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnBytes                    (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::GetDinoSaddleData(class APrimalDinoCharacter* InputDino, TArray<unsigned char>* ReturnBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSaddleData");

	AMissionType_GauntletWaves_Base_C_GetDinoSaddleData_Params params;
	params.InputDino = InputDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnBytes != nullptr)
		*ReturnBytes = params.ReturnBytes;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCharStatsAsFloats
// ()
// Parameters:
// class APrimalDinoCharacter*    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::GetCharStatsAsFloats(class APrimalDinoCharacter* Character, TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCharStatsAsFloats");

	AMissionType_GauntletWaves_Base_C_GetCharStatsAsFloats_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ConvertToCryoData
// (NetReliable, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FCustomItemData         CustomItemData                 (Parm, OutParm)

void AMissionType_GauntletWaves_Base_C::ConvertToCryoData(class APrimalDinoCharacter* Dino, class UPrimalItem* Item, struct FCustomItemData* CustomItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ConvertToCryoData");

	AMissionType_GauntletWaves_Base_C_ConvertToCryoData_Params params;
	params.Dino = Dino;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomItemData != nullptr)
		*CustomItemData = params.CustomItemData;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Set Phase Dino Spawn Types
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FDinoSetup>      DinoSetupEntires               (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_GauntletWaves_Base_C::Set_Phase_Dino_Spawn_Types(TArray<struct FDinoSetup>* DinoSetupEntires)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Set Phase Dino Spawn Types");

	AMissionType_GauntletWaves_Base_C_Set_Phase_Dino_Spawn_Types_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinoSetupEntires != nullptr)
		*DinoSetupEntires = params.DinoSetupEntires;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetPerPlayerWorldIndicators
// (NetRequest, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::STATIC_GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetPerPlayerWorldIndicators");

	AMissionType_GauntletWaves_Base_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ReceiveDestroyed
// ()

void AMissionType_GauntletWaves_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ReceiveDestroyed");

	AMissionType_GauntletWaves_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxTotalDinosPerWave
// ()
// Parameters:
// int                            MaxTotalDinos                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::GetMaxTotalDinosPerWave(int* MaxTotalDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxTotalDinosPerWave");

	AMissionType_GauntletWaves_Base_C_GetMaxTotalDinosPerWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxTotalDinos != nullptr)
		*MaxTotalDinos = params.MaxTotalDinos;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CanStartPhase
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_GauntletWaves_Base_C::CanStartPhase(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CanStartPhase");

	AMissionType_GauntletWaves_Base_C_CanStartPhase_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGenerateMissionRewards
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FCharacterAndControllerPair* Player                         (Parm)
// bool*                          bCompletedSuccessfully         (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPReward                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     GeneratedItems                 (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::STATIC_BPGenerateMissionRewards(struct FCharacterAndControllerPair* Player, bool* bCompletedSuccessfully, float* XPReward, TArray<class UPrimalItem*>* GeneratedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGenerateMissionRewards");

	AMissionType_GauntletWaves_Base_C_BPGenerateMissionRewards_Params params;
	params.Player = Player;
	params.bCompletedSuccessfully = bCompletedSuccessfully;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XPReward != nullptr)
		*XPReward = params.XPReward;
	if (GeneratedItems != nullptr)
		*GeneratedItems = params.GeneratedItems;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SpawnGauntletDino
// (Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::STATIC_SpawnGauntletDino(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SpawnGauntletDino");

	AMissionType_GauntletWaves_Base_C_SpawnGauntletDino_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSpawnInterval
// (Native, Event, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          DinoSpawnInterval              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::GetDinoSpawnInterval(float* DinoSpawnInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetDinoSpawnInterval");

	AMissionType_GauntletWaves_Base_C_GetDinoSpawnInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinoSpawnInterval != nullptr)
		*DinoSpawnInterval = params.DinoSpawnInterval;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxActiveDinos
// (NetResponse, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            MaxActiveDinos                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasOverride                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::GetMaxActiveDinos(int* MaxActiveDinos, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetMaxActiveDinos");

	AMissionType_GauntletWaves_Base_C_GetMaxActiveDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxActiveDinos != nullptr)
		*MaxActiveDinos = params.MaxActiveDinos;
	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_GauntletWaves_Base_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPGetMissionTimerText");

	AMissionType_GauntletWaves_Base_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetRandomDinoSetupForPhase
// (Event, NetResponse, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidSetup                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDinoSetup              DinoSetup                      (Parm, OutParm)
// int                            RandomSetupIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::GetRandomDinoSetupForPhase(const struct FName& PhaseName, bool* ValidSetup, struct FDinoSetup* DinoSetup, int* RandomSetupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetRandomDinoSetupForPhase");

	AMissionType_GauntletWaves_Base_C_GetRandomDinoSetupForPhase_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidSetup != nullptr)
		*ValidSetup = params.ValidSetup;
	if (DinoSetup != nullptr)
		*DinoSetup = params.DinoSetup;
	if (RandomSetupIndex != nullptr)
		*RandomSetupIndex = params.RandomSetupIndex;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_GauntletWaves_Base_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.IsMissionComplete");

	AMissionType_GauntletWaves_Base_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_GauntletWaves_Base_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPIsPhaseComplete");

	AMissionType_GauntletWaves_Base_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWorldIndicators
// ()
// Parameters:
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::GetCurrentWorldIndicators(TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GetCurrentWorldIndicators");

	AMissionType_GauntletWaves_Base_C_GetCurrentWorldIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GeneratePhaseRequirements
// (NetResponse, Static, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_GauntletWaves_Base_C::STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.GeneratePhaseRequirements");

	AMissionType_GauntletWaves_Base_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.UserConstructionScript
// ()

void AMissionType_GauntletWaves_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.UserConstructionScript");

	AMissionType_GauntletWaves_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDinoDied");

	AMissionType_GauntletWaves_Base_C_BPOnMissionDinoDied_Params params;
	params.Dino = Dino;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnThrottledServerTick");

	AMissionType_GauntletWaves_Base_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_GauntletWaves_Base_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionComplete");

	AMissionType_GauntletWaves_Base_C_BPOnMissionComplete_Params params;
	params.ForPlayer = ForPlayer;
	params.ForController = ForController;
	params.bLastPhaseSuccess = bLastPhaseSuccess;
	params.XPRewarded = XPRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsRewarded != nullptr)
		*ItemsRewarded = params.ItemsRewarded;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDamage
// ()
// Parameters:
// class APrimalStructure**       Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionStructureDamage(class APrimalStructure** Structure, float* Damage, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDamage");

	AMissionType_GauntletWaves_Base_C_BPOnMissionStructureDamage_Params params;
	params.Structure = Structure;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDestroyed
// ()
// Parameters:
// class APrimalStructure**       Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionStructureDestroyed(class APrimalStructure** Structure, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionStructureDestroyed");

	AMissionType_GauntletWaves_Base_C_BPOnMissionStructureDestroyed_Params params;
	params.Structure = Structure;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_GauntletWaves_Base_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SetupPowerUpTriggersAndBuffs
// ()

void AMissionType_GauntletWaves_Base_C::SetupPowerUpTriggersAndBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.SetupPowerUpTriggersAndBuffs");

	AMissionType_GauntletWaves_Base_C_SetupPowerUpTriggersAndBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Begin Waiting Period
// ()

void AMissionType_GauntletWaves_Base_C::Begin_Waiting_Period()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.Begin Waiting Period");

	AMissionType_GauntletWaves_Base_C_Begin_Waiting_Period_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.MultiSpawnEmitterForGauntlet
// ()
// Parameters:
// class UParticleSystem*         particleTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DinoSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideScaleAndTimeDilation  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::MultiSpawnEmitterForGauntlet(class UParticleSystem* particleTemplate, class USoundBase* SoundTemplate, float DinoSize, const struct FVector& Location, bool bOverrideScaleAndTimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.MultiSpawnEmitterForGauntlet");

	AMissionType_GauntletWaves_Base_C_MultiSpawnEmitterForGauntlet_Params params;
	params.particleTemplate = particleTemplate;
	params.SoundTemplate = SoundTemplate;
	params.DinoSize = DinoSize;
	params.Location = Location;
	params.bOverrideScaleAndTimeDilation = bOverrideScaleAndTimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerRespawned");

	AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ThrottledEnsureAggro
// ()

void AMissionType_GauntletWaves_Base_C::ThrottledEnsureAggro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ThrottledEnsureAggro");

	AMissionType_GauntletWaves_Base_C_ThrottledEnsureAggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerDied
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerDied");

	AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerDied_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerEnteredBounds
// ()

void AMissionType_GauntletWaves_Base_C::BPOnMissionPlayerEnteredBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionPlayerEnteredBounds");

	AMissionType_GauntletWaves_Base_C_BPOnMissionPlayerEnteredBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPlayerFoundOutsideBounds
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnPlayerFoundOutsideBounds(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPlayerFoundOutsideBounds");

	AMissionType_GauntletWaves_Base_C_OnPlayerFoundOutsideBounds_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CryoAllTamesAndPortOthers
// ()

void AMissionType_GauntletWaves_Base_C::CryoAllTamesAndPortOthers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.CryoAllTamesAndPortOthers");

	AMissionType_GauntletWaves_Base_C_CryoAllTamesAndPortOthers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnPrepPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseEnded");

	AMissionType_GauntletWaves_Base_C_OnPrepPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnOtherWaveStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnOtherWaveStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnOtherWaveStarted");

	AMissionType_GauntletWaves_Base_C_OnOtherWaveStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnFirstWaveStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnFirstWaveStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnFirstWaveStarted");

	AMissionType_GauntletWaves_Base_C_OnFirstWaveStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnPrepPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnPrepPhaseStarted");

	AMissionType_GauntletWaves_Base_C_OnPrepPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionServerSetup
// ()

void AMissionType_GauntletWaves_Base_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionServerSetup");

	AMissionType_GauntletWaves_Base_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.PreSetupForFirstWave
// ()

void AMissionType_GauntletWaves_Base_C::PreSetupForFirstWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.PreSetupForFirstWave");

	AMissionType_GauntletWaves_Base_C_PreSetupForFirstWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnGauntletWaveStarted
// ()
// Parameters:
// int                            WaveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MissionPhaseName               (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::OnGauntletWaveStarted(int WaveIndex, const struct FName& MissionPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.OnGauntletWaveStarted");

	AMissionType_GauntletWaves_Base_C_OnGauntletWaveStarted_Params params;
	params.WaveIndex = WaveIndex;
	params.MissionPhaseName = MissionPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.NotifyDamageTakenByPlayer
// ()
// Parameters:
// class AShooterPlayerController* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::NotifyDamageTakenByPlayer(class AShooterPlayerController* Player, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.NotifyDamageTakenByPlayer");

	AMissionType_GauntletWaves_Base_C_NotifyDamageTakenByPlayer_Params params;
	params.Player = Player;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDeactivated
// ()

void AMissionType_GauntletWaves_Base_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.BPOnMissionDeactivated");

	AMissionType_GauntletWaves_Base_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ExecuteUbergraph_MissionType_GauntletWaves_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Base_C::ExecuteUbergraph_MissionType_GauntletWaves_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Base.MissionType_GauntletWaves_Base_C.ExecuteUbergraph_MissionType_GauntletWaves_Base");

	AMissionType_GauntletWaves_Base_C_ExecuteUbergraph_MissionType_GauntletWaves_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
