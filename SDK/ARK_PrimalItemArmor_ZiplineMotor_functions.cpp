// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_ZiplineMotor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.GetGasolineValueFromItem
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             TargetItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UPrimalItemArmor_ZiplineMotor_C::STATIC_GetGasolineValueFromItem(class UPrimalItem* TargetItem, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.GetGasolineValueFromItem");

	UPrimalItemArmor_ZiplineMotor_C_GetGasolineValueFromItem_Params params;
	params.TargetItem = TargetItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetCustomInventoryWidgetText
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemArmor_ZiplineMotor_C::STATIC_BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetCustomInventoryWidgetText");

	UPrimalItemArmor_ZiplineMotor_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetSkinnedCustomInventoryWidgetText
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemArmor_ZiplineMotor_C::STATIC_BPGetSkinnedCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetSkinnedCustomInventoryWidgetText");

	UPrimalItemArmor_ZiplineMotor_C_BPGetSkinnedCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SetGasolineDescription
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ZiplineMotor_C::STATIC_SetGasolineDescription(class UPrimalItem* Item, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SetGasolineDescription");

	UPrimalItemArmor_ZiplineMotor_C_SetGasolineDescription_Params params;
	params.Item = Item;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPInitFromItemNetInfo
// ()

void UPrimalItemArmor_ZiplineMotor_C::BPInitFromItemNetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPInitFromItemNetInfo");

	UPrimalItemArmor_ZiplineMotor_C_BPInitFromItemNetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.RemovedSkinFromItem
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ZiplineMotor_C::STATIC_RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.RemovedSkinFromItem");

	UPrimalItemArmor_ZiplineMotor_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SkinEquippedBlueprintTick
// ()
// Parameters:
// class UPrimalItem**            OwnerItem                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ZiplineMotor_C::SkinEquippedBlueprintTick(class UPrimalItem** OwnerItem, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SkinEquippedBlueprintTick");

	UPrimalItemArmor_ZiplineMotor_C_SkinEquippedBlueprintTick_Params params;
	params.OwnerItem = OwnerItem;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ApplyingSkinOntoItem
// (NetReliable, NetRequest, Event, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ZiplineMotor_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ApplyingSkinOntoItem");

	UPrimalItemArmor_ZiplineMotor_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ExecuteUbergraph_PrimalItemArmor_ZiplineMotor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ZiplineMotor_C::ExecuteUbergraph_PrimalItemArmor_ZiplineMotor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ExecuteUbergraph_PrimalItemArmor_ZiplineMotor");

	UPrimalItemArmor_ZiplineMotor_C_ExecuteUbergraph_PrimalItemArmor_ZiplineMotor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
