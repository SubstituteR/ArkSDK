#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_IceKaijuIntro_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_IceKaijuIntro.Task_IceKaijuIntro_C.ReceiveExecute
struct UTask_IceKaijuIntro_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuIntro.Task_IceKaijuIntro_C.ExecuteUbergraph_Task_IceKaijuIntro
struct UTask_IceKaijuIntro_C_ExecuteUbergraph_Task_IceKaijuIntro_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
