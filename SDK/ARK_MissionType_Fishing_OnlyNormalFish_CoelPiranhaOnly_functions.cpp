// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.Can Fish Class Be Caught
// ()
// Parameters:
// class UClass**                 Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C::Can_Fish_Class_Be_Caught(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.Can Fish Class Be Caught");

	AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C_Can_Fish_Class_Be_Caught_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.UserConstructionScript
// ()

void AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.UserConstructionScript");

	AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C::ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly");

	AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C_ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
