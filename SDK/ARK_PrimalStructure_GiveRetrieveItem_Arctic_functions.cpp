// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_Arctic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C.UserConstructionScript
// ()

void APrimalStructure_GiveRetrieveItem_Arctic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C.UserConstructionScript");

	APrimalStructure_GiveRetrieveItem_Arctic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Arctic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_GiveRetrieveItem_Arctic_C::ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Arctic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Arctic");

	APrimalStructure_GiveRetrieveItem_Arctic_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Arctic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
