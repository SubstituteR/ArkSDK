// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ThrowRock
// ()

void AShapeshifter_Large_Character_BP_Hunt_C::ThrowRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ThrowRock");

	AShapeshifter_Large_Character_BP_Hunt_C_ThrowRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AShapeshifter_Large_Character_BP_Hunt_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPGetMultiUseEntries");

	AShapeshifter_Large_Character_BP_Hunt_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.Initialize
// ()

void AShapeshifter_Large_Character_BP_Hunt_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.Initialize");

	AShapeshifter_Large_Character_BP_Hunt_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPOverrideTamingDescriptionLabel
// ()
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Large_Character_BP_Hunt_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPOverrideTamingDescriptionLabel");

	AShapeshifter_Large_Character_BP_Hunt_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.UserConstructionScript
// ()

void AShapeshifter_Large_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.UserConstructionScript");

	AShapeshifter_Large_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_Hunt_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt");

	AShapeshifter_Large_Character_BP_Hunt_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
