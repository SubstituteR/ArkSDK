// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CustomIBL_Capture_Blueprint_Working_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.Calculate Light
// (NetRequest, Native, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct UObject_FTransform      TransformIn                    (Parm, IsPlainOldData)
// struct FLinearColor            LightColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACustomIBL_Capture_Blueprint_Working_C::Calculate_Light(const struct UObject_FTransform& TransformIn, struct FLinearColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.Calculate Light");

	ACustomIBL_Capture_Blueprint_Working_C_Calculate_Light_Params params;
	params.TransformIn = TransformIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.UserConstructionScript
// (NetReliable, Exec, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ACustomIBL_Capture_Blueprint_Working_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.UserConstructionScript");

	ACustomIBL_Capture_Blueprint_Working_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ReceiveBeginPlay
// ()

void ACustomIBL_Capture_Blueprint_Working_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ReceiveBeginPlay");

	ACustomIBL_Capture_Blueprint_Working_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACustomIBL_Capture_Blueprint_Working_C::ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working");

	ACustomIBL_Capture_Blueprint_Working_C_ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
