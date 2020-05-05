// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spider_AIController_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spider_AIController_Hunt.Spider_AIController_Hunt_C.UserConstructionScript
// ()

void ASpider_AIController_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Hunt.Spider_AIController_Hunt_C.UserConstructionScript");

	ASpider_AIController_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spider_AIController_Hunt.Spider_AIController_Hunt_C.ExecuteUbergraph_Spider_AIController_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpider_AIController_Hunt_C::ExecuteUbergraph_Spider_AIController_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Hunt.Spider_AIController_Hunt_C.ExecuteUbergraph_Spider_AIController_Hunt");

	ASpider_AIController_Hunt_C_ExecuteUbergraph_Spider_AIController_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
