// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spider_AIController_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spider_AIController_Retrieve.Spider_AIController_Retrieve_C.UserConstructionScript
// ()

void ASpider_AIController_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Retrieve.Spider_AIController_Retrieve_C.UserConstructionScript");

	ASpider_AIController_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spider_AIController_Retrieve.Spider_AIController_Retrieve_C.ExecuteUbergraph_Spider_AIController_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpider_AIController_Retrieve_C::ExecuteUbergraph_Spider_AIController_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Retrieve.Spider_AIController_Retrieve_C.ExecuteUbergraph_Spider_AIController_Retrieve");

	ASpider_AIController_Retrieve_C_ExecuteUbergraph_Spider_AIController_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
