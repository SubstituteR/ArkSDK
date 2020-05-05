// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GenesisBossArenaManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Get All Actors in Boss Arena
// ()
// Parameters:
// bool                           bIncludeUnconscious            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeUntamedCreatures       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDead                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePlayers                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDinos                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreAttached                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          TheActors                      (Parm, OutParm, ZeroConstructor)

void AGenesisBossArenaManager_C::Get_All_Actors_in_Boss_Arena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.Get All Actors in Boss Arena");

	AGenesisBossArenaManager_C_Get_All_Actors_in_Boss_Arena_Params params;
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


// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Kill All Occupants
// ()

void AGenesisBossArenaManager_C::Kill_All_Occupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.Kill All Occupants");

	AGenesisBossArenaManager_C_Kill_All_Occupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Teleport Back to Home
// ()

void AGenesisBossArenaManager_C::Teleport_Back_to_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.Teleport Back to Home");

	AGenesisBossArenaManager_C_Teleport_Back_to_Home_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaManager.GenesisBossArenaManager_C.UserConstructionScript
// ()

void AGenesisBossArenaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.UserConstructionScript");

	AGenesisBossArenaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaManager.GenesisBossArenaManager_C.ReceiveBeginPlay
// ()

void AGenesisBossArenaManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.ReceiveBeginPlay");

	AGenesisBossArenaManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenesisBossArenaManager.GenesisBossArenaManager_C.ExecuteUbergraph_GenesisBossArenaManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenesisBossArenaManager_C::ExecuteUbergraph_GenesisBossArenaManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenesisBossArenaManager.GenesisBossArenaManager_C.ExecuteUbergraph_GenesisBossArenaManager");

	AGenesisBossArenaManager_C_ExecuteUbergraph_GenesisBossArenaManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
