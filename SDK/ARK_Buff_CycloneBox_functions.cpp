// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_CycloneBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CycloneBox.Buff_CycloneBox_C.Set Server TickFrequence
// ()

void ABuff_CycloneBox_C::Set_Server_TickFrequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.Set Server TickFrequence");

	ABuff_CycloneBox_C_Set_Server_TickFrequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.UpdateScale
// ()
// Parameters:
// struct FVector                 BoxScale                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CycloneBox_C::UpdateScale(const struct FVector& BoxScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.UpdateScale");

	ABuff_CycloneBox_C_UpdateScale_Params params;
	params.BoxScale = BoxScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.Update Box Extent
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CycloneBox_C::Update_Box_Extent(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.Update Box Extent");

	ABuff_CycloneBox_C_Update_Box_Extent_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CycloneBox_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.BPDeactivated");

	ABuff_CycloneBox_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.BuffTickServer
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CycloneBox_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.BuffTickServer");

	ABuff_CycloneBox_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.UserConstructionScript
// ()

void ABuff_CycloneBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.UserConstructionScript");

	ABuff_CycloneBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CycloneBox.Buff_CycloneBox_C.ExecuteUbergraph_Buff_CycloneBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CycloneBox_C::ExecuteUbergraph_Buff_CycloneBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CycloneBox.Buff_CycloneBox_C.ExecuteUbergraph_Buff_CycloneBox");

	ABuff_CycloneBox_C_ExecuteUbergraph_Buff_CycloneBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
