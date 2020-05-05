#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionSpline_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionSpline_Race.MissionSpline_Race_C
// 0x0000 (0x0570 - 0x0570)
class AMissionSpline_Race_C : public AMissionSpline_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionSpline_Race.MissionSpline_Race_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionSpline_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
