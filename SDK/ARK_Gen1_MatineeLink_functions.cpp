// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen1_MatineeLink_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen1_MatineeLink.Gen1_MatineeLink_C.UserConstructionScript
// ()

void AGen1_MatineeLink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_MatineeLink.Gen1_MatineeLink_C.UserConstructionScript");

	AGen1_MatineeLink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen1_MatineeLink.Gen1_MatineeLink_C.RecieveMatineeUpdated
// ()

void AGen1_MatineeLink_C::RecieveMatineeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_MatineeLink.Gen1_MatineeLink_C.RecieveMatineeUpdated");

	AGen1_MatineeLink_C_RecieveMatineeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen1_MatineeLink.Gen1_MatineeLink_C.ReceiveBeginPlay
// ()

void AGen1_MatineeLink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_MatineeLink.Gen1_MatineeLink_C.ReceiveBeginPlay");

	AGen1_MatineeLink_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen1_MatineeLink.Gen1_MatineeLink_C.ExecuteUbergraph_Gen1_MatineeLink
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen1_MatineeLink_C::ExecuteUbergraph_Gen1_MatineeLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_MatineeLink.Gen1_MatineeLink_C.ExecuteUbergraph_Gen1_MatineeLink");

	AGen1_MatineeLink_C_ExecuteUbergraph_Gen1_MatineeLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
