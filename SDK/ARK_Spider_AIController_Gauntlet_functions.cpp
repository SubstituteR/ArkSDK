// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spider_AIController_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spider_AIController_Gauntlet.Spider_AIController_Gauntlet_C.UserConstructionScript
// ()

void ASpider_AIController_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Gauntlet.Spider_AIController_Gauntlet_C.UserConstructionScript");

	ASpider_AIController_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spider_AIController_Gauntlet.Spider_AIController_Gauntlet_C.ExecuteUbergraph_Spider_AIController_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpider_AIController_Gauntlet_C::ExecuteUbergraph_Spider_AIController_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spider_AIController_Gauntlet.Spider_AIController_Gauntlet_C.ExecuteUbergraph_Spider_AIController_Gauntlet");

	ASpider_AIController_Gauntlet_C_ExecuteUbergraph_Spider_AIController_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
