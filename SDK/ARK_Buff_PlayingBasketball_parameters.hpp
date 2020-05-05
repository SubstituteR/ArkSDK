#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayingBasketball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.is on court
struct ABuff_PlayingBasketball_C_is_on_court_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPAdjustStatusValueModification
struct ABuff_PlayingBasketball_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Pickup Restriction
struct ABuff_PlayingBasketball_C_Ball_Pickup_Restriction_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.setup if there's color
struct ABuff_PlayingBasketball_C_setup_if_there_s_color_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Drop restriction
struct ABuff_PlayingBasketball_C_Ball_Drop_restriction_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Dropped Or Tossed Ball
struct ABuff_PlayingBasketball_C_Has_Dropped_Or_Tossed_Ball_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Picked Up Ball
struct ABuff_PlayingBasketball_C_Has_Picked_Up_Ball_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPServerHandleNetExecCommand
struct ABuff_PlayingBasketball_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffTickClient
struct ABuff_PlayingBasketball_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ReceiveBeginPlay
struct ABuff_PlayingBasketball_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffAdjustDamage
struct ABuff_PlayingBasketball_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPPreventAddingOtherBuff
struct ABuff_PlayingBasketball_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.UserConstructionScript
struct ABuff_PlayingBasketball_C_UserConstructionScript_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color
struct ABuff_PlayingBasketball_C_Set_Team_Color_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color Multicast
struct ABuff_PlayingBasketball_C_Set_Team_Color_Multicast_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow
struct ABuff_PlayingBasketball_C_Deactivate_Glow_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow Multicast
struct ABuff_PlayingBasketball_C_Deactivate_Glow_Multicast_Params
{
};

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ExecuteUbergraph_Buff_PlayingBasketball
struct ABuff_PlayingBasketball_C_ExecuteUbergraph_Buff_PlayingBasketball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
