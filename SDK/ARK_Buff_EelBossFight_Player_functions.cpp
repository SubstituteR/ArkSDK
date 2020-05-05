// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_EelBossFight_Player_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.BPGetHUDElements
// (NetRequest, Exec, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_EelBossFight_Player_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.BPGetHUDElements");

	ABuff_EelBossFight_Player_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.UserConstructionScript
// ()

void ABuff_EelBossFight_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.UserConstructionScript");

	ABuff_EelBossFight_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.ExecuteUbergraph_Buff_EelBossFight_Player
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EelBossFight_Player_C::ExecuteUbergraph_Buff_EelBossFight_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EelBossFight_Player.Buff_EelBossFight_Player_C.ExecuteUbergraph_Buff_EelBossFight_Player");

	ABuff_EelBossFight_Player_C_ExecuteUbergraph_Buff_EelBossFight_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
