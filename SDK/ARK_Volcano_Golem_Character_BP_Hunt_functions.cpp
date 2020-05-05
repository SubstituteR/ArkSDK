// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Golem_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.UserConstructionScript
// ()

void AVolcano_Golem_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.UserConstructionScript");

	AVolcano_Golem_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Golem_Character_BP_Hunt_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.BlueprintAnimNotifyCustomEvent");

	AVolcano_Golem_Character_BP_Hunt_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ReceiveBeginPlay
// ()

void AVolcano_Golem_Character_BP_Hunt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ReceiveBeginPlay");

	AVolcano_Golem_Character_BP_Hunt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Golem_Character_BP_Hunt_C::ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Golem_Character_BP_Hunt.Volcano_Golem_Character_BP_Hunt_C.ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt");

	AVolcano_Golem_Character_BP_Hunt_C_ExecuteUbergraph_Volcano_Golem_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
