// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithSpear_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.GetMeleeSocketLocation
// ()
// Parameters:
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABot_WithSpear_BP_C::GetMeleeSocketLocation(struct FName* SocketName, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.GetMeleeSocketLocation");

	ABot_WithSpear_BP_C_GetMeleeSocketLocation_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.UserConstructionScript
// ()

void ABot_WithSpear_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.UserConstructionScript");

	ABot_WithSpear_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.ExecuteUbergraph_Bot_WithSpear_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABot_WithSpear_BP_C::ExecuteUbergraph_Bot_WithSpear_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.ExecuteUbergraph_Bot_WithSpear_BP");

	ABot_WithSpear_BP_C_ExecuteUbergraph_Bot_WithSpear_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
