// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OceanDinoManagerBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanDinoManagerBP.OceanDinoManagerBP_C.UserConstructionScript
// ()

void AOceanDinoManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanDinoManagerBP.OceanDinoManagerBP_C.UserConstructionScript");

	AOceanDinoManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanDinoManagerBP.OceanDinoManagerBP_C.ExecuteUbergraph_OceanDinoManagerBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanDinoManagerBP_C::ExecuteUbergraph_OceanDinoManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanDinoManagerBP.OceanDinoManagerBP_C.ExecuteUbergraph_OceanDinoManagerBP");

	AOceanDinoManagerBP_C_ExecuteUbergraph_OceanDinoManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
