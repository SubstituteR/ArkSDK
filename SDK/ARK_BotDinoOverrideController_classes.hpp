#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BotDinoOverrideController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BotDinoOverrideController.BotDinoOverrideController_C
// 0x0008 (0x08B0 - 0x08A8)
class ABotDinoOverrideController_C : public APrimalDinoAIController
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BotDinoOverrideController.BotDinoOverrideController_C");
		return ptr;
	}


	void OnPossess(class APawn** PossessedPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BotDinoOverrideController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
