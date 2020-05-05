// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MasterIBL_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterIBL_Ocean.MasterIBL_Ocean_C.ReceiveBeginPlay
// ()

void AMasterIBL_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterIBL_Ocean.MasterIBL_Ocean_C.ReceiveBeginPlay");

	AMasterIBL_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterIBL_Ocean.MasterIBL_Ocean_C.ExecuteUbergraph_MasterIBL_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMasterIBL_Ocean_C::ExecuteUbergraph_MasterIBL_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterIBL_Ocean.MasterIBL_Ocean_C.ExecuteUbergraph_MasterIBL_Ocean");

	AMasterIBL_Ocean_C_ExecuteUbergraph_MasterIBL_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
