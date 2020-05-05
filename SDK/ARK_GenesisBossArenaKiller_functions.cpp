// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GenesisBossArenaKiller_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.IsMissionActive
// ()
// Parameters:
// bool                           OutVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenesisBossArenaKiller_C::IsMissionActive(bool* OutVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.IsMissionActive");

	AGenesisBossArenaKiller_C_IsMissionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGenesisBossArenaKiller_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveTick");

	AGenesisBossArenaKiller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Get All Actors in Boss Arena
// ()
// Parameters:
// bool                           bIncludeUnconscious            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeUntamedCreatures       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDead                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePlayers                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDinos                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreAttached                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          TheActors                      (Parm, OutParm, ZeroConstructor)

void AGenesisBossArenaKiller_C::Get_All_Actors_in_Boss_Arena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Get All Actors in Boss Arena");

	AGenesisBossArenaKiller_C_Get_All_Actors_in_Boss_Arena_Params params;
	params.bIncludeUnconscious = bIncludeUnconscious;
	params.bIncludeUntamedCreatures = bIncludeUntamedCreatures;
	params.bIncludeDead = bIncludeDead;
	params.bIgnorePlayers = bIgnorePlayers;
	params.bIgnoreDinos = bIgnoreDinos;
	params.bIgnoreAttached = bIgnoreAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheActors != nullptr)
		*TheActors = params.TheActors;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Kill All Occupants
// ()

void AGenesisBossArenaKiller_C::Kill_All_Occupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Kill All Occupants");

	AGenesisBossArenaKiller_C_Kill_All_Occupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Teleport Back to Home
// ()

void AGenesisBossArenaKiller_C::Teleport_Back_to_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Teleport Back to Home");

	AGenesisBossArenaKiller_C_Teleport_Back_to_Home_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.UserConstructionScript
// ()

void AGenesisBossArenaKiller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.UserConstructionScript");

	AGenesisBossArenaKiller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveBeginPlay
// ()

void AGenesisBossArenaKiller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveBeginPlay");

	AGenesisBossArenaKiller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.KillThem
// ()

void AGenesisBossArenaKiller_C::KillThem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.KillThem");

	AGenesisBossArenaKiller_C_KillThem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ExecuteUbergraph_GenesisBossArenaKiller
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenesisBossArenaKiller_C::ExecuteUbergraph_GenesisBossArenaKiller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ExecuteUbergraph_GenesisBossArenaKiller");

	AGenesisBossArenaKiller_C_ExecuteUbergraph_GenesisBossArenaKiller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
