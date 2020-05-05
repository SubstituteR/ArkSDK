#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_CycloneBox_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CycloneBox.Buff_CycloneBox_C.Set Server TickFrequence
struct ABuff_CycloneBox_C_Set_Server_TickFrequence_Params
{
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.UpdateScale
struct ABuff_CycloneBox_C_UpdateScale_Params
{
	struct FVector                                     BoxScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.Update Box Extent
struct ABuff_CycloneBox_C_Update_Box_Extent_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.BPDeactivated
struct ABuff_CycloneBox_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.BuffTickServer
struct ABuff_CycloneBox_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.UserConstructionScript
struct ABuff_CycloneBox_C_UserConstructionScript_Params
{
};

// Function Buff_CycloneBox.Buff_CycloneBox_C.ExecuteUbergraph_Buff_CycloneBox
struct ABuff_CycloneBox_C_ExecuteUbergraph_Buff_CycloneBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
