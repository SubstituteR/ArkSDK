// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SK_gliderPack_wings_AnimBlueprint_FPV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.UpdateWingOffsets
// ()
// Parameters:
// class AShooterCharacter**      ShooterCharacter               (Parm, ZeroConstructor, IsPlainOldData)

void USK_gliderPack_wings_AnimBlueprint_FPV_C::UpdateWingOffsets(class AShooterCharacter** ShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.UpdateWingOffsets");

	USK_gliderPack_wings_AnimBlueprint_FPV_C_UpdateWingOffsets_Params params;
	params.ShooterCharacter = ShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_gliderPack_wings_AnimBlueprint_FPV_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation");

	USK_gliderPack_wings_AnimBlueprint_FPV_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_gliderPack_wings_AnimBlueprint_FPV_C::ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV");

	USK_gliderPack_wings_AnimBlueprint_FPV_C_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif