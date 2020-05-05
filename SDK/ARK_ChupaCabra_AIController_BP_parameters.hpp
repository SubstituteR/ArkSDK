#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.IsActorUnderCharge
struct AChupaCabra_AIController_BP_C_IsActorUnderCharge_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isUnderCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.BPNotifyTargetSet
struct AChupaCabra_AIController_BP_C_BPNotifyTargetSet_Params
{
};

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.BPGetTargetingDesire
struct AChupaCabra_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.UserConstructionScript
struct AChupaCabra_AIController_BP_C_UserConstructionScript_Params
{
};

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.IncreaseTargetingRangeForSeconds
struct AChupaCabra_AIController_BP_C_IncreaseTargetingRangeForSeconds_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChupaCabra_AIController_BP.ChupaCabra_AIController_BP_C.ExecuteUbergraph_ChupaCabra_AIController_BP
struct AChupaCabra_AIController_BP_C_ExecuteUbergraph_ChupaCabra_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
