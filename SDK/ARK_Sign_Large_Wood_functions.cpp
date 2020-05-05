// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sign_Large_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_Large_Wood.Sign_Large_Wood_C.UserConstructionScript
// ()

void ASign_Large_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Large_Wood.Sign_Large_Wood_C.UserConstructionScript");

	ASign_Large_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_Large_Wood.Sign_Large_Wood_C.ExecuteUbergraph_Sign_Large_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_Large_Wood_C::ExecuteUbergraph_Sign_Large_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Large_Wood.Sign_Large_Wood_C.ExecuteUbergraph_Sign_Large_Wood");

	ASign_Large_Wood_C_ExecuteUbergraph_Sign_Large_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
