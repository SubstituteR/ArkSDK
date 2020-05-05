// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Ocean_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.BuffTickServer");

	AGen_AreaBuff_Ocean_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.UserConstructionScript
// ()

void AGen_AreaBuff_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.UserConstructionScript");

	AGen_AreaBuff_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.ExecuteUbergraph_Gen_AreaBuff_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Ocean_C::ExecuteUbergraph_Gen_AreaBuff_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.ExecuteUbergraph_Gen_AreaBuff_Ocean");

	AGen_AreaBuff_Ocean_C_ExecuteUbergraph_Gen_AreaBuff_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
