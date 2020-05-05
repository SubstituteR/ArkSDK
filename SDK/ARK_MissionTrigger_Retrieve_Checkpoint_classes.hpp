#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_Retrieve_Checkpoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_Retrieve_Checkpoint.MissionTrigger_Retrieve_Checkpoint_C
// 0x002F (0x08FD - 0x08CE)
class AMissionTrigger_Retrieve_Checkpoint_C : public AMissionTrigger_SpawningCheckpoint_C
{
public:
	bool                                               Retrieve_SpawnItemOnTrigger;                              // 0x08CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08CF(0x0001) MISSED OFFSET
	float                                              Retrieve_TimeToActivateNextCheckpoint;                    // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Retrieve_AdditionalDinosSpawnDelay;                       // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDinoSetup>                          Retrieve_AdditionalDinos;                                 // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Retrieve_RandomizeAdditionalDinos;                        // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	struct FVector2D                                   Retrieve_NrOfRandomDinosMinMax;                           // 0x08EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Retrieve_AdditionalDinosSpawnPattern;                     // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	float                                              Retrieve_AdditionalDinosSpawnRadius;                      // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Retrieve_UseAdditionalDinosAsOverride;                    // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_Retrieve_Checkpoint.MissionTrigger_Retrieve_Checkpoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionTrigger_Retrieve_Checkpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
