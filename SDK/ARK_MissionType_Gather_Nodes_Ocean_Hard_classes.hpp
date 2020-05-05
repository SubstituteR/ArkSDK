#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Gather_Nodes_Ocean_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Gather_Nodes_Ocean_Hard.MissionType_Gather_Nodes_Ocean_Hard_C
// 0x0000 (0x1342 - 0x1342)
class AMissionType_Gather_Nodes_Ocean_Hard_C : public AMissionType_Gather_Nodes_Ocean_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Gather_Nodes_Ocean_Hard.MissionType_Gather_Nodes_Ocean_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Gather_Nodes_Ocean_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
