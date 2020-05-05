#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Lantern_EscortDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Lantern_EscortDino.DinoCharacterStatusComponent_BP_Lantern_EscortDino_C.BPAdjustStatusValueModification
struct UDinoCharacterStatusComponent_BP_Lantern_EscortDino_C_BPAdjustStatusValueModification_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacterStatusComponent_BP_Lantern_EscortDino.DinoCharacterStatusComponent_BP_Lantern_EscortDino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lantern_EscortDino
struct UDinoCharacterStatusComponent_BP_Lantern_EscortDino_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lantern_EscortDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
