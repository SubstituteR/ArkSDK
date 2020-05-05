// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_BotPlayRandomMontage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BotPlayRandomMontage_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveTick");

	UBTT_BotPlayRandomMontage_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BotPlayRandomMontage_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveExecute");

	UBTT_BotPlayRandomMontage_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ExecuteUbergraph_BTT_BotPlayRandomMontage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BotPlayRandomMontage_C::ExecuteUbergraph_BTT_BotPlayRandomMontage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ExecuteUbergraph_BTT_BotPlayRandomMontage");

	UBTT_BotPlayRandomMontage_C_ExecuteUbergraph_BTT_BotPlayRandomMontage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
