#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_HuntSpawnLocation_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C
// 0x0010 (0x04B8 - 0x04A8)
class AMissionServerSidePoint_HuntSpawnLocation_C : public AMissionServerSidePoint
{
public:
	class UArrowComponent*                             Arrow1;                                                   // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_HuntSpawnLocation.MissionServerSidePoint_HuntSpawnLocation_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionServerSidePoint_HuntSpawnLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
