// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_oilPump_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function oilPump_RIG_AnimBlueprint.oilPump_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UoilPump_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function oilPump_RIG_AnimBlueprint.oilPump_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");

	UoilPump_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function oilPump_RIG_AnimBlueprint.oilPump_RIG_AnimBlueprint_C.ExecuteUbergraph_oilPump_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UoilPump_RIG_AnimBlueprint_C::ExecuteUbergraph_oilPump_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function oilPump_RIG_AnimBlueprint.oilPump_RIG_AnimBlueprint_C.ExecuteUbergraph_oilPump_RIG_AnimBlueprint");

	UoilPump_RIG_AnimBlueprint_C_ExecuteUbergraph_oilPump_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
