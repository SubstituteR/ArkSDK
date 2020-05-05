#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Lunar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPServerHandleNetExecCommand
struct AGen_AreaBuff_Lunar_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckIsInShadow_Client
struct AGen_AreaBuff_Lunar_C_CheckIsInShadow_Client_Params
{
	struct FVector                                     InLightVector;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InShadow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.CheckClientResponse
struct AGen_AreaBuff_Lunar_C_CheckClientResponse_Params
{
	struct FVector                                     ServerLightVector;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SemiCheckedClientInShadow;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BP_OverrideTerminalVelocity
struct AGen_AreaBuff_Lunar_C_BP_OverrideTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsSpinAllowed
struct AGen_AreaBuff_Lunar_C_IsSpinAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.AutomaticRotationCorrection
struct AGen_AreaBuff_Lunar_C_AutomaticRotationCorrection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventCharacterLanding
struct AGen_AreaBuff_Lunar_C_BPPreventCharacterLanding_Params
{
	struct FVector*                                    ImpactPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ImpactAccel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetOverrideWaterJumpVelocity
struct AGen_AreaBuff_Lunar_C_GetOverrideWaterJumpVelocity_Params
{
	float*                                             OutOfWaterZ;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFlying
struct AGen_AreaBuff_Lunar_C_UpdateClientFlying_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleFootsteps
struct AGen_AreaBuff_Lunar_C_HandleFootsteps_Params
{
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.IsWalking
struct AGen_AreaBuff_Lunar_C_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMeshOffset
struct AGen_AreaBuff_Lunar_C_UpdatePlayerMeshOffset_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetMoveAnimRate
struct AGen_AreaBuff_Lunar_C_BPGetMoveAnimRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetFallRotationMultiplier
struct AGen_AreaBuff_Lunar_C_GetFallRotationMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetBuffDescription
struct AGen_AreaBuff_Lunar_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPCustomAllowAddBuff
struct AGen_AreaBuff_Lunar_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPGetGravityZScale
struct AGen_AreaBuff_Lunar_C_BPGetGravityZScale_Params
{
	float*                                             currentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampRotation
struct AGen_AreaBuff_Lunar_C_ClampRotation_Params
{
	float                                              AngleDegrees;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.GetMaxRotation
struct AGen_AreaBuff_Lunar_C_GetMaxRotation_Params
{
	float                                              MaximumPitchRollAngle;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.SetTekSuitState
struct AGen_AreaBuff_Lunar_C_SetTekSuitState_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPBPGetCameraShakeScalar
struct AGen_AreaBuff_Lunar_C_BPBPGetCameraShakeScalar_Params
{
	class UClass**                                     currentShake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             currentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClampInputValue
struct AGen_AreaBuff_Lunar_C_ClampInputValue_Params
{
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.HandleWeaponFired
struct AGen_AreaBuff_Lunar_C_HandleWeaponFired_Params
{
	class AShooterWeapon*                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateFallingCorrection
struct AGen_AreaBuff_Lunar_C_UpdateFallingCorrection_Params
{
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdateClientFallingRotation
struct AGen_AreaBuff_Lunar_C_UpdateClientFallingRotation_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.OverrideFallRotationSettings
struct AGen_AreaBuff_Lunar_C_OverrideFallRotationSettings_Params
{
	bool                                               InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Update Player Movement Client
struct AGen_AreaBuff_Lunar_C_Update_Player_Movement_Client_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UpdatePlayerMovement_Server
struct AGen_AreaBuff_Lunar_C_UpdatePlayerMovement_Server_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickClient
struct AGen_AreaBuff_Lunar_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPDeactivated
struct AGen_AreaBuff_Lunar_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPSetupForInstigator
struct AGen_AreaBuff_Lunar_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BPPreventAddingOtherBuff
struct AGen_AreaBuff_Lunar_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BuffTickServer
struct AGen_AreaBuff_Lunar_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.Check IsIn Shadow
struct AGen_AreaBuff_Lunar_C_Check_IsIn_Shadow_Params
{
	struct FVector                                     InLightVector;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InShadow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.UserConstructionScript
struct AGen_AreaBuff_Lunar_C_UserConstructionScript_Params
{
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.BindPlayerEvents
struct AGen_AreaBuff_Lunar_C_BindPlayerEvents_Params
{
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.NotifyWeaponFired_Event
struct AGen_AreaBuff_Lunar_C_NotifyWeaponFired_Event_Params
{
	class AShooterWeapon*                              weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ServerWeaponFired
struct AGen_AreaBuff_Lunar_C_ServerWeaponFired_Params
{
	struct FVector                                     RecoilDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              FiredWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadow
struct AGen_AreaBuff_Lunar_C_ClientCheckShadow_Params
{
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ClientCheckShadowResponse
struct AGen_AreaBuff_Lunar_C_ClientCheckShadowResponse_Params
{
	bool                                               ClientAssumesShadow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C.ExecuteUbergraph_Gen_AreaBuff_Lunar
struct AGen_AreaBuff_Lunar_C_ExecuteUbergraph_Gen_AreaBuff_Lunar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
