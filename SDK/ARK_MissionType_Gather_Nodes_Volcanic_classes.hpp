#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Gather_Nodes_Volcanic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Gather_Nodes_Volcanic.MissionType_Gather_Nodes_Volcanic_C
// 0x0000 (0x1342 - 0x1342)
class AMissionType_Gather_Nodes_Volcanic_C : public AMissionType_Gather_Nodes_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Gather_Nodes_Volcanic.MissionType_Gather_Nodes_Volcanic_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Gather_Nodes_Volcanic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
