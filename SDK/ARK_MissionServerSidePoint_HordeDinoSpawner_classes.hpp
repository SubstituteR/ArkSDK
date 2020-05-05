#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_HordeDinoSpawner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C
// 0x0100 (0x05A8 - 0x04A8)
class AMissionServerSidePoint_HordeDinoSpawner_C : public AMissionServerSidePoint
{
public:
	class UCapsuleComponent*                           SpawnArea;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnSpecifiedDino;                                       // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FDinoSetup                                  Dino;                                                     // 0x04C0(0x00E8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_HordeDinoSpawner.MissionServerSidePoint_HordeDinoSpawner_C");
		return ptr;
	}


	TArray<struct FBPMapCheckEntry> STATIC_BPCheckForErrors();
	void UserConstructionScript();
	void ExecuteUbergraph_MissionServerSidePoint_HordeDinoSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
