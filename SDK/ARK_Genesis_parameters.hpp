#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Genesis.Genesis_C.SortCurrentPostProcessVolumes
struct AGenesis_C_SortCurrentPostProcessVolumes_Params
{
	class APostProcessVolume*                          NewPostProcess;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          CurrentHighestPriorityPostProcess;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.OnRep_CurrentTekCaveDifficulty
struct AGenesis_C_OnRep_CurrentTekCaveDifficulty_Params
{
};

// Function Genesis.Genesis_C.IsReallyUnderwater
struct AGenesis_C_IsReallyUnderwater_Params
{
	bool                                               ReallyUnderwater;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.ReceiveBeginPlay
struct AGenesis_C_ReceiveBeginPlay_Params
{
};

// Function Genesis.Genesis_C.ReceiveTick
struct AGenesis_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.noweather
struct AGenesis_C_noweather_Params
{
};

// Function Genesis.Genesis_C.doweather
struct AGenesis_C_doweather_Params
{
};

// Function Genesis.Genesis_C.stoptime
struct AGenesis_C_stoptime_Params
{
};

// Function Genesis.Genesis_C.StartTime
struct AGenesis_C_StartTime_Params
{
};

// Function Genesis.Genesis_C.OnGameStateReady
struct AGenesis_C_OnGameStateReady_Params
{
	class AGameState**                                 GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.OnAnyPostProcessVolumeEntered
struct AGenesis_C_OnAnyPostProcessVolumeEntered_Params
{
	class APostProcessVolume*                          PostProcessVolume;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.OnAnyPostProcessVolumeLeft
struct AGenesis_C_OnAnyPostProcessVolumeLeft_Params
{
	class APostProcessVolume*                          PostProcessVolume;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Genesis.Genesis_C.BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature
struct AGenesis_C_BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function Genesis.Genesis_C.RenderEndCinematic
struct AGenesis_C_RenderEndCinematic_Params
{
};

// Function Genesis.Genesis_C.PlayEndCinematic
struct AGenesis_C_PlayEndCinematic_Params
{
};

// Function Genesis.Genesis_C.ExecuteUbergraph_Genesis
struct AGenesis_C_ExecuteUbergraph_Genesis_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
