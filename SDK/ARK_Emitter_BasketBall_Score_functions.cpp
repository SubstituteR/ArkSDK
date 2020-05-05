// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_BasketBall_Score_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.UserConstructionScript
// ()

void AEmitter_BasketBall_Score_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.UserConstructionScript");

	AEmitter_BasketBall_Score_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.TextHop__FinishedFunc
// ()

void AEmitter_BasketBall_Score_C::TextHop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.TextHop__FinishedFunc");

	AEmitter_BasketBall_Score_C_TextHop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.TextHop__UpdateFunc
// ()

void AEmitter_BasketBall_Score_C::TextHop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.TextHop__UpdateFunc");

	AEmitter_BasketBall_Score_C_TextHop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.ReceiveBeginPlay
// ()

void AEmitter_BasketBall_Score_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.ReceiveBeginPlay");

	AEmitter_BasketBall_Score_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.ExecuteUbergraph_Emitter_BasketBall_Score
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_BasketBall_Score_C::ExecuteUbergraph_Emitter_BasketBall_Score(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_BasketBall_Score.Emitter_BasketBall_Score_C.ExecuteUbergraph_Emitter_BasketBall_Score");

	AEmitter_BasketBall_Score_C_ExecuteUbergraph_Emitter_BasketBall_Score_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
