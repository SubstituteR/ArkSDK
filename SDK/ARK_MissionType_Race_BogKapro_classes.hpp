#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_BogKapro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Race_BogKapro.MissionType_Race_BogKapro_C
// 0x0000 (0x2610 - 0x2610)
class AMissionType_Race_BogKapro_C : public AMissionType_Race_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race_BogKapro.MissionType_Race_BogKapro_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Race_BogKapro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
