// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DinoTekHelmet_Rex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_Rex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.UserConstructionScript");

	ABuff_DinoTekHelmet_Rex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.ExecuteUbergraph_Buff_DinoTekHelmet_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Rex_C::ExecuteUbergraph_Buff_DinoTekHelmet_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.ExecuteUbergraph_Buff_DinoTekHelmet_Rex");

	ABuff_DinoTekHelmet_Rex_C_ExecuteUbergraph_Buff_DinoTekHelmet_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
