#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SetCurrentAttack_TK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ReceiveExecute
struct USetCurrentAttack_TK_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ExecuteUbergraph_SetCurrentAttack_TK
struct USetCurrentAttack_TK_C_ExecuteUbergraph_SetCurrentAttack_TK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
