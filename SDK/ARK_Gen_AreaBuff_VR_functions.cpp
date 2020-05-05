// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_VR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_VR.Gen_AreaBuff_VR_C.UserConstructionScript
// ()

void AGen_AreaBuff_VR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_VR.Gen_AreaBuff_VR_C.UserConstructionScript");

	AGen_AreaBuff_VR_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_VR.Gen_AreaBuff_VR_C.ExecuteUbergraph_Gen_AreaBuff_VR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_VR_C::ExecuteUbergraph_Gen_AreaBuff_VR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_VR.Gen_AreaBuff_VR_C.ExecuteUbergraph_Gen_AreaBuff_VR");

	AGen_AreaBuff_VR_C_ExecuteUbergraph_Gen_AreaBuff_VR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
