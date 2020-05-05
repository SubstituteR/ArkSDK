// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpiderS_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpiderS_Character_BP_Hunt.SpiderS_Character_BP_Hunt_C.UserConstructionScript
// ()

void ASpiderS_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Hunt.SpiderS_Character_BP_Hunt_C.UserConstructionScript");

	ASpiderS_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderS_Character_BP_Hunt.SpiderS_Character_BP_Hunt_C.ExecuteUbergraph_SpiderS_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderS_Character_BP_Hunt_C::ExecuteUbergraph_SpiderS_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Hunt.SpiderS_Character_BP_Hunt_C.ExecuteUbergraph_SpiderS_Character_BP_Hunt");

	ASpiderS_Character_BP_Hunt_C_ExecuteUbergraph_SpiderS_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
