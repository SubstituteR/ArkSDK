#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sarco_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.Compute Allow Carry
struct ASarco_Character_BP_Hunt_C_Compute_Allow_Carry_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketDinoName
struct ASarco_Character_BP_Hunt_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketName
struct ASarco_Character_BP_Hunt_C_BPGetDragSocketName_Params
{
	class APrimalCharacter**                           DraggingChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.UserConstructionScript
struct ASarco_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.ExecuteUbergraph_Sarco_Character_BP_Hunt
struct ASarco_Character_BP_Hunt_C_ExecuteUbergraph_Sarco_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
