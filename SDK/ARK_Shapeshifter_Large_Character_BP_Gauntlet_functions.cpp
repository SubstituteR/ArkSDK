// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.BPOverrideTamingDescriptionLabel
// ()
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Large_Character_BP_Gauntlet_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.BPOverrideTamingDescriptionLabel");

	AShapeshifter_Large_Character_BP_Gauntlet_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.Initialize
// ()

void AShapeshifter_Large_Character_BP_Gauntlet_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.Initialize");

	AShapeshifter_Large_Character_BP_Gauntlet_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void AShapeshifter_Large_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.UserConstructionScript");

	AShapeshifter_Large_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.AnimNotify_ChargingMeleeStart
// ()

void AShapeshifter_Large_Character_BP_Gauntlet_C::AnimNotify_ChargingMeleeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.AnimNotify_ChargingMeleeStart");

	AShapeshifter_Large_Character_BP_Gauntlet_C_AnimNotify_ChargingMeleeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_Gauntlet_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Gauntlet");

	AShapeshifter_Large_Character_BP_Gauntlet_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
