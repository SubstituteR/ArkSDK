// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemGeneric_GemFertile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.UserConstructionScript
// ()

void ADroppedItemGeneric_GemFertile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.UserConstructionScript");

	ADroppedItemGeneric_GemFertile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.ExecuteUbergraph_DroppedItemGeneric_GemFertile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_GemFertile_C::ExecuteUbergraph_DroppedItemGeneric_GemFertile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.ExecuteUbergraph_DroppedItemGeneric_GemFertile");

	ADroppedItemGeneric_GemFertile_C_ExecuteUbergraph_DroppedItemGeneric_GemFertile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
