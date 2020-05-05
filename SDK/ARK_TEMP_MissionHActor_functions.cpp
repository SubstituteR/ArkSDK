// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TEMP_MissionHActor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEMP_MissionHActor.TEMP_MissionHActor_C.UserConstructionScript
// ()

void ATEMP_MissionHActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEMP_MissionHActor.TEMP_MissionHActor_C.UserConstructionScript");

	ATEMP_MissionHActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEMP_MissionHActor.TEMP_MissionHActor_C.ReceiveBeginPlay
// ()

void ATEMP_MissionHActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEMP_MissionHActor.TEMP_MissionHActor_C.ReceiveBeginPlay");

	ATEMP_MissionHActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEMP_MissionHActor.TEMP_MissionHActor_C.ExecuteUbergraph_TEMP_MissionHActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATEMP_MissionHActor_C::ExecuteUbergraph_TEMP_MissionHActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEMP_MissionHActor.TEMP_MissionHActor_C.ExecuteUbergraph_TEMP_MissionHActor");

	ATEMP_MissionHActor_C_ExecuteUbergraph_TEMP_MissionHActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
