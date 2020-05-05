#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Stage3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Stage3.MissionType_VRBattle_Stage3_C
// 0x0067 (0x1D61 - 0x1CFA)
class AMissionType_VRBattle_Stage3_C : public AMissionType_VRBattle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x1CFA(0x0002) MISSED OFFSET
	struct FName                                       EndOfStageBossLocationKey;                                // 0x1CFC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       K2Node_Event_OldPhaseName;                                // 0x1D04(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhaseName;                                // 0x1D0C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1D14(0x0004) MISSED OFFSET
	class AMissionServerSidePoint*                     CallFunc_GetSingleServerSidePoint_Point;                  // 0x1D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1D21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1D22(0x0006) MISSED OFFSET
	class AVRMainBoss_Character_C*                     K2Node_DynamicCast_AsVRMainBoss_Character_C;              // 0x1D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1D31(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1D34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1D40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1D4C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_BuildString_Vector_ReturnValue;                  // 0x1D50(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue;                       // 0x1D60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Stage3.MissionType_VRBattle_Stage3_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTeleportAndLevelDestroyPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName);
	void ExecuteUbergraph_MissionType_VRBattle_Stage3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
