#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C
// 0x00EF (0x1B78 - 0x1A89)
class AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C : public AMissionType_Fishing_OnlyNormalFish_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1A89(0x0007) MISSED OFFSET
	struct FDinoSetup                                  disallowed_fish_class_setup;                              // 0x1A90(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_C");
		return ptr;
	}


	bool Can_Fish_Class_Be_Caught(class UClass** Class);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
