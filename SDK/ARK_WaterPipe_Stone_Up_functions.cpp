// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WaterPipe_Stone_Up_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipe_Stone_Up.WaterPipe_Stone_Up_C.UserConstructionScript
// ()

void AWaterPipe_Stone_Up_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Up.WaterPipe_Stone_Up_C.UserConstructionScript");

	AWaterPipe_Stone_Up_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipe_Stone_Up.WaterPipe_Stone_Up_C.ExecuteUbergraph_WaterPipe_Stone_Up
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipe_Stone_Up_C::ExecuteUbergraph_WaterPipe_Stone_Up(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Up.WaterPipe_Stone_Up_C.ExecuteUbergraph_WaterPipe_Stone_Up");

	AWaterPipe_Stone_Up_C_ExecuteUbergraph_WaterPipe_Stone_Up_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
