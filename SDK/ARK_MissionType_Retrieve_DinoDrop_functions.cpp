// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GetPerPlayerWorldIndicators
// (NetReliable, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_DinoDrop_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GetPerPlayerWorldIndicators");

	AMissionType_Retrieve_DinoDrop_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GeneratePhaseRequirements
// (NetReliable, Exec, Native, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_DinoDrop_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GeneratePhaseRequirements");

	AMissionType_Retrieve_DinoDrop_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExtraSpecificDinoSetup
// (NetReliable, Native, Event, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionServerSidePoint** Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttackerDino                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::ExtraSpecificDinoSetup(class APrimalDinoCharacter** Dino, class AMissionServerSidePoint** Spawner, bool* IsAttackerDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExtraSpecificDinoSetup");

	AMissionType_Retrieve_DinoDrop_C_ExtraSpecificDinoSetup_Params params;
	params.Dino = Dino;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttackerDino != nullptr)
		*IsAttackerDino = params.IsAttackerDino;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.UserConstructionScript
// ()

void AMissionType_Retrieve_DinoDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.UserConstructionScript");

	AMissionType_Retrieve_DinoDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDinoDied");

	AMissionType_Retrieve_DinoDrop_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ItemSetup
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::ItemSetup(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ItemSetup");

	AMissionType_Retrieve_DinoDrop_C_ItemSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.EscapeEventSetup
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::EscapeEventSetup(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.EscapeEventSetup");

	AMissionType_Retrieve_DinoDrop_C_EscapeEventSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDroppedItemPickedUp
// ()
// Parameters:
// class ADroppedItemMission**    DroppedItem                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            InventoryItem                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::BPOnMissionDroppedItemPickedUp(class ADroppedItemMission** DroppedItem, class APlayerController** ByPC, class UPrimalItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDroppedItemPickedUp");

	AMissionType_Retrieve_DinoDrop_C_BPOnMissionDroppedItemPickedUp_Params params;
	params.DroppedItem = DroppedItem;
	params.ByPC = ByPC;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_C::ExecuteUbergraph_MissionType_Retrieve_DinoDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop");

	AMissionType_Retrieve_DinoDrop_C_ExecuteUbergraph_MissionType_Retrieve_DinoDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
