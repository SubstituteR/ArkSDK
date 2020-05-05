// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C.UserConstructionScript
// ()

void APrimalStructure_GiveRetrieveItem_Bog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C.UserConstructionScript");

	APrimalStructure_GiveRetrieveItem_Bog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_Bog_C::ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Bog");

	APrimalStructure_GiveRetrieveItem_Bog_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
