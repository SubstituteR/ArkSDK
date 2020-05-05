#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CustomIBL_Capture_Blueprint_Working_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.Calculate Light
struct ACustomIBL_Capture_Blueprint_Working_C_Calculate_Light_Params
{
	struct UObject_FTransform                          TransformIn;                                              // (Parm, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.UserConstructionScript
struct ACustomIBL_Capture_Blueprint_Working_C_UserConstructionScript_Params
{
};

// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ReceiveBeginPlay
struct ACustomIBL_Capture_Blueprint_Working_C_ReceiveBeginPlay_Params
{
};

// Function CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C.ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working
struct ACustomIBL_Capture_Blueprint_Working_C_ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
