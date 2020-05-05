#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Decorator_IsAtMissionPathDestination_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C
// 0x0032 (0x00C2 - 0x0090)
class UDecorator_IsAtMissionPathDestination_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              DebugDrawDuration;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBoolExecResult>                       CallFunc_MissionAI_GetMissionFromController_OutResult;    // 0x00A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class AMissionType*                                CallFunc_MissionAI_GetMissionFromController_Mission;      // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_MissionAI_GetMissionFromController_DinoPawn;     // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     CallFunc_MissionAI_GetMissionFromController_DinoController;// 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x00C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_MissionAI_IsAtPathDestination_ReturnValue;       // 0x00C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Decorator_IsAtMissionPathDestination(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
