// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BogSpider_Character_BP_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C.UserConstructionScript
// ()

void ABogSpider_Character_BP_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C.UserConstructionScript");

	ABogSpider_Character_BP_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C.ExecuteUbergraph_BogSpider_Character_BP_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_Race_C::ExecuteUbergraph_BogSpider_Character_BP_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C.ExecuteUbergraph_BogSpider_Character_BP_Race");

	ABogSpider_Character_BP_Race_C_ExecuteUbergraph_BogSpider_Character_BP_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
