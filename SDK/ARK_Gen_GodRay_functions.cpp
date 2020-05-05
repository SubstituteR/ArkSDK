// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_GodRay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_GodRay.Gen_GodRay_C.UserConstructionScript
// ()

void AGen_GodRay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_GodRay.Gen_GodRay_C.UserConstructionScript");

	AGen_GodRay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_GodRay.Gen_GodRay_C.ExecuteUbergraph_Gen_GodRay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_GodRay_C::ExecuteUbergraph_Gen_GodRay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_GodRay.Gen_GodRay_C.ExecuteUbergraph_Gen_GodRay");

	AGen_GodRay_C_ExecuteUbergraph_Gen_GodRay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
