// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithTekGrenades_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C.UserConstructionScript
// ()

void ABot_WithTekGrenades_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C.UserConstructionScript");

	ABot_WithTekGrenades_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C.ExecuteUbergraph_Bot_WithTekGrenades_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABot_WithTekGrenades_BP_C::ExecuteUbergraph_Bot_WithTekGrenades_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C.ExecuteUbergraph_Bot_WithTekGrenades_BP");

	ABot_WithTekGrenades_BP_C_ExecuteUbergraph_Bot_WithTekGrenades_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
